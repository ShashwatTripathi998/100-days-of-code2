//Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

/*
Sample Test Cases:
Input 1:
GREEN
Output 1:
Go

*/
#include <stdio.h>
enum TrafficLight { RED, YELLOW, GREEN };

int main() {
    enum TrafficLight signal;
    for (signal = RED; signal <= GREEN; signal++) {
        switch (signal) {
            case RED:
                printf("Signal: RED -> Action: Stop\n");
                break;
            case YELLOW:
                printf("Signal: YELLOW -> Action: Wait\n");
                break;
            case GREEN:
                printf("Signal: GREEN -> Action: Go\n");
                break;
        }
    }
    return 0;
}