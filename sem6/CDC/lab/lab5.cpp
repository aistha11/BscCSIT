//Lab no 5: C- program to compute FIRST of a given grammar

/*

A = B + a
B = ab
V = a

*/
#include<iostream>
#include<iomanip>
using namespace std;

void FIRST(char[ ], char );
void addToResultSet(char[ ], char);
int nop;//num Of Productions
char productionSet[10][10];
int main()
{
    int i;
    char choice;
    char c;
    char result[20];
    cout<<"How many number of productions ? : ";
    cin>>nop;
    for(i=0; i <nop; i++)//read production string e.g.: E=E+T
    {
        cout<<"Enter productions Number "<<i+1 <<" : ";
        cin>>productionSet[i];
    }
    do
    {
        cout<<"\n Find the FIRST of : ";
        cin>>c;
        FIRST(result, c); //Compute FIRST; Get Answer in 'result' array
        cout<<"\n FIRST("<<c<<")= { ";
        for(i=0;result[i]!='\0';i++)
            cout<<result[i]<<" ";       //Display result
        cout<<"}\n";
        cout<<" Continue?(y/n) : ";
        cin>>choice;
    }while(choice=='y'||choice =='Y');
}
void FIRST(char* Result, char c)
{
    int i, j, k;
    char subResult[20];
    int foundEpsilon;
    subResult[0]='\0';
    Result[0]='\0';
    //If X is terminal, FIRST(X) = {X}
    if(!(isupper(c)))
    {
       	addToResultSet(Result, c);
        return ;
    }
    //If X is non terminal then read each production
    for(i=0; i<nop; i++)
    {
			//Find production with X as LHS
        	if(productionSet[i][0]==c)
        	{
				if(productionSet[i][3]=='$')
					addToResultSet(Result,'$');
            	//If X is a non-terminal, and X ? Y1 Y2 … Yk is a production, then add a to FIRST(X)
      			else
            	{
                	j=3;
                	while(productionSet[i][j]!='\0')
                	{
                		foundEpsilon=0;
                		FIRST(subResult, productionSet[i][j]);
                		for(k=0;subResult[k]!='\0';k++)
                		{
							addToResultSet(Result, subResult[k]);
						}
						for(k=0;subResult[k]!='\0';k++)
						{
                    		if(subResult[k]=='$')
                    		{
                        		foundEpsilon=1;
                        		break;
							}
						}
                 		//No e found, no need to check next element
                 		if(!foundEpsilon)
                     		break;
                 		j++;
                	}
            	}
      		}
  	}
  	return;
}
void addToResultSet(char Result[ ], char val)
{
    int k;
    for(k=0 ;Result[k]!='\0';k++)
    {
	    if(Result[k]==val)
            return;
	}
    Result[k]=val;
    Result[k+1]='\0';
}

