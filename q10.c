#include<stdio.h>
int main(){
        int total_seconds;
    printf("enter total seconds:");
    scanf("%d",&total_seconds);
    int hours=total_seconds/360;
    int minutes=(total_seconds%360)/60;
    int seconds=(total_seconds%360)%60;
    printf("time is %d hours, %d minutes, %d seconds",hours,minutes,seconds);
    return 0;
}
