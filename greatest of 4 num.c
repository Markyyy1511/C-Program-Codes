#include <stdio.h>
int main() {
    int a,b,c,d;
    printf("enter the value for a,b,c,d");
    scanf("%d%d%d%d",&a,&b,&c,&d);
     if (a>b && a>c && a>d) {
         printf("a is greater");
     }
     else if (b>c && b>d) {
         printf("b is greater");
     }
     else if (c>d) {
         printf("c is greater");
     }
     else {
         printf("d is greatest");
     }
     return 0;
}
