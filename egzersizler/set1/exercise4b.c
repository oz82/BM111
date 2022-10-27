#include <stdio.h>

int main() {
    // n=7
    // *
    // **
    // ***
    // ****
    // *****
    // ******
    // *******


    int n;
    printf("Bir sayi giriniz: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
