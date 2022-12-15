#include <stdio.h>
int main() {
    // odev icin son tarih: 23.12.2022 23:59
    // main fonksiyonunda degisiklik yapmayin!
    // guncelleme tarihi: 15.12.2022 19:30
    int score = 0;
    if (is_palindromic("elma", 4) == 0) score += 5;
    if (is_palindromic("yapay", 5) == 1) score += 5;
    if (is_palindromic("7895987", 7) == 1) score += 5;
    if (is_palindromic("Eski dediysE", 12) == 0) score += 10;
    if (is_palindromic("Anastas mum satsanA", 19) == 1) score += 10;
    if (is_palindromic("Kasaya mal koyana yoklama yasaK", 31) == 1) score += 20;
    if (is_palindromic("Eli bitti bile", 14) == 0) score += 20;
    if (is_palindromic("!iMrEnSeM aDaMa mAdAm EsNeR mi", 30) == 1) score += 25;
    
    printf("puan: %d", score);
    return 0;
}

// palindromik yani tersi kendisine esit olan string'ler icin 1, olmayanlar icin 0 dondurur
// cumle yapisinda olanlar icin farkli calisir
// yalnizca unlemle baslayan cumleler icin buyuk kucuk harf ayrimi yapmaz
int is_palindromic(char string[], int n) {
    // kodunuzu buraya yazin
    return 0;
}