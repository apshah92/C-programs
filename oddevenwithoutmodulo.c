#include<stdio.h>
#include<conio.h>


main()
{
   int n,m,p=1;
   printf("enter number\n");
   scanf("%d",&n);
   m=n&p;
   if(m==1)
   printf("\nnumber is odd");
   else
   printf("\nnumber is even");
getch();
}
