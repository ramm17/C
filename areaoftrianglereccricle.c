#include<stdio.h>
#define PI 3.14
int main()
{
    int ch;
    float l,b,h,rad,area;
    printf("Press 1 for Area of Rectangle.\n");
    printf("Press 2 for Area of Triangle.\n");
    printf("Press 3 for Area of Circle.\n");
    printf("Press 4 for Area of Square.\n");
    printf("\nPlease Choose any option:");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        printf("Enter the length and breadth of Rectangle:\n");
        scanf("%f%f",&l,&b);
        area=(l*b);
        printf("Area of Rectangle=%.2f",area);
        break;
    case 2:
        printf("Enter the base and height of Triangle:\n");
        scanf("%f%f",&b,&h);
        area=(b*h)/2;
        printf("Area of Triangle=%.2f",area);
       break;
    case 3:
        printf("Enter the radius of Circle:\n");
        scanf("%f",&rad);
        area=(PI*rad*rad);
        printf("Area of Circle=%.2f",area);
       break;
    case 4:
        printf("Enter the length of Square:\n");
        scanf("%f",&l);
        area=(l*l);
        printf("Area of Square=%.2f",area);
       break;
    default:
        printf("Error! Please Input Invalid Option");
    }
    getch();
    return 0;
}

