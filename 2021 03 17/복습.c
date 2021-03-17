#include <stdio.h>
int main() {
    int color; 
    scanf("%d", &color);

    if(color == 1){
        printf("R");
    }else if (color == 2) {
        printf("Y");
    }else if (color == 3) {
        printf("G");
    }else {
        printf("Error");    
    }
    return 0;
}