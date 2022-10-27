#include <stdio.h>
#include <math.h>

int main() {
    // 1900 ile 2023 yillari arasindaki butun tarih formlarini ekrana basan program. (Yan yana, aralarina <tab>)
    // Ornek: 19/5/1919 26/10/2022
    // format: [day][month][year]


    for (int i = 1900; i < 2023; i++) {
    	for (int j = 1; j <= 12; j++) {
            for (int k = 1; k <= 31; k++) {
                printf("%d/%d/%d\t", k, j, i);
            }
    	}
    }
    printf("\n");

    return 0;
}
