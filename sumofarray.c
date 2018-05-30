#include<stdio.h>
#include<conio.h>


main()
{
   int a[5]={7,5,89,15,63};
   int i,sum=0;
   printf("your array is:\n");
   for(i=0;i<5;i++)
   {
                   printf("%d\n",a[i]);
                   }
   for(i=0;i<5;i++)
   {
  sum=sum+a[i];   
} 
printf("sum of array is %d\n",sum);

getch();
}
