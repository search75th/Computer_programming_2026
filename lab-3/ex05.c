#include <stdio.h>

int main() {
    float height, radius, volume;

    printf("Enter cone hight: ");
    scanf("%f", &height);

    printf("Enter cone base radius: ");
    scanf("%f", &radius);

    volume = (1.0 / 3.0) * 3.14159 * radius * radius * height;
    //volume = (1.0 / 3.0) * (22.0 / 7.0)* radius * radius * height;

    printf("Cone volume = %.1f cm3\n", volume);

    if (volume > 260) {
        printf("This cone is perfect for Supun project\n");
    }
    else {
        printf("This cone is not fit for this project\n");
    }

    return 0;
}