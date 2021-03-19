#include <stdio.h>

int main() {
    int i;
    int number;

    scanf("%d", &number);
    for(i = 0; i < number; i++) {
        printf("number: %d\n", i);
    }

    i = 0;
    while (i < number) {
         printf("number: %d\n", i);
         i++;
    }
    return 0;
}