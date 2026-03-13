#include <stdio.h>
#include<pthread.h>

void* thread1(void* arg) {
    printf("\nthread1 calisti\n");
}

void* thread2(void* arg) {
    printf("\nthread2 - cift buldu");
}

void* thread3(void* arg) {
    printf("\nthread3 - tek buldu");
}

int main(void) {
    int sayi1, sayi2, sonuc;
    printf("Birinci sayi girin : ");
    scanf("%i", &sayi1);

    printf("Ikinci sayi girin : ");
    scanf("%i", &sayi2);

    sonuc = sayi1 + sayi2;
    printf("Toplama sonucu : %i", sonuc);

    pthread_t t1;
    pthread_create(&t1, NULL, thread1, NULL);
    pthread_join(t1, NULL);

    if (sonuc % 2 == 0) {
        printf("Sayi cift");
        pthread_t t2;
        pthread_create(&t2, NULL, thread2, NULL);
        pthread_join(t2, NULL);
    }else {
        printf("Sayi tek");
        pthread_t t3;
        pthread_create(&t3, NULL, thread3, NULL);
        pthread_join(t3, NULL);
    }
    return 0;
}