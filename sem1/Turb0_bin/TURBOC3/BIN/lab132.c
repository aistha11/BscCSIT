#include <stdio.h>
 #include <conio.h>
 #include <process.h>
 void main ()
 {
 FILE *fp;
 char ch;
 int al=0,sp=0,wd=0;
 clrscr ();
 fp=fopen ("abc.txt","r");
 if(fp==NULL)
 exit (0);
 while (1)
    {
    ch=fgetc(fp);
     if (ch==EOF)
    break ;
    else
    {
    if ((ch>='a'&& ch<='z')||(ch>='A'&&ch<='Z'))
    al++;
    else if (ch==' ')
    sp++;
    else
    wd=sp+1;
    }
   }

    printf ("Alphabet=%d  Space=%d   Word=%d",al,sp,wd);
    fclose (fp);
  getch ();
 }
