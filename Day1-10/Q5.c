/*Q5: Write a program to convert temperature from Celsius to Fahrenheit.

Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/

// Conversion Formula-> Temp(in Fahreheit)=[(9/5) * Temp(in Celsius)] +32

#include <stdio.h>

void main(){
    float temperature_in_celsius;
    printf("Enter the temperature in celsius: ");
    scanf("%f",&temperature_in_celsius);

    float temperature_in_fahrenheit= (1.8 * temperature_in_celsius) +32; // 9/5=1.8
    printf("Temperature in Fahrenheit is %f", temperature_in_fahrenheit);
}