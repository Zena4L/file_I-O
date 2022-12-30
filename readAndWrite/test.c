#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fptr = fopen("testF.txt","w");
    char str[100];

    fgets(str,strlen(str),fptr);
    printf("%s",str);



    fclose(fptr);

 


    return 0;
}