#include<stdio.h>
#include<conio.h>


main()
{
   char name[15],vowels[5]={'a','e','i','o','u'};
   int a,s=0,n=0,i,v=0;
   printf("\n enter name:");
   gets(name);
   for(a=0;name[a]!=0;a++)
   {
                          for(i=0;i<5;i++)
                          {
                                          if(name[a]==vowels[i])
                                          v++;
                                          }
                          if(name[a]==' ')
                          s++;
                          
                          else
                          n++;
                          }

printf("\nnumber of vowels=%d number of spaces=%d normal characters=%d",v,s,n);
getch();
}
