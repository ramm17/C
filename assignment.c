#include<stdio.h>
#include<conio.h>
int main()
{
    int x=5,y;
    y=x;
    printf("The value of y is %d\n",y);//5

    y+=x;//y=y+x
    printf("The value of y is %d\n",y);//10

    y-=x;//y=y-x
    printf("The value of y is %d\n",y);//5

    y*=x;//y=y*x
    printf("The value of y is %d\n",y);//25

    y/=x;//y=y/x
    printf("The value of y is %d\n",y);//5

    y%=x;//y=y%x
    printf("The value of y is %d\n",y);//0
    getch();
    return 0;
}


