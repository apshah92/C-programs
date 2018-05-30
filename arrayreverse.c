#include<stdio.h>
#include<conio.h>


main()
{
   int a[5]={7,5,89,15,63};
   int i,j=4,x;
   printf("your array is:\n");
   for(i=0;i<5;i++)
   {
                   printf("%d\n",a[i]);
                   }
   for(i=0;i<3;i++)
   {
      x=a[i];
      a[i]=a[j];
      //printf("%d",a[i]);
      a[j]=x;
      j--;
} 
printf("after reversal array is\n");
for(i=0;i<5;i++)
{
                printf("%d\n",a[i]);
                }              
getch();
}
