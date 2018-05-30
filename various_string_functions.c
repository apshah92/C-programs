#include<stdio.h>
#include<conio.h>


main()
{
   char name1[15],name2[15],name3[15] ;
   int l,k;
   printf("enter first name:");
   gets(name1);
   printf("enter second name:");
   gets(name2);
  
   l=strlen(name1);
   k=strlen(name2);
  
   printf("lengths of strings are %d %d",l,k);
   
    printf("\n");
  strupr(name1);
  puts(name1);
  
  strlwr(name2);
  puts(name2);
  

  strcpy(name3,name1);
  
 
  strrev(name1);
  
   
   if(strcmp(name1,name3)==0)
   printf("\nname1 is palindrome");
   else
   printf("\nname1 is not palindrome");
   
   
   
   printf("\ncombined  two strings %s",strcat(name1,name2));
   
   
   
getch();
}
