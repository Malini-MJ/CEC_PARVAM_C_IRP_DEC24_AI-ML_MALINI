//get the name from the user
//count of name eg anu , print the count = 3
//identify if even or odd 
#include<stdio.h>
#include<string.h>
int main()

{
char name[20];
int count ;
printf("enter your name ");
scanf("%s" , &name );

count = strlen(name);
printf("the count of the name is: %d " , count);

if(count%2 == 0)
{

printf("it is Even"); }

else { printf("it is Odd"); }
 return 0;   
}