#include <stdio.h>

union Data {
    int i;
    float f;
};

int main() {
    union Data data;

    printf("Enter a value of your choice (integer or float): ");
    if (scanf("%d", &data.i) == 1) {
        printf("You entered an integer value: %d\n", data.i);
    } else if (scanf("%f", &data.f) == 1) {
        printf("You entered a float value: %f\n", data.f);
    } else {
        printf("Invalid input!\n");
    }

    return 0;
}

