#include<stdio.h>
int main()
{
    int num,sum=0,rem=0;
    printf("enter the number to get the sum of the digits-");
    scanf("%d",&num);
    while(num>0)
{
    rem=num%10;
    sum=sum*10+rem;
    num=num/10;
}
printf("sum of digits = %d",sum);

 return 0; 
}