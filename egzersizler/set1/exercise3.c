#include <stdio.h>

int main() {
    // Klavyeden iki sayi ve bir islem (+, -, *, /) alip 
    // switch-case kullanarak sonucu ekrana yazdiran
    // kod parcasini sonsuz bir while dongusu icine alin. 
    // Bu dongu yalnizca kullanici devam etmek istemediginde sonlansin.

    while (1 == 1) {
        int x, y, op;
        printf("Birinci sayiyi giriniz: ");
        scanf("%d", &x);
        printf("Ikinci sayiyi giriniz: ");
        scanf("%d", &y);
        printf("Bir islem giriniz [1:+, 2:-, 3:*, 4:/]: ");
        scanf("%d", &op);
    
        switch (op) {
    	    case 1: printf("%d\n", x + y);break;
    	    case 2: printf("%d\n", x - y);break;
    	    case 3: printf("%d\n", x * y);break;
    	    case 4: printf("%d\n", x / y);break;
        }
        
        char cont;
        printf("devam etmek istiyor musunuz? (e/h) ");
        scanf("%s", &cont);
        if (cont == 'h') break;
    }

    return 0;
}
