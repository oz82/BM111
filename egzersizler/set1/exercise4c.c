#include <stdio.h>

int main() {
    // n=7
    // *
    // **
    // ***
    // ****
    // ***
    // **
    // *

    int n;
    printf("Bir sayi giriniz: ");
    scanf("%d", &n);
    int median = n / 2 + 1;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (j < median) printf("*");
            if (j == median) {
            	median--;
            	printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}
