#include<stdio.h>
#include<conio.h>


main()
{
   int a[5]={7,5,88,15,63};
   int i;
   printf("your array is:\n");
   for(i=0;i<5;i++)
   {
                   printf("%d\n",a[i]);
                   }
  printf("even numbers in array are\n");
   for(i=0;i<5;i++)
   {
      if(a[i]%2==0)
      printf("\n%d",a[i]);
} 

getch();
}
