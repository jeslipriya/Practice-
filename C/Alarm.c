#include <stdio.h>
#include <time.h>
#include <windows.h>

int main(){

    int h, m, s;
    
    printf("***********************\n");
    printf("Console Alarm Program");
    printf("\n***********************\n");

    printf("Enter the Time (HH MM SS): ");
    scanf("%d %d %d", &h, &m, &s);

    printf("Alarm set! \nWaiting....");

    while (TRUE)
    {
        time_t now = time(NULL);

        struct tm *local = localtime(&now);
        
        if (local->tm_hour == h && local->tm_min == m && local->tm_sec == s)
        {
            printf("\nTimes Up!!\n");
            Beep(750, 1000);
            break;
        }
        
        Sleep(1000);
    }
    

    return 0;
}