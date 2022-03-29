//calculate the area and circumferance of circle (pi*r^2,2*pi*r)
// let user enter radius of circle

#include<stdio.h>
#define Pi 3.1415
void main() {
    float area, radius, circumf;
    printf("Enter the radius of circle");

    //scanf function reads the value of variable radius from the keyboard and stores the value at address of radius 
    //using address operator (&)
    scanf("%f", &radius);

    area= radius*radius*Pi;
    circumf= 2*Pi*radius;

    printf("\nArea of the circle=%f",area);
    printf("\nCircumference of circle=%f",circumf);
    
}