#include <stdio.h>

int main() {
    // n=7
    // *******
    //  *****
    //   ***
    //    *
    //   ***
    //  *****
    // *******



    int n;
    printf("Bir sayi giriniz: ");
    scanf("%d", &n);
    int median = n / 2 + 1;
    int start = 1, end = n;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j < start) printf(" ");
            else if (j >= start & j <= end) printf("*");
        }
        if (i < median) {
            start++;
            end--;
        } else {
            start--;
            end++;
        }
        printf("\n");
    }

    return 0;
}
