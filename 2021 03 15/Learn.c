#include <stdio.h>

int main() {
     int traffic_light;
     scanf("%d", &traffic_light);

     if (traffic_light == 1) {
         printf("Red");  
     } else if (traffic_light == 2){
         printf("yellow");
     } else if (traffic_light == 3){
         printf("green");
     } else {
         printf("Error");
     }

    return 0;
}