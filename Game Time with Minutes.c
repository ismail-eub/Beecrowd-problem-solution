#include <stdio.h>

int main() {
    int start_hour, start_minute, end_hour, end_minute;
    int duration_hour, duration_minute;


    scanf("%d %d", &start_hour, &start_minute);


    scanf("%d %d", &end_hour, &end_minute);


    int start_total_minutes = start_hour * 60 + start_minute;
    int end_total_minutes = end_hour * 60 + end_minute;

    if (end_total_minutes <= start_total_minutes) {

        end_total_minutes += 24 * 60;
    }

    int duration_total_minutes = end_total_minutes - start_total_minutes;

    duration_hour = duration_total_minutes / 60;
    duration_minute = duration_total_minutes % 60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duration_hour, duration_minute);

    return 0;
}
