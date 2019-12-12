#include <stdio.h>
#include "prnom.h"
#include "swtcalc.h"
#include "sumfact.h"
#include "admat.h"
#include <stdlib.h>

void main() {
    int n = 0;
    printf("\nEnter the choice:\n");
    scanf("   %d", &n);
    switch (n) {
        case 1: {
            funcal();
            break;
        }
        case 2: {
            funcart();
            break;
        }
        case 3: {
            calc_fs();
            break;
        }
        case 4: {
            matad();
            break;
        }
    }
    exit(0);
}