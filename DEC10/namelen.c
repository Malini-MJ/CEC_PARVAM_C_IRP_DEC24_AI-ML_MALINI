#include <stdio.h>

int main() {
    char name[20];
    int count = 0;

    
    printf("Enter your name: ");
    scanf("%s", name);

    
    for (int i = 0; name[i] != '\0'; i++) {
        count++;
    }

    
    printf("The count of letters in your name is: %d\n", count);

    
    if (count % 2 == 0) {
        printf("It is Even\n");
    } else {
        printf("It is Odd\n");
    }

    return 0;
}
