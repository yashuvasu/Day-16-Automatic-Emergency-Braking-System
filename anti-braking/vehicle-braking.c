#include <stdio.h>

int main() {
    float speed, distance;

    printf("Enter Speed (km/h): ");
    scanf("%f", &speed);

    printf("Enter Distance to Obstacle (m): ");
    scanf("%f", &distance);

    printf("\n--- AEB SYSTEM ---\n");

    if (distance < 10 && speed > 0) {
        printf("🚨 EMERGENCY BRAKE ACTIVATED!\n");
    }
    else if (distance < 25) {
        printf("⚠️ Warning: Object Ahead!\n");
    }
    else {
        printf("✅ Safe Driving\n");
    }

    return 0;
}
