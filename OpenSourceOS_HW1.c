#include <stdio.h>

//Bir yolda hiz limiti 100 kmdir. Hiz limitini aşım cezası 100 tldir. Buna ek olarak her %10 aşımda ekstra 20 tl daha ceza vardir.
//Metod/Fonksiyon kullanarak yapın
int speed_limit = 100;

int percentage_overspeed(int speed) {
    return (speed - speed_limit) * 100 / speed_limit;
}

int traffic_fine(int speed) {
    int fine = 0;

    if (speed > speed_limit) {
        int percentage = percentage_overspeed(speed);
        fine = 100;

        fine += (percentage / 10) * 20;
    }

    return fine;
}

void result(int speed) {
    int fine = traffic_fine(speed);
    int percentage = percentage_overspeed(speed);

    if (fine == 0) {
        printf("Kurallara uydugunuz icin tesekkur ederiz.\nHiz siniri : %i\nHiziniz : %i km/s", speed_limit, speed);
        return;
    }

    printf("Fazla hizli gidiyorsunuz, yavaslayin.\nHiz sinirini %% %i astiniz.\nOdeyeceginiz ceza tutari : %i tl\nHiz siniri : %i\nHiziniz : %i km/s",percentage,fine,speed_limit,speed);
}

int main() {
    int speed;
    printf("Hizinizi girin : ");
    scanf("%i", &speed);

    result(speed);
    return 0;
}