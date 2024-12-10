#include<stdio.h>
int main()
{
    int num,sum=0,rem=0;
    printf("enter the number to get the sum of the digits-");
    scanf("%d",&num);
     
do {
    rem=num%10;
    sum=sum+rem*rem;
    num=num/10;
}  while(num>0);
printf("sum of digits = %d",sum);

 return 0; 
}