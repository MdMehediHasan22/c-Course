#include <stdio.h>

int calculateParkingLot(int hours, int minutes) {
    // Convert total time to minutes
    int totalMinutes = hours * 60 + minutes;

    if (totalMinutes <= 15) {
        return 0; // No charge for 15 minutes or less
    } else if (totalMinutes <= 120) {
        return 5; // $5 for up to 2 hours
    } else if (totalMinutes <= 300) {
        return 10; // $10 for more than 2 hours up to 5 hours
    } else {
        // More than 5 hours
        int extraHours = (totalMinutes - 300) / 60; // Additional full hours after 5 hours
        return 10 + extraHours; // $10 + $1 for each additional full hour
    }
}

int main() {
    int hours, minutes;
    scanf("%d %d", &hours, &minutes);
    int fee = calculateParkingLot(hours, minutes);
    printf("%d\n", fee);
    return 0;
}
