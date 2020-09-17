#include <stdio.h>

int main(int argc, char const *argv[])
{
    /*
    sayi1,sayi2,sayi3 değişkenlerini oluştur;
    ilk sayiyi oku;
    ikinci sayiyi oku;
    üçüncü sayiyi oku;
    eşitlik durumunu kontrol et;
    eğer sayi1 == sayi2 ise
        sayi1 ile sayi3 arasındaki eşitlik durumunu kontrol et;
        eğer sayi1 == sayi3 ise
            ekrana "sayılar eşittir !" yazdır;
        değilse
            sayılar arasında büyüklük durumunu kontrol et;
            eğer sayi1 > sayi3 ise
                ekrana "en büyük sayi (sayi1 in değeri)" yazdır;
            değilse
                ekrana "en büyük sayi (sayi3 ün değeri)" yazdır;
    değilse
        ilk iki sayıyı karşılaştır;
        eğer sayı1 > sayi2 ise
            sayi1 ile sayi3 ü karşılaştır
            eğer sayi1 > sayi3 ise
                ekrana "en büyük sayi (sayi1 in değeri)" yazdır;
            değilse
                ekrana "en büyük sayi (sayi3 in değeri)" yazdır;
        değilse
            sayi2 ile sayi3 ü karşılastir;
            eğer sayi2 > sayi3 ise
                ekrana "en büyük sayi (sayi2 in değeri)" yazdır;
            değilse
                ekrana "en büyük sayi (sayi3 in değeri)" yazdır;
    */
    int sayi1,sayi2,sayi3;
    printf("\nİlk sayıyı giriniz :");
    scanf("%d",&sayi1);
    printf("\nİkinci sayıyı giriniz :");
    scanf("%d",&sayi2);
    printf("\nÜçüncü sayıyı giriniz :");
    scanf("%d",&sayi3);
    if (sayi1==sayi2)
    {
        if (sayi1==sayi3)
        {
            printf("\nSAYILAR EŞİTTİR !");
        }
        else
        {
            if (sayi1>sayi3)
            {
                printf("\nen büyük sayı %d",sayi1);
            }
            else
            {
                printf("\nen büyük sayı %d",sayi3);
            }          
        }
    }
    else
    {
        if (sayi1>sayi2)
        {
            if (sayi1>sayi3)
            {
                printf("\en buyuk sayi %d",sayi1);
            }
            else
            {
                printf("\nen buyuk sayi %d",sayi3);
            }
        }
        else
        {
           if (sayi2>sayi3)
            {
                printf("\en buyuk sayi %d",sayi2);
            }
            else
            {
                printf("\nen buyuk sayi %d",sayi3);
            } 
        }
    }
    return 0;
}
