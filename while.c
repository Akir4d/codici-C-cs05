#include <stdio.h>

int main(){
    int n=30;
    int fattoriale=1;
    int f=n;
    while ( n > 0){
        fattoriale=fattoriale*n;
        n--;
    }
    printf("Fattoriale di %d = %d", f, fattoriale);
}