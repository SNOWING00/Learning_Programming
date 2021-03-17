#include <stdio.h>
int main() {
    int count, i;
    
    printf("number!");
    scanf("%d", &count);

    for(i = 0; count > i;i++){
        printf("%d\n",i);
    }

    return 0;
}
      