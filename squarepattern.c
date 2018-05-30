#include<stdio.h>
#include<conio.h>


main()
{
   char c='s'; 
   int i,j,k;
   
   for(i=1;i<=5;i++)
   {
    if(i%5==1||i%5==0)
    {
    for(j=1;j<=5;j++)
    printf("%c ",c);
    }
     else
     {
         for(k=1;k<=5;k++)
         {
         if(k%5==1||k%5==0)
         printf("%c ",c);
          
          
          else
          printf("  ");
        }
     }  
     printf("\n");   
            
}
getch();
}
