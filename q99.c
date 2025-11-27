#include <stdio.h>
#include <string.h>
int main() {
    char date[20];
    char day[3], month[3], year[5];
    char *months[] = {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };
    printf("Enter date in format dd/mm/yyyy: ");
    fgets(date, sizeof(date), stdin);
    date[strcspn(date, "\n")] = '\0';
    sscanf(date, "%2s/%2s/%4s", day, month, year);
    int monthNum = atoi(month);
    if (monthNum >= 1 && monthNum <= 12) {
        printf("Converted date: %s-%s-%s\n", day, months[monthNum - 1], year);
    } else {
        printf("Invalid month entered.\n");
    }
    return 0;
}