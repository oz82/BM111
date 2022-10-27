#include <stdio.h>

int main() {
    // Ekrana, klavyeden girilen sayi kadar alt alta “merhaba” yazdiran program. (For dongusu kullanin)

    printf("Bir sayi giriniz: ");
    int x;
    scanf("%d", &x);
    for (int i = 0; i < x; i++) {
        printf("merhaba\n");
    }

    return 0;
}
