#include<stdio.h>
#include<conio.h>
int main()
{
    int a=5,b=10,c=5,result;

    result=(a==c) && (b>=c);//true
    printf("(a==c) && (b>=c):%d\n",result);

    result=(a!=c) && (b>=c);//false
    printf("(a!=c) && (b>=c):%d\n",result);

    result=(a==c) || (b<=c);//true
    printf("(a==c) || (b<=c):%d\n",result);

    result=(a!=c) || (b<=c);//false
    printf("(a!=c) || (b<=c):%d\n",result);

    result=!(a>b);//true
    printf("!(a>b):%d\n",result);

    result=!(a<b);//false
    printf("!(a<b):%d\n",result);
    getch();
    return 0;
}



