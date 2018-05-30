#include<stdio.h>
#include<conio.h>


main()
{
   int a[5]={7,5,89,15,63};
   int i,max;
   printf("your array is:\n");
   for(i=0;i<5;i++)
   {
                   printf("%d\n",a[i]);
                   }
   max=a[0];
   for(i=0;i<5;i++)
   {
      if(max<a[i])
      max=a[i];
} 
printf("\nmaximum of array is %d",max);
getch();
}
