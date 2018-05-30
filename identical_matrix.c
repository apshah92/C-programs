#include<stdio.h>
#include<conio.h>


main()
{
      int n=0,i,j;
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
                   for(j=0;j<3;j++)
                   {
                                   printf(" %d",a[i][j]);
                                   
                                }
   printf("\n");
   }
   
    for(i=0;i<3;i++)       
   {
                   for(j=0;j<3;j++)
                   {
                                   if(i==j)
                                   {if(a[i][j]==1)
                                   n++;
                                   }
                                   else
                                   {
                                       if(a[i][j]==0)
                                       n++;
                                       }
                                   
                    }
   
   }
   
   if(n==9)
   printf("matrix is identical\n");
   else
   printf("matrix is not identical\n");
   
   
   
   
getch();
}
