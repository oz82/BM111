#include <stdio.h>
#include <math.h>

int main() {
    // Girilen bir n sayisina kadar gelen butun asal sayilari yan yana, 
    // aralarina virgul+bosluk koyarak ekrana basan program

    printf("Bir sayi giriniz: ");
    int x;
    scanf("%d", &x);
    
    printf("2, ");
    for (int i = 3; i < x; i += 2) {
    	double root = sqrt(i);
    	short found = 0;
    	for (int j = 3; j <= root; j += 2) {
            if (i % j == 0 & i != j) {
                found = 1;
                break;
            }
    	}
    	if (found == 0) printf("%d, ", i);
    }
    printf("\n");

    return 0;
}
