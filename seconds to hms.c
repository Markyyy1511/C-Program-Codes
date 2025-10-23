#include <stdio.h>
int main() {
    int i;
    printf("enter time in seconds");
    scanf("%d",&i);
    int h,m,s;
    h=i/3600;
    m=(i%3600)/60;
    s=i%60;
    printf("%d %d %d" , h,m,s);
    return 0;
}
