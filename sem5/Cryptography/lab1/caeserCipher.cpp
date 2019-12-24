#include <stdio.h>
#include <conio.h>
void encrypt (char msg[], int shift)
{
    int i;
    char ch;
    for(i=0;msg[i]!='\0';i++)
    {
        ch=msg[i];
        if(ch>='a' && ch<='z')
                ch=char(int(ch+shift-97)%26 +97);
        else if(ch>='A' && ch<='Z')
            ch=char(int(ch+shift-65)%26 +65);
        else
            printf("Error!!!");
        msg[i]=ch;
    }
}
void decrypt (char msg[], int shift)
{
    int i;
    char ch;
    for(i=0;msg[i]!='\0';i++)
    {
        ch=msg[i];
        if(ch>='a' && ch<='z')
                ch=char(int(ch-shift-97)%26 +97);
        else if(ch>='A' && ch<='Z')
            ch=char(int(ch-shift-65)%26 +65);
        else
            printf("Error!!!");
        msg[i]=ch;
    }
}


int main()
{
    char message[100];
    int shift;
    printf("Enter message: ");
    scanf("%s",&message);
    printf("Enter the shift value: ");
    scanf("%d",&shift);
    encrypt(message,shift);
    printf("After encryption message is %s",message);
    decrypt(message,shift);
    printf("\nAfter decryption message is %s",message);
}
