#include<stdio.h>
#include<conio.h>

int maxdigit(int );

main()
{
   int num,max;
   printf("enter three digit number:\n");
   scanf("%d",&num);
   max=maxdigit(num);
   printf("max digit in the number is %d",max);
getch();;
}

int maxdigit(int num)
{
    if((num%10)>(num/10)%10)
    {
       if((num%10)>(num/100)%10)
       return (num%10);
       else
       return  ((num/100)%10);
                            }
    else
    {
        if((num/10)%10>(num/100)%10)
        return ((num/10)%10);
        else
        return  ((num/100)%10);
        }
    }
