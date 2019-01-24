//header files used for program
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <process.h>
#include <alloc.h>
//defining the structure phonebook
struct phonebook
{
	char name [50];
	long long int number;
	char email [50];
	char address [50];

};
//functions used for program
void add ();//to add the information in phonebook
void list ();//to list down the information of phonebook
void search ();//to search the information by name and number
void delet();//to delete the information
int count ();//to count the number of phonebook
void del();

typedef struct phonebook book;//defining the structure type phonebook
//declaring global variables so that we can access in each function
FILE *fp,*fpsrt;//
char qt='n';

book phb,tmp,*temp,repl,hold;//using type defined phonebook book
char sname[30];//sname for search by name while delete and search
long long int num;//num for search by number while search
int i,j,counter=0,dec,ct;//i,j used in loop, counter for no of information, dec for decision char,ct to take return value from count function

//main program
int main ()
{
clrscr ();
printf ("\t\t\t\tPhonebook\n");//title
 do
 {
printf ("Choices:\n1.List\t\t\t2.Add\n3.Search\t\t4.Delete\n5.Count\t\t\t6.Quit\n Your Choice: ");
scanf ("%d",&dec);
if (dec==1)
list();//calling void list function
else if (dec==2)
add();//calling void add function
else if (dec==3)
search();//calling void search function
else if (dec==4)
{
delet();//calling void delete function
printf("The contact have been deleted.\n");
}
else if (dec==5)
{
clrscr();
printf("\n\t\t\t\tCount\n");//title count
ct=count();//calling function count which returns int value
printf("There are %d records.\n",counter);//printing no of records after count
}
else if (dec==6)
break;//quit the loop and comes out of loop
else
printf ("There are no other choices.\n");
}while (1);//for run loop until user choose to quit
return 0;
}


//to list the no of records
void list ()
{
 clrscr();
    printf("\t\t\tList\n");
    fp = fopen("phbook.txt","r+"); //opening file in read write mode
    if(fp==NULL) //check whether the file is empty or not
    {
	printf("  Couldn't open the file\n");//if empty print msg
    }
    //read from file and addressing to the defined struct book php
    while(fread(&phb,sizeof(phb),1,fp)>0)
     {  //print the records
	printf("\n  Name:%s\n  Number:%lli\n  Email:%s\n  Address:%s\n\n",phb.name,phb.number,phb.email,phb.address);
    }
    fclose(fp);//closing the file

}
//to add records into the file
void add ()
{

 clrscr();
 printf ("\n\t\t\t\tAdd To Phonebook\n");//title add
 fp=fopen("phbook.txt","a");//opening file in append mode
 if (fp==NULL)
 exit (0);//if file is null then exit through process
  printf("\n  Name:");
    fflush(stdin);  //flushing the previous value
    gets(phb.name); //getting name
    printf("  Number:");
    fflush(stdin);
    scanf("%lli",&phb.number); //getting number
    printf("  Email:");
    fflush(stdin);
    scanf("%s",&phb.email);//getting email
    printf("  Address:");
    fflush(stdin);
    scanf("%s",&phb.address);//getting address
    fwrite(&phb,sizeof(phb),1,fp);

    fclose(fp);//closing the file
	fpsrt = fopen("phbook.txt","r");//opening file in read mode
	counter=0; //initializing the counter variable
    while(fread(&tmp,sizeof(tmp),1,fpsrt)>0){    //Find how many of the records are there for later use
	counter++; //incrementing counter
    }

    fclose(fpsrt);//closing file
    i=0; //initialization
    //memory allocation of datatype book and no of counter
    temp = (book *) calloc(counter,sizeof(book));
    //opening file in read mode
    fpsrt = fopen("phbook.txt","r");
    //reading from file and addressing to tmp
    while(fread(&tmp,sizeof(tmp),1,fpsrt)>0){       //Reads the records and stores into it's memory
	temp[i] = tmp;//putting data into temp one by one
	i++;//increment i by 1
    }
    fclose(fpsrt);//closing the file
    for(i=0; i<counter; i++){         //To Sort the records by the name
	for(j=i+1; j<counter; j++){
	    if(strcmp(temp[i].name,temp[j].name)>0)//comparing the string name
	    {
		//using cyclic method to swap
		repl = temp[i];
		temp[i] = temp[j];
		temp[j] = repl;
	    }
	}
    }
    fp = fopen("phbook.txt","w");//opening the file in write mode
    if(fp==NULL)
	printf("Error while opening the phonebook");
	//using loop to write the content of temp[i] into file one by one
    for(i=0; i<counter; i++)
    {
	fwrite(&temp[i],sizeof(temp[i]),1,fp);
    }
    fclose(fp);//closing the file
    free(temp);//to free the struct temp
    //print msg
    printf("  The contact has been successfully added\n\n");
    //asking user to add more
    printf ("Do you want to add more?y/n\n");
    fflush(stdin);//flushing previous data
    scanf("%c",&qt);//taking character
    if (qt=='y')
    add();//if the character is y then calling add function again
    //in case of other character
    else
    printf ("\nOk then there you go.\n");

}
//to search the record
void search ()
{
    clrscr();
    printf("\t\t\tSearch\n");//title
    fp = fopen("phbook.txt","r");   //opening the file
    if(fp==NULL){
	printf("  Error while opening phonebook\n");
    }
    //giving choice to search either by name or number
    printf("\n  1:Search by name\n  2:Search by phone number\n  Choose:");
    fflush(stdin);//flush prev data
    scanf("%d",&dec);
    if(dec==1)//search by name if user choose 1
    {
	printf("  Enter the name:");
	fflush(stdin);
	gets(sname);//getting the name to search
	while(fread(&hold,sizeof(hold),1,fp)>0)//reading records from file and address to hold
	{
	    if(strcmp(hold.name,sname)==0)//matching the name
	    {   //if matched then print found
		printf("\tContact Found:");
		printf("\n  Name:%s\n  Number:%lli\n  Email:%s\n  Address:%s\n\n",hold.name,hold.number,hold.email,hold.address);
		goto incase;
	    }
	}
	//if not found then
	printf("  There is no contact named %s\n\n",sname);
    }
    else if(dec==2)//search by number if user choose 2
    {
	printf("  Enter the number:");
	fflush(stdin);
	scanf("%lli",&num);//get the number from user
	while(fread(&hold,sizeof(hold),1,fp)>0)//read from file and address to hold
	{
	    if(hold.number==num)//matching the number
	    {   //if matched then
		printf("\nContact found:\n");
		printf("\n  Name:%s\n  Number:%lli\n  Email:%s\n  Address:%s\n\n",hold.name,hold.number,hold.email,hold.address);
		goto incase;//going to incase after found
	    }

	}
	//if not found then
	printf("  There is no information of the number %lli\n\n",num);
    }
    else //if user choose rather than 1 and 2 then
    {
	printf("  Invalid choice, try again\n");
    }
    incase: //after finding the contact
    fclose(fp);//closing the file

}
//delet function to delete contact
void delet(){
    clrscr();
    printf("\n\t\t\t\tDelete\n");//title delete
    //asking the name
    printf("\n  Enter the name of the person you want to delete contact of: ");
    fflush(stdin); //flusing the previous value
    gets(sname);//getting searching name from user
    fp=fopen("phbook.txt","r");  //opening file in read mode
     if(fp==NULL){
	printf("  Error while opening phonebook\n");
    }
    //using loop to read from file and store to hold
    while(fread(&hold,sizeof(hold),1,fp)>0){
	    if(strcmp(hold.name,sname)==0)//checking the name are same or not
	    {
		printf("\tContact Found:");//if same then found
		//print info of the sname
		printf("\n  Name:%s\n  Number:%lli\n  Email:%s\n  Address:%s\n\n",hold.name,hold.number,hold.email,hold.address);
		goto incase;
	    }
	}
	//if not found
	printf("  There is no contact named %s\n\n",sname);
	//asking to search again
	printf ("Do you want to search again? y/n\n");
	fflush(stdin);
	scanf("%c",&qt);//getting qt
	if(qt=='y')
	delet(); //recall own function delet()
	else
	exit(0); //if not then exit

	//if found then
    incase:
    fclose(fp);//closing the file
    ct=count(); //counting the no of records by calling count function
    i=0; //initialize i
    temp = (book *) calloc(ct,sizeof(book));//allocating memory
    fpsrt = fopen("phbook.txt","r");//opening file in read mode
    while(fread(&tmp,sizeof(tmp),1,fpsrt)>0){ //Reads the records and stores into it's memory
	temp[i] = tmp;
	i++; //increment i
    }

    fclose(fpsrt);//closing the file

    //opening file in write mode
    fp = fopen("phbook.txt","w");
    if(fp==NULL){
	printf("  Error while opening the file\n");
    }
    for(i=0; i<ct; i++)//using loop
    {
	if(strcmp(temp[i].name,sname)==0)
	{
	    continue;//when the name are same then the prosess of writing into file is skipped
	}
	//writing into the file
	fwrite(&temp[i],sizeof(temp[i]),1,fp);

    }
    fclose(fp);//closing the file
    free(temp);//to free the temp

}
//count function returns int value
int count ()
{

    counter=0;//initializing the counter
    fpsrt = fopen("phbook.txt","r");//opening file in read mode
    while(fread(&tmp,sizeof(tmp),1,fpsrt)>0){   //Find how many of the records are there for later use
	counter++; //counting incrementing counter variable
    }
    fclose(fpsrt);//closing the file
    return counter;

}
