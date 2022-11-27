#include<stdio.h>
#include<conio.h>
int main()
{
    int numb1,numb2;
    printf("Enter any two numbers:\n");
    scanf("%d%d",&numb1,&numb2);
    if(numb1>numb2)
    {
        printf("%d is greater",numb1);
    }
    else if(numb2>numb1)
    {
        printf("%d is greater",numb2);
    }
    else
    {
        printf("Both numbers are equal");
    }
    getch();
    return 0;
}
