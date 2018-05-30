#include<stdio.h>
#include<conio.h>


main()
{
   char name[15] ;
   printf("\ntoday's date is %s",_strdate(name));
   printf("\ncurrent time is %s",_strtime(name));
   printf("\nno=%d",rand(205));
   
getch();
}
