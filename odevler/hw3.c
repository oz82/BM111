#include <stdio.h>

int main() {
    char matrix[4][4] = 
    {
        {'D', 'R', 'D', 'L'}, 
        {'L', 'L', 'D', 'R'}, 
        {'D', 'L', 'L', 'R'}, 
        {'R', 'R', 'R', 'D'}
    };
    
    // bu program verilen bir matris uzerinde hareket etmeyi modellemelidir. R, L, U ve D sembolleri sirayla
    // right (sag), left (sol), up (yukari) ve down (asagi) yonlerini temsil eder.
    // matrix degiskeni iki boyutlu bir char dizisidir. 4 satir ve 4 sutundan olusur.
    // matrise yalnizca ust taraftan girilip alt taraftan cikilabilir. yanlardan giris ve cikis yasaklanmistir.
    // sinirdaki hucrelerdeyken disari dogru yonelme olursa matristen disari cikilir ancak bu yalnizca alt tarafta 
    // meydana gelebilir.
    // yazacaginiz kod verilen bir matrisin bu kurala uyup uymadigini tespit etmelidir.
    // eger matrisin ust tarafindan herhangi bir hucreden girilip alt tarafindaki herhangi bir hucreden
    // cikilabiliyorsa ekrana 1, bu mumkun degilse ekrana 0 yazdirmalidir.
    // kodunuz 5x5, 6x6 vb. matrislerle calismaya uyumlu olmalidir.
    
    // kodlarinizi buraya, main fonksiyonu icine yazin, istediginiz kutuphaneyi kullanabilirsiniz.
    // gerekirse ek fonksiyonlar tanimlayabilirsiniz.
    // odev icin son tarih: 25.12.2022 23:59
    
    return 0;
}