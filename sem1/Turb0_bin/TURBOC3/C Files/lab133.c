 #include <stdio.h>
 #include <conio.h>
 #include <process.h>
 void main ()
 {
 FILE *fp,*p;
 char ch;
 clrscr ();
 fp=fopen ("abc.txt","r");
 p=fopen ("xyz.txt","w");
 while (1)
    {
    ch=fgetc(fp);
    if (ch==EOF)
    break ;
    else
    fputc (ch,p);
    }
    fclose (p);
    fclose (fp);

    p=fopen ("xyz.txt","r");
    if (p==NULL)
    exit (0);
    while (1)
      {
      ch=fgetc(p);
      if(ch==EOF)
      break;
      else
    printf ("%c",ch);
      }
   fclose (p);
  getch ();
 }
