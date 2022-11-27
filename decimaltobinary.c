#include<stdio.h>
#include<conio.h>
int main()
{
    int num,temp,rem,bin=0,i=1;
    printf("Enter any decimal number:\n");
    scanf("%d",&num);
    temp=num;
    while(num!=0)
    {
        rem=num%2;
        bin=bin+i*rem;
        num=num/2;
        i=i*10;
    }
    printf("The binary equivalent of %d is %d",temp,bin);
    getch();
    return 0;
}
