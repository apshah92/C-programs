#include<stdio.h>
#include<conio.h>


main()
{
   int a[3][3],b[3][3],mul[3][3];
   int i,j,k;
   printf("enter matrix 1\n");
   
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
   
   printf("enter matrix 2\n");
   for(i=0;i<3;i++)
   {
                   for(j=0;j<3;j++)
                   {
                                   printf("enter num[%d][%d]\n",i,j);
                                   scanf("%d",&b[i][j]);
                                   }
   }
                                   
   for(i=0;i<3;i++)       
   {
                   for(j=0;j<3;j++)
                   {
                                   printf(" %d",b[i][j]);
                                   
                                   }
   printf("\n");
}
   
   printf("mul of matrices 1 and 2\n");
   for(i=0;i<3;i++)
   {
                   for(j=0;j<3;j++)
                   {
                                   mul[i][j]=a[i][j]*b[j][i];
                                   printf(" %d",mul[i][j]);
                                   }

     printf("\n");
     }
getch();
}

