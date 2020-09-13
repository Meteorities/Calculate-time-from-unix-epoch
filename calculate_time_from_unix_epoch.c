#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SECONDS_PER_MONTH 2592000 //as if every month has 30 days
#define SECONDS_PER_YEAR 31536000 //as if all years have 365 days
#define SECONDS_PER_DAY 86400
#define SECONDS_PER_HOUR 3600
#define SECONDS_PER_MINUTE 60

int main(void)
{
    unsigned long int test = 0;
    unsigned long int yrs = 0;
    unsigned long int mons = 0;
    unsigned long int days = 0;
    unsigned long int hrs = 0;
    unsigned long int mins = 0;
    unsigned long int secs = 0;

    test = time(NULL);
    
    yrs = test / SECONDS_PER_YEAR;
    mons = ((test - (yrs * SECONDS_PER_YEAR)) / SECONDS_PER_MONTH); 
    days = ((test - (yrs * SECONDS_PER_YEAR) - (mons * SECONDS_PER_MONTH)) / SECONDS_PER_DAY);
    hrs = ((test - (yrs * SECONDS_PER_YEAR) - (mons * SECONDS_PER_MONTH) - (days * SECONDS_PER_DAY)) / SECONDS_PER_HOUR);
    mins = ((test - (yrs * SECONDS_PER_YEAR) - (mons * SECONDS_PER_MONTH) - (days * SECONDS_PER_DAY) - (hrs * SECONDS_PER_HOUR)) / SECONDS_PER_MINUTE);
    secs = (test - (yrs * SECONDS_PER_YEAR) - (mons * SECONDS_PER_MONTH) - (days * SECONDS_PER_DAY) - (hrs * SECONDS_PER_HOUR) - (mins * SECONDS_PER_MINUTE));
    
    printf("Oringinal time in second unit:%u\n",test);
    printf("Current time after UNIX Epoch time:\n");
    printf("%u Years %u Months %u Days %u Hours %u Minutes %u Seconds\n",yrs,mons,days,hrs,mins,secs);
    
    return 0;
}
