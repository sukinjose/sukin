#include <stdio.h>

void main() 
{
    int i,j;
    printf("Enter the 4 digit number :");
    scanf("%d",&i);
    for (int a=0;a<4;a++)
    {
        j=i%10;
        i=i/10;
        printf("%d",j);
    }
}
