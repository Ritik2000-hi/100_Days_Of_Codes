/*Q4: Write a program to calculate the area and circumference of a circle given its radius.


Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/

#include <stdio.h>

void main(){
    float radius;
    
    printf("Enter radius of circle: ");
    scanf("%f",&radius);

    float Area= 3.14*radius*radius;
    float Circumference= 2*3.14*radius;
    
    printf("Area=%f, Circumference=%f",Area,Circumference);
}