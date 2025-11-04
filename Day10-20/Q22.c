/*Q22: Write a program to find profit or loss percentage given cost price and selling price.

Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/

#include <stdio.h>

int main() {
    float cp,sp; //cp= cost price, sp= selling price
    printf("Enter your cost price and selling price: ");
    scanf("%f %f", &cp, &sp);

    if (sp > cp) {
        float profit_percent= ((sp - cp)/cp) * 100; // Profit% = (selling price - cost price) / cost price *100
        printf("Profit %.2f%%",profit_percent);
    } else if (cp > sp) {
        float loss_percent= ((cp - sp)/cp) * 100; // Loss% = (cost price - selling price) / cost price *100
        printf("Loss %.2f%%",loss_percent);
    } else {
        printf("No Profit No Loss");
    }
    return 0;
}