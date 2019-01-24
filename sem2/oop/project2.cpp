#include <iostream>
#include<iomanip>
#include<fstream>
#include<string.h>
using namespace std;
class footballer{

         protected:

         char id[10],name[30];
         int per;

         public:

         footballer(){per =100;}
         void getid()
         {
          cout<<"input footballer id ";
          cin>>id;
          cout<<"input fottballer name";
          cin>>name;
         };


         };

class fileinfoot:public footballer{

                     public:
                     void fil()
                     {
                      fstream x("FOOTBALL.txt",ios::out|ios::app);
                      x.width(30);
                      x<<endl;
                      x<<name;
                      x.width(20);
                      x<<id;
                      x.close();

                     }

} ;
class goalkeeper: public fileinfoot{
                    int save;
                    int loss;
                    public:
                   void performance()
                   {
                    getid();
                    cout<<"\nHow many goal he saved?\n";
                    cin>>save;
                    save=save*25;
                    cout<<"\nHow many goal he got\n;";
                    cin>>loss;
                    loss=loss*75;
                    per=per+save-loss;
                    if(per<0)
                    per=0;
                    file();
}
void file();


};

      void  goalkeeper::file()
                 {
                  char fil[20];
                  strcpy(fil,id);
                  strcat(fil,".txt");
                  ofstream x(fil);
                  x<<"NAME:-"<<name<<endl;
                  x<<"ID:-"<<id<<endl;
                  x<<"POSITION- GOALKEEPER\n";
                  x<<"Performance point:-"<<per<<endl;
                  x.close();
                       fstream y("GOALKEEP.txt",ios::out|ios::app);
                      y<<endl;
                      y.width(30);
                      y<<name;
                      y.width(20);
                      y<<id;
                      y.close();


                 }

class defender: public fileinfoot{
                    int defend;
                    int loss;
                    public:
                   void performance()
                   {
                    getid();
                    cout<<"\nHow many defend?\n";
                    cin>>defend;
                    defend=defend*25;
                    cout<<"\nHow many missdefence\n;";
                    cin>>loss;
                    loss=loss*5;
                    per=per+defend-loss;
                    if(per<0)
                    per=0;

                    file();
                   }
                   void file();

};
 void defender::file()
                 {
                  char fil[20];
                  strcpy(fil,id);
                  strcat(fil,".txt");
                  ofstream x(fil);
                  x<<"NAME:-"<<name<<endl;
                  x<<"ID:-"<<id<<endl;
                  x<<"POSITION- DEFENDER\n";
                  x<<"Performance point:-"<<per<<endl;
                  x.close();
                       fstream y("DEFENDER.txt",ios::out|ios::app);
                      y<<endl;
                      y.width(30);
                      y<<name;
                      y.width(20);
                      y<<id;
                      y.close();
                 }

class midfielder:public fileinfoot{
                     int passing;
                    int mispass;
                    public:
                   void performance()
                   {getid();
                    cout<<"\nHow many pass?\n";
                    cin>>passing;
                    passing=passing*25;
                    cout<<"\nHow many miss pass\n;";
                    cin>>mispass;
                    mispass=mispass*75;
                    per=per+passing-mispass;
                    if(per<0)
                    per=0;
                    file();
                   }
                    void file();

};
 void midfielder:: file()
                 {
                  char fil[20];
                  strcpy(fil,id);
                  strcat(fil,".txt");
                  ofstream x(fil);
                  x<<"NAME:-"<<name<<endl;
                  x<<"ID:-"<<id<<endl;
                  x<<"POSITION- MIDFIELDER\n";
                  x<<"Performance point:-"<<per<<endl;
                  x.close();
                   fstream y("MIDFIELD.txt",ios::out|ios::app);
                      y<<endl;
                      y.width(30);
                      y<<name;
                      y.width(20);
                      y<<id;
                      y.close();



                 }

class striker: public fileinfoot{
                    int goal;
                    int loss;
                public:
                   void performance()
                   {getid();
                    cout<<"\nHow many goal?\n";
                    cin>>goal;
                    goal=goal*25;
                    cout<<"\nHow many goal he miss\n;";
                    cin>>loss;
                    loss=loss*75;
                    per=per+goal-loss;
                    if(per<0)
                    per=0;
                    file();
                   }
                    void file();

};
 void striker:: file()
                 {
                  char fil[20];
                  strcpy(fil,id);
                  strcat(fil,".txt");
                  ofstream x(fil);
                  x<<"NAME:-"<<name<<endl;
                  x<<"ID:-"<<id<<endl;
                  x<<"POSITION- STRIKER\n";
                  x<<"Performance point:-"<<per<<endl;
                  x.close();
                  fstream y("STRIKER.txt",ios::out|ios::app);
                      y<<endl;
                      y.width(30);
                      y<<name;
                      y.width(20);
                      y<<id;
                      y.close();
                 }



class add{
         public:
         add();
         };
     add::add(){
          goalkeeper g;
          defender d;
          striker s;
          midfielder m;
          int co;
          while(1)
          {//clrscr();
          cout<<"\n1...goalkeeper\n2...defender\n3...striker\n4...midfielder\n5...exit\n";
          cin>>co;
          if(co==5)
          break;
          if(co==1)
          {
        g.performance();
        g.fil();
          }
           if(co==2)
          { d.performance();
           d.fil();
           }
           if(co==3)
           {
           s.performance();
           s.fil();
           }
           if(co==4)
           {
           m.performance();
           m.fil();
          }
          }
         }




class search{

public:
void find();
} ;
void search::find(){
            int i;
            char id[20],c;
            while(1)
            {
             //clrscr();
            cout<<"1...ALL FOOTBALLER\n2...ALL GOALKEEPER\n3...ALL DEFENDER\n";
            cout<<"4...ALL MIDFIELDER\n5...ALL STRIKER\n6...SEARCH BY ID\n7...Exit";
            cin>>i;
            if(i==7)
            break;
            if(i==1)
            {
            ifstream x("FOOTBALL.txt");
            cout<<"FOOTBALLERS NAME AND ID \n\n";
            while(x)
             { x.get(c);
               cout<<c;
              }

              x.close();
          }
          if(i==2)
          {ifstream x("GOALKEEP.txt");
           cout<<"FOOTBALLERS NAME AND ID \n\n";
           while(x)
           { x.get(c);
             cout<<c;
           }
           //getch();
           x.close();
          }
          if(i==3)
          {ifstream x("DEFENDER.txt");
           cout<<"DEFENERS NAME AND ID \n\n";
           while(x)
           { x.get(c);
             cout<<c;
           }
 //          getch();
           x.close();
          }
          if(i==4)
          {ifstream x("MIDFIELD.txt");
           cout<<"MIDFIELDERS NAME AND ID \n\n";
           while(x)
           { x.get(c);
             cout<<c;
           }
//           getch();
           x.close();
          }
          if(i==5)
          {ifstream x("STRIKER.txt");
           cout<<"STRIKER NAME AND ID \n\n";
           while(x)
           { x.get(c);
             cout<<c;
           }
//           getch();
           x.close();
          }
          if(i==6)
          {//clrscr();
           cout<<"input the id";
           cin>>id;
           char fil[20];
          strcpy(fil,id);
           strcat(fil,".txt");
           ifstream x(fil);
            while(x)
           { x.get(c);
             cout<<c;
           }
//           getch();
           x.close();
          }
          }

}


int main()
{
  int c;
// clrscr();

 while(1)
 {
//  clrscr();
  cout<<"1...add\n2...search\n3...exit\n\n";
  cin>>c;
  if(c==3)
     break;
  else if(c==1)
     {
      add a;
     }
  else if(c==2)
     {
     search f;
     f.find();
     }

 }


 return 0;
}
