#include <stdio.h>

int main(){
    int numeratore;
    int denominatore;
    float divisione;

    printf("\nInserisici il primo numero: ");
    scanf("%d", &numeratore);

    printf("\nInserisci il secondo numero: ");
    scanf("%d", &denominatore);

    if (denominatore != 0){
        divisione = (float)numeratore/denominatore;
        printf("\nil risulato e': %f\n", divisione);
    } else printf("\nil denominatore non puo' essere 0!\n");
    
    return 0;
}