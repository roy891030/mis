#include <stdio.h>

int main()
{
    struct TIME
    {
        int hours;
        int minutes;
        int seconds;
    };
    struct TIME time[2];
    int i;
    int j;
    for (i = 0; i < 2; i++)
    {
        printf("Enter time %d (hours, minutes and seconds) :\n", i + 1);
        scanf("%d", &time[i].hours);
        scanf("%d", &time[i].minutes);
        scanf("%d", &time[i].seconds);
    }

    struct TIME new_time;

    if (time[0].seconds < time[1].seconds)
    {
        time[0].minutes -= 1;
        time[0].seconds += 60;
    }
    new_time.seconds = time[0].seconds - time[1].seconds;
    if (time[0].minutes < time[1].minutes)
    {
        time[0].hours -= 1;
        time[0].minutes += 60;
    }
    new_time.minutes = time[0].minutes - time[1].minutes;
    new_time.hours = time[0].hours - time[1].hours;

    printf("Time Difference: %d:%d:%d - %d:%d:%d = %d:%d:%d", time[0].hours, time[0].minutes, time[0].seconds, time[1].hours, time[1].minutes, time[1].seconds, new_time.hours, new_time.minutes, new_time.seconds);
}