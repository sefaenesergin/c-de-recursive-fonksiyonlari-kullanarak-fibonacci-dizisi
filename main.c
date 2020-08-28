//SEFA ENES ERGİN-sefaenesergin@gmail.com
//fibonacci dizisinin seçilen elamanının cevabını, recursive fonksiyon kullanarak  bulma kodu.
#include <stdio.h>
long int fibo(int x){
    if(x==1 || x==0)
        return x;
    else
       return (fibo(x-1)+fibo(x-2));
}
int main(int argc, const char * argv[]) {
    printf("Lütfen sonucunu bulmak istediğiniz sayıyı giriniz!\n");
    int sayi;
    scanf("%d",&sayi);
    long int sonuc=0;
    sonuc=fibo(sayi);
    printf("Sonuç : %d", sonuc);
    return 0;
}


