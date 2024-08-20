#include <stdio.h>

int main(){
    int scelta;
    printf("\nScegli \n1 ciao \n2 miao\n");
    scanf("%d", &scelta);
    switch(scelta){
        case 1:
         printf("\nCiao\n");
         break;
        case 2:
         printf("\nMiao\n");
         break;
        default:
         printf("\nScelta Sbagliata\n");
    }
}