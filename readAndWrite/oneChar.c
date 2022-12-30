#include <stdio.h>
/*
* @d - Reading and Writing One Character at a Time
*/
enum {SUCCESS,FAIL};
void charReadWrite(FILE *fin,FILE *fout);
int main(void)
{
    char filename1[] ="haikuOut.txt";
    char filename2[]="haiku.txt";
    FILE *fptr1 =fopen(filename1,"w") ,*fptr2 = fopen(filename2,"r");
    int reval = SUCCESS;

   if ((fptr1) == NULL)
   {
        printf("Cannot open file : %s\n",filename1);
        reval = FAIL;
   }
   else if ((fptr2) == NULL)
   {
        printf("cannot open file : %s\n",filename2);
        reval = FAIL;

   }
   else
   {
        charReadWrite(fptr1,fptr2);
        fclose(fptr1);
        fclose(fptr2);

   }

    return reval;
}
void charReadWrite(FILE *fin,FILE *fout)
{
    int c;
    while( (c = fgetc(fin)) !=EOF){
        fputc(c,fout);
        putchar(c);
    }
}