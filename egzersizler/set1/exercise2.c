#include <stdio.h>

int main() {
    // Ekrana carpim tablosunu yazdiran program

    printf("Bir sayi giriniz: ");
    int x;
    scanf("%d", &x);
    for (int i = 1; i <= x; i++) {
        for (int j = 1; j <= x; j++) {
            printf("%d*%d=%d\t", i, j, i * j);
        }
        printf("\n");
    }

    return 0;
}
