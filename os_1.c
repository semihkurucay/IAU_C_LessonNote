#include <stdio.h>
#include<pthread.h>

//Bir yolda hız limiti 100 km saat, hız limit aşım cez 100 tl. Ek ceza, hız limiti her %10 ekstra 20 tl ceza olacak.
//Sistemde toplam ceza bulamk için t1
//ceza yok bulmak için t2
//bir thread oluştur

void* thread1(void *arg){
    printf("\nTh1 toplam cezayı buldu");
}

void* thread2(void *arg){
    printf("\nTh2 Ceza yok");
}

int speed_limit = 100;

int main(){
    int hiz;

    printf("Hizinizi girin : ");
    scanf("%i", &hiz);

    if(hiz >= speed_limit){
        int tceza = 100 + (hiz - speed_limit) / 10 * 20;
        printf("Toplam ceza : %i", tceza);
        pthread_t t1;
        pthread_create(&t1, NULL, thread1, NULL);
        pthread_join(t1, NULL);
    }else{
        printf("\nCeza yok");
        pthread_t t2;
        pthread_create(&t2, NULL, thread2, NULL);
        pthread_join(t2, NULL);
    }

    return 0;
}
