#include <stdio.h>
int main() {
    int i;
    printf("enter the number");
    scanf("%d", &i);
    if (i%2==0) {
        printf("number is even");
    }
        else {
            printf("number is odd");
        }
    return 0;
}
