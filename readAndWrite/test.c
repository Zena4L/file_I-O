#include <stdio.h>
int main(void)
{
    int ch;
    FILE *fp = fopen("haiku.txt","r");
    while ( (ch =fgetc(fp)) != EOF)
        printf("%c",ch);
    
    return 0;
}