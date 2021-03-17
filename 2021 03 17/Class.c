#include <stdio.h>

int main() {
    int snowing;
    scanf("%d", &snowing);

    switch (snowing)
    {
    case 1:
        printf("hello"); break;
    case 2:
        printf("bye"); break;

    default:
        printf("boom");
    }
    
    
    
    
    
    
    return 0;
}