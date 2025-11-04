/*Q18: Write a program to assign grades based on a percentage input.

Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F

*/

#include <stdio.h>  // Grade A=91-100, Grade B= 81-90, Grade C= 71-80, Grade D= 61-70, Grade F= 0-60

int main(){
    int marks;
    printf("Enter your marks: ");
    scanf("%d",&marks);

    if (marks>=91 && marks<=100){
        printf("Grade A");
    } else if(marks>=81 && marks<=90){
        printf("Grade B");
    } else if(marks>=71 && marks<=80){
        printf("Grade C");
    } else if(marks>=61 && marks<=70){
        printf("Grade D");
    } else{
        printf("Grade F");
    }
    return 0;
}