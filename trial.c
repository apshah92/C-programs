#include<stdio.h>
#include<conio.h>


main()
{
   char str[]="123456789";
   int i,j,b=1,n=5;
   
for(i=1;i<=n;i++)
{
   
   for(j=i;j<=n-1;j++)
   {
                      printf(" ");
                      }
   for(j=i;j<=b;j++)
   {
                    printf("%d",j);
                    }
   for(j=b-1;j>b-i;j--)
   {
                   printf("%d",j);
                   }
   b=b+2;
   printf("\n");
                 }

getch();
}
