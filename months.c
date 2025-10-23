#include <stdio.h>
int main() {
    int month;
    printf("enter month");
    scanf("%d",&month);
    
    switch(month) {
        case 1:
        printf("january");
        break;
        case 2:
        printf("feb");
        break;
        case 3:
        printf("mar");
        case 4:
        printf("april");
        break;
        case 5:
        printf("may");
        break;
    }
    return 0;
}
