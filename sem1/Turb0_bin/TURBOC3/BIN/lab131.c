 #include <stdio.h>
 #include <conio.h>
 #include <process.h>
 void main ()
 {
 FILE *fp;
 char ch;
 clrscr ();
 fp=fopen("abc.txt","w+");
 if (fp==NULL)
 exit(0);
 fprintf (fp,"This is Good.\n");
 fclose (fp);
 fp=fopen ("abc.txt","r");
 if(fp==NULL)
 exit (0);
 while (1)
    {
    ch=fgetc(fp);
    if (ch==EOF)
    break ;
    else
    putchar (ch);
    }
    fclose (fp);
  getch ();
 }
