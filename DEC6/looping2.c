#include<stdio.h>
int main()
{
int num,sum=0;
    printf("Enter the number to total SUM:");
    scanf("%d",&num);

    //without using loop
    //sum = (num*(num+1))/2;
    
    //using loop
    for(int c=1;c<=num;c++){
        sum =sum + c;
    }
    printf("SUM:=%d",sum);


 return 0;   
}