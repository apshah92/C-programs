#include<stdio.h>
#include<conio.h>


main()
{
   int sumrow=0,i,j,colsum[3]={0,0,0};
      int a[3][3];
   printf("enter matrix\n");
   
   for(i=0;i<3;i++)       
   {
                   for(j=0;j<3;j++)
                   {
                                   printf("enter num[%d][%d]\n",i,j);
                                   scanf("%d",&a[i][j]);
                                   }
   }
   
   for(i=0;i<3;i++)       
   {
                          sumrow=0;
                   for(j=0;j<3;j++)
                   {
                                   sumrow=sumrow+a[i][j];
                                   colsum[i]=colsum[i]+a[j][i];
                                   printf(" %d",a[i][j]);
                                   
                                }
   printf(" %d",sumrow);
   printf("\n");
   }
   for(i=0;i<3;i++)
   {
                   printf(" %d",colsum[i]);
                   
                   }
   
   
   
getch();
}
