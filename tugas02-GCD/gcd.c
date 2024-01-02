#include <stdio.h>

int main(){
    int a,b,c;
    printf("Masukkan Nilai A: ");
    scanf("%d", &a);
    printf("Masukkan Nilai B: ");
    scanf("%d", &b);

    while (b!=0){
        c=a%b;
        a=b;
        b=c;
    }
    printf("Nilai GCD dari dua bilangan tersebut adalah : %d\n",a);
    return 0;
}