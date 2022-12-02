#include <stdio.h>
int main() {
    // odev icin son tarih: 16.12.2022 23:59
    // main fonksiyonunda degisiklik yapmayin!
    int score = 0;
    if (is_palindromic("elma") == 0) score += 5;
    if (is_palindromic("yapay") == 1) score += 5;
    if (is_palindromic("7895987") == 1) score += 5;
    if (is_palindromic("Eski dediysE") == 0) score += 10;
    if (is_palindromic("Anastas mum satsanA") == 1) score += 10;
    if (is_palindromic("Kasaya mal koyana yoklama yasaK") == 1) score += 20;
    if (is_palindromic("Eli bitti bile") == 0) score += 20;
    if (is_palindromic("!iMrEnSeM aDaMa MaDaM eSnEr Mi") == 1) score += 25;
    
    printf("puan: %d", score);
    return 0;
}

// palindromik yani tersi kendisine esit olan string'ler icin 1, olmayanlar icin 0 dondurur
// cumle yapisinda olanlar icin farkli calisir
// yalnizca unlemle baslayan cumleler icin buyuk kucuk harf ayrimi yapmaz
int is_palindromic(char string[]) {
    // kodunuzu buraya yazin
    return 0;
}