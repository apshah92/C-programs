#include<stdio.h>
#include<conio.h>


main()
{
   int a[5]={7,5,89,15,63};
   int i,j,x;
   printf("your array is:\n");
   for(i=0;i<5;i++)
   {
                   printf("%d\n",a[i]);
                   }
   for(i=0;i<5;i++)
   {
    for(j=i+1;j<5;j++)
    {
                    if(a[i]>a[j])
                    {
                                 x=a[i];
                                 a[i]=a[j];
                                 a[j]=x;
                                 }
                    }                
} 
/*printf("\nmaximum of array is %d",max);*/
printf("array in ascending order\n");
for(i=0;i<5;i++)
{
                printf("%d\n",a[i]);
                }
getch();
}
