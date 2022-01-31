#include <stdio.h>

#define seconds_per_minute 60
#define minute_per_hour 60

long seconds, minute, hour;
long minute_multiplier, hour_multiplier;

int main(void) {

    printf("Enter the number of seconds for conversion: \n");
    long user_input_seconds;
    scanf("%ld", &user_input_seconds);

    seconds = user_input_seconds % seconds_per_minute;
    minute_multiplier = user_input_seconds / seconds_per_minute;

    hour = minute_multiplier / minute_per_hour;
    minute = minute_multiplier % minute_per_hour;

    printf("hour: %ld\nminute: %ld\nsecond: %ld\n", hour, minute, seconds);

    return 0;
}