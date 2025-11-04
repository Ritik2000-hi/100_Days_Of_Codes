/*Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/

# include <stdio.h>

void main(){
    int sec,hour,min;
    scanf("%d",&sec);
    
    hour=sec/3600;
    min=(sec % 3600)/60;
    sec=sec % 60;

    printf("%d:%d:%d",hour, min, sec);
}