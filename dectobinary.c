#include<stdio.h>
#include<conio.h>


main()
{
   int i,n=0,t ;
   int num;
   
   printf("enter number to convert in binary\n");
   scanf("%d",&num);
   t=num;
   while(t!=0)
   {
              n++;
              t=t/2;
              }
   int a[n];
   t=num;
   for(i=n-1;i>=0;i--)
   {
      a[i]=t%2;
      t=t/2;
                      }
      printf("the binary equivalent is:\n");
   for(i=0;i<n;i++)
   {
                   printf("%d",a[i]);
                   }
getch();
}
