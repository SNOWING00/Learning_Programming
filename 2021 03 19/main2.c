#include <stdio.h>
int subtract(int num1, int num2);
int divide(int num1, int num2);
int sum(int num1, int num2);
int multiply(int num1, int num2);

int main() {
    int a, b;
    char type; 
    scanf("%d %c %d" , &a, &type, &b);
    if(type == '+') {
        printf("%d", sum(a, b));
    } else if(type == '-') {
        printf("%d", subtract(a, b));
    } else if(type == '/'){
        printf("%d", divide(a, b));
    } else if(type == '*') {
        printf("%d", multiply(a, b));
    }else {
        printf("Error");
    }
    return 0;
}

int subtract(int num1, int num2) {
    return num1 - num2;
}

int divide(int num1, int num2) {
    return num1 / num2;
}

int sum(int num1, int num2) {
    return num1 + num2;
}

int multiply(int num1, int num2) {
    return num1 * num2;
}