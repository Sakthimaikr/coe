/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char str[20];
    int i=0;
    int j=0;
    int k=0;
    int len=0;
    //to get the input
    printf("enter the string:");
    scanf("%[^\n]",str);
    for (len = 0;str[len]!='\0';len++);
    printf("%d\n",len);
    // to print the pattern
    for (i=0; i < len; i++ )
    {
        for (j=0; j < len ; j ++ )
        {
            k=j/2;
            
            printf("\t")
            printf("%c\n",str[k]);
        }
        printf("\n");
        }
    
}
