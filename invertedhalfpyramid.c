#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,r;
    printf("Enter the number of rows to print pattern:");
    scanf("%d",&r);
    for(i=r;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    getch();
    return 0;
}
