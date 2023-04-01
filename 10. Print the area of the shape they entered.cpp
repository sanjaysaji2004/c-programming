#include <stdio.h>

union shape {
    float radius;
    struct {
        float length;
        float width;
    } rectangle;
};

int main() {
    union shape s;
    char shape_type;
    float area;

    printf("Enter the type of shape (c for circle, r for rectangle): ");
    scanf("%c", &shape_type);

    if (shape_type == 'c') {
        printf("Enter the radius of the circle: ");
        scanf("%f", &s.radius);
        area = 3.14 * s.radius * s.radius;
    } else if (shape_type == 'r') {
        printf("Enter the length and width of the rectangle separated by a space: ");
        scanf("%f %f", &s.rectangle.length, &s.rectangle.width);
        area = s.rectangle.length * s.rectangle.width;
    } else {
        printf("Invalid shape type!\n");
        return 1;
    }

    printf("The area of the shape is: %.2f\n", area);

    return 0;
}

