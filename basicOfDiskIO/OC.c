#include <stdio.h>

/*
*@d - Opening and Closing a Text File
*/
enum {SUCCESS,FAIL};
int main(void)
{
    FILE *fptr;
    char filename[] = "haiku.txt";
    int reval = SUCCESS;

    if((fptr = fopen(filename,"r")) == NULL)
    {
        printf("cannot open file : %s\n",filename);
        reval = FAIL;
    }else{
        printf("The value of fptr is : 0x%p\n",fptr);
        printf("Fail ready to close ..\n");
        fclose(fptr);
    }

    return reval;
}