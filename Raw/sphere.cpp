#include <stdio.h>
#include <iostream>

#define PI_VALUE 3.14f
#define SPHERE_FACTOR (4.0f / 3.0f)

int main(void){
    float radius, volume;

    printf("Enter radius: ");
    scanf("%f", &radius);

    volume = SPHERE_FACTOR * PI_VALUE * (radius*radius*radius);

    printf("volume of spehere: %.1f\n", volume);

    return 0;

}






