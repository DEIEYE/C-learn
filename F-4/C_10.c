#include <stdio.h>
#define PI 3.14

typedef union ShapeData{
    float radius;
    struct{
        float length;
        float width;
    }rectangle;
}ShapeData;

int main() {
    ShapeData shape;
    char choice;
    float area=0;
    printf("please enter 1 for circle and 2 for rectangle:");
    scanf("%c",&choice);
    switch (choice) {
        case '1':
            printf("please enter the radius:");
            scanf("%f",&shape.radius);
            area = PI * shape.radius * shape.radius;
            break;
        case '2':
            printf("please enter the length and width:");
            scanf("%f %f",&shape.rectangle.length,&shape.rectangle.width);
            area = shape.rectangle.length * shape.rectangle.width;
            break;
        default:
            printf("Invalid choice");
            return -1;
    }
    printf("Area: %f\n", area);
    return 0;
}