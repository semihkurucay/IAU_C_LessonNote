#include <stdio.h>

int spped_limit = 100;

int percentage_overspeed(int speed) {
    return (speed - spped_limit) * 100 / spped_limit;
}

int traffic_fine(int speed) {
    int fine = 0;

    if (speed > spped_limit) {
        int percentage = percentage_overspeed(speed);
        fine = 100;

        while (percentage >= 10) {
            fine += 20;
            percentage -= 10;
        }
    }

    return fine;
}

void result(int speed) {
    int fine = traffic_fine(speed);
    int percentage = percentage_overspeed(speed);

    if (fine == 0) {
        printf("Kurallara uydugunuz icin tesekkur ederiz.\nHiz siniri : %i\nHiziniz : %i km/s", spped_limit, speed);
        return;
    }

    printf("Fazla hizli gidiyorsunuz, yavaslayin.\nHiz sinirini %% %i astiniz.\nOdeyeceginiz ceza tutari : %i tl\nHiz siniri : %i\nHiziniz : %i km/s",percentage,fine,spped_limit,speed);
}

int main() {
    int speed;
    printf("Hizinizi girin : ");
    scanf("%i", &speed);

    result(speed);
    return 0;
}