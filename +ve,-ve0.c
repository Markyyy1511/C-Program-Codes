#include <stdio.h>
int main() {
    int i;
    printf("enter the number");
    scanf("%d", &i);
    if (i>0) {
        printf("number is positive");
    }
        else if (i==0) {
            printf("number is 0");
        }
            else {
                printf("number is negative");
        }
    return 0;
}
