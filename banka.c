#include "stdio.h"
#include "stdlib.h"
#include "time.h"

int main(int argc, char const *argv[])
{
    srand(time(NULL));

    float bakiye=(float) (rand() % 2000);
    float cekilecek=0;
    float limit=500;

    printf("suanki bakiyeniz : %.2f\n",bakiye);
    printf("günlük çekim limitiniz : %.2f\n",limit);
    printf("lütfen çekmek istediğiniz miktari girin : ");
    
    scanf("%f",&cekilecek);
    
    if (cekilecek <= bakiye && cekilecek <= limit)
    {
        bakiye=bakiye-cekilecek;
        printf("Cekilen para miktari : %.2f\n",cekilecek);
        printf("Kalan para miktari : %.2f\n",bakiye);
    }
    else
    {
        if (cekilecek > limit)  
        {
            printf("Lütfen daha düşük bir cekim miktarı belirleyin");
        }
        else
        {
            printf("hesapta yeterli miktar yok");
        }   
    }
    return 0;
}
