#include <stdio.h>
#include <stdlib.h>

int main() {

    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num >= 1 && num <= 100) {
        printf("Your number is between 1 and 100");
    }else if(num >= 101 && num <= 200){
        printf("Your number is between 101 and 200");
    }else if(num >= 201 && num <= 300) {
        printf("Your number is between 201 and 300");
    }else if(num >= 301 && num <= 400) {
        printf("Your number is between 301 and 400");
    }else if(num >= 401 && num <= 500) {
        printf("Your number is between 401 and 500");
    }else {
        printf("Your number was not in any ranges");
    }


    return 0;
}