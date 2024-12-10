//get number from user
//if number greater than 100 multippkly with 5 
//if number is greater than 500 then divide by 2
// if nunmmber lesser than 100 then modulus % with 10 
//based on the result square eg 500*5=2500*2500=6250000
#include <stdio.h>

int main() {
    int num;
    int output;

    
    printf("Enter a number: ");
    scanf("%d", &num);

    
    if (num > 500) {
        output = num / 2;
    } else if (num < 100) {
        output = num * 5;
    } else if(num >= 0) {
        output = num % 10;
    } else { 
        printf("invalid number");
        return 1;
    }

    
    output = output * output;

    
    printf("The final result is: %d\n", output);

    return 0;
}


