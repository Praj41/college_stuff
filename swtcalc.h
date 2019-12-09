#include <stdio.h>

void funcart() {
    int n = 0, x, y, z;
    while (n < 5) {
        printf("\nEnter the choice: \n1. add \n2. subtract \n3. multiply \n4. divide \nother. EXIT \n>>>");
        scanf("   %d", &n);
        if (n < 5) {
            printf("Enter numbers x and y where \nx+y\nx-y\nx*y\nx/y\nEnter x\n");
            scanf("%d", &x);
            printf("Enter y\n");
            scanf("%d", &y);
        }
        switch (n) {
            case 1: {
                printf("We are adding %d & %d\n", x, y);
                z = x + y;
                printf("Answer is = %d\n\n", z);
                break;
            }
            case 2: {
                printf("We are subtracting %d & %d\n", x, y);
                z = x - y;
                printf("Answer is = %d\n\n", z);
                break;
            }
            case 3: {
                printf("We are multiplying %d & %d\n", x, y);
                z = x * y;
                printf("Answer is = %d\n\n", z);
                break;
            }
            case 4: {
                printf("We are dividing %d & %d\n", x, y);
                z = x / y;
                printf("Answer is = %d\n\n", z);
                break;
            }
        }
    }
    printf("exiting program...");
}