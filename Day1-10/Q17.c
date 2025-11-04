/* Q17: Write a program to find the roots of a quadratic equation and categorize them.

Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/

#include <stdio.h>
#include <math.h>

int main(){
    int a,b,c; //a=coeffiecient of x^2, b=coefficient of x, c=constant
    printf("Enter coefficients of x^2, x,constant:");
    scanf("%d %d %d",&a, &b, &c);

    int determinant=b * b - 4 * a * c;
    if (determinant >= 0) {
        float root1 = (-b + sqrt(determinant)) / (2 * a);
        float root2 = (-b - sqrt(determinant)) / (2 * a);  
        if (root1 == root2) {
            printf("Roots are real and same: %.2f\n", root1);
        }else {
            printf("Roots are real and different: %.2f, %.2f\n",root1, root2);
        }
    }
    else {
        printf("Roots are complex\n");
    }
    return 0;
}