#include <stdio.h>

int main() {
    int c= 2;
    int d = 7;

    int temperatures[c][d];

    printf("Enter the temperature (in degrees Celsius) for each city for a week:\n");
    for (int city = 0; city < c; city++) {
        printf("City %d:\n", city + 1);
        for (int day = 0; day < d; day++) {
            printf("Day %d: ", day + 1);
            scanf("%d", &temperatures[city][day]);
        }
        printf("\n");
    }

    
    printf("\nTemperatures:\n");
    for (int city = 0; city < c; city++) {
        printf("City %d:\n", city + 1);
        for (int day = 0; day < d; day++) {
            printf("Day %d: %d°C\n", day + 1, temperatures[city][day]);
        }
        printf("\n"); 
    }

    return 0;
}