#include<stdio.h>
#include<conio.h>

 main()
{
     
     int n,i;
     float sum,t;
     
     printf("enter last term n \n");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
          t=1.0/i;
          sum=sum+t;            
                      }
     printf("\nsum of the series is %5.12f",sum);
     getch();
     
     }
