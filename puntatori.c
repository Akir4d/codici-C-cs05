#include <stdio.h>

int main (){
    int i = 5;
    int* p = &i;
    printf("\nindirizzo di memoria 0x%x = %d", p, i);
    *p = 7;
    printf("\nindirizzo di memoria 0x%x = %d", p, i);
    return 0;
}