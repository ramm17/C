#include<stdio.h>
#include<conio.h>
int main()
{
    int year;
    printf("Enter the year:");
    scanf("%d",&year);

    if(year%4==0)
    {
        if(year%100==0)
        {
            if(year%400==0)
            {
                printf("%d is the leap year",year);
            }
            else
            {
                printf("%d is not the leap year",year);
            }
        }
            else
            {
                printf("%d is the leap year",year);
            }
    }
          else
            {
                printf("%d is not the leap year",year);
            }
        getch();
        return 0;
   }


