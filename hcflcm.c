#include<stdio.h>
#include<conio.h>
int main()
{
    int num1,num2,hcf,lcm,x,y;
    printf("Enter any two numbers to find lcm and hcf:\n");
    scanf("%d%d",&num1,&num2);
    x=num1;
    y=num2;

    while(num1!=num2)
    {
        if(num1>num2)
        {
            num1-=num2;
        }
        else
        {
            num2-=num1;
        }
    }
    hcf=num1=num2;
    lcm=(x*y)/hcf;
    printf("Lowest Common Multiple:%d\n",lcm);
    printf("Highest Common Factor:%d",hcf);
    getch();
    return 0;
}
