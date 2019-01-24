#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

void list();
void add();
void search();
void edit();
void delete();
void count();


struct informations{
    char name[30];
    long long int number;
    char email[30];
    char address[20];
};


 /* Some list of combinations

    0 = Black
    1 = BlueDennis Ritchie
    2 = Green
    3 = Aqua
    4 = Red
    5 = Purple
    6 = Yellow
    7 = White
    8 = Gray
    9 = Light Blue
    A = Light Green
    B = Light Aqua
    C = Light Red
    D = Light Purple
    E = Light Yellow
    F = Bright White */


typedef struct informations info;
int counter=0;

void main(){
    int dec;
    system("color 70");
    printf("\t\t\t\tPhonebook\n");
    while(1)
    {
	printf("  Choices:\n  1:List\n  2:Add\n  3:Search\n  4:Edit\n  5:Delete\n  0:Exit\n  Your Choice:");
	scanf("%d",&dec);
	switch(dec)
	{
	case 1:
	    list();
	    break;
	case 2:
	    add();
	    break;
	case 3:
	    search();
	    break;
	case 4:
	    edit();
	    break;
	case 5:
	    delete();
	    break;
	case 0:
	    exit(0);
	default:
	    printf("  Something's wrong, Please try again\n");
	    break;
	}
    }

    getch();
}

void list ()
{
    clrscr();
    FILE *fpp;
    fpp = fopen("phonebook.txt","r+");
    info in;
    if(fpp==NULL)
    {
	printf("  Couldn't open the file\n");
    }

    while(fread(&in,sizeof(in),1,fpp)>0)
     {
	printf("\n  Name:%s\n  Number:%lli\n  Email:%s\n  Address:%s\n\n",in.name,in.number,in.email,in.address);
    }
    fclose(fpp);
}

void add(){
    system("cls");
    FILE *fp,*fpsrt;
    int i,j;
    fp=fopen("phonebook.txt","a");
    if(fp==NULL)
    {
	printf("  Error while opening the contact\n");
    }
    info inf,tmp,repl;
    info *temp;
    printf("\n  Name:");
    fflush(stdin);
    gets(inf.name);
    printf("  Number:");
    fflush(stdin);
    scanf("%lli",&inf.number);
    printf("  Email:");
    fflush(stdin);
    scanf("%s",&inf.email);
    printf("  Address:");
    fflush(stdin);
    scanf("%s",&inf.address);
    fwrite(&inf,sizeof(inf),1,fp);

    fclose(fp);

    fpsrt = fopen("phonebook.txt","r");
    while(fread(&tmp,sizeof(tmp),1,fpsrt)>0){    //Find how many of the records are there for later use
	counter++;
    }
    //printf("  The total number of record is %d\n\n",counter);
    fclose(fpsrt);
    i=0;
    temp = (info *) calloc(counter,sizeof(info));
    fpsrt = fopen("phonebook.txt","r");
    while(fread(&tmp,sizeof(tmp),1,fpsrt)>0){       //Reads the records and stores into it's memory
        temp[i] = tmp;
        i++;
    }
    fclose(fpsrt);
    for(i=0; i<counter; i++){                        //Sorts the records why the name
        for(j=i+1; j<counter; j++){
            if(strcmp(temp[i].name,temp[j].name)>0){
                repl = temp[i];
                temp[i] = temp[j];
                temp[j] = repl;
            }
        }
    }
    fp = fopen("phonebook.txt","w");
    if(fp==NULL)
        printf("Error while opening the phonebook");
    for(i=0; i<counter; i++){
        fwrite(&temp[i],sizeof(temp[i]),1,fp);
    }
    fclose(fp);
    free(temp);

    del();

    printf("  The contact has been successfully added\n\n");


}

void search(){
    system("cls");
    info *fp;
    fp = fopen("phonebook.txt","r");
    if(fp==NULL){
        printf("  Error while opening phonebook\n");
    }
    info hold;
    char name[30];
    long long int num;
    int dec;
    printf("\n  1:Search by name\n  2:Search by phone number\n  Choose:");
    scanf("%d",&dec);
    if(dec==1){
        printf("  Enter the name:");
        fflush(stdin);
        gets(name);
        while(fread(&hold,sizeof(hold),1,fp)>0){
            if(strcmp(hold.name,name)==0){
                printf("\n  Name:%s\n  Number:%lli\n  Email:%s\n  Address:%s\n\n",hold.name,hold.number,hold.email,hold.address);
                goto incase;
            }
            /*
            else{
                printf("There is no contact named %s\n",name);
            } */
        }
        printf("  There is no contact named %s\n\n",name);
    }
    else if(dec==2){
        printf("  Enter the number:");
        scanf("%lli",&num);
        while(fread(&hold,sizeof(hold),1,fp)>0){
            if(hold.number==num){
                printf("\n  Name:%s\n  Number:%lli\n  Email:%s\n  Address:%s\n\n",hold.name,hold.number,hold.email,hold.address);
                goto incase;
            }
            /*
            else{
                printf("The is no contact with that number\n");
            }
            */
        }
        printf("  There is no information of the number %d\n\n",num);
    }
    else{
        printf("  Invalid choice, try again\n");
    }
    incase:
    fclose(fp);
}

void edit(){
    system("cls");
    FILE *p;
    p=fopen("phonebook.txt","r+");
    if(p==NULL){
        printf("  Error while pointing to phonebook\n");
    }
    info edit;
    char name[30];
    printf("\n  Enter the name of the contact you want to edit:");
    fflush(stdin);
    gets(name);
    while(fread(&edit,sizeof(edit),1,p)>0){
        if(strcmp(edit.name,name)==0){
            fseek(p,-sizeof(edit),SEEK_CUR);
            printf("  Enter these informations:\n");
            printf("  Name:");
            fflush(stdin);
            gets(edit.name);
            printf("  Phone number:");
            scanf("%lli",&edit.number);
            printf("  Email:");
            scanf("%s",&edit.email);
            printf("  Address:");
            scanf("%s",&edit.address);
            fwrite(&edit,sizeof(edit),1,p);
            break;
        }
    }
    printf("  Successfully edited\n\n");
    fclose(p);

}

void delete(){
    system("cls");
    char name[30];
    printf("\n  Enter the name of the person you want to delete contact of:");
    fflush(stdin);
    gets(name);
    count();
    int i=0;
    info tmp;
    info *temp;
    FILE *fpsrt,*fp;
    temp = (info *) calloc(counter,sizeof(info));
    fpsrt = fopen("phonebook.txt","r");
    while(fread(&tmp,sizeof(tmp),1,fpsrt)>0){       //Reads the records and stores into it's memory
        temp[i] = tmp;
        i++;
    }

    fclose(fpsrt);

    fp = fopen("phonebook.txt","w");
    if(fp==NULL){
        printf("  Error while opening the file\n");
    }
    for(i=0; i<counter; i++){
        if(strcmp(temp[i].name,name)==0){
            continue;
        }

        fwrite(&temp[i],sizeof(temp[i]),1,fp);

    }
    fclose(fp);
    free(temp);

    printf("  The contact has been deleted\n\n");
}


void count(){
    info tmp;
    FILE *fpsrt;
    counter=0;
    fpsrt = fopen("phonebook.txt","r");
    while(fread(&tmp,sizeof(tmp),1,fpsrt)>0){    //Find how many of the records are there for later use
        counter++;
    }
    fclose(fpsrt);
}

void del(){

    system("cls");
    count();
    int i=0;
    info tmp;
    info *temp;
    FILE *fpsrt,*fp;
    temp = (info *) calloc(counter,sizeof(info));
    fpsrt = fopen("phonebook.txt","r");
    while(fread(&tmp,sizeof(tmp),1,fpsrt)>0){       //Reads the records and stores into it's memory
        temp[i] = tmp;
        i++;
    }

    fclose(fpsrt);

    fp = fopen("phonebook.txt","w");
    if(fp==NULL){
        printf("  Error while opening the file\n");
    }
    for(i=0; i<counter; i++){
        if(temp[i].number==0){
            continue;
        }
        fwrite(&temp[i],sizeof(temp[i]),1,fp);
    }
    fclose(fp);
    free(temp);

}
