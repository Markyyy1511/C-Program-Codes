#include <stdio.h>
int main() {
    int i,n;
    int sum=0;
    printf("enter n");
    scanf("%d",&n);
    for (i=1;i<=n;i++) {
        sum+= i;
    }
    printf("%d\n",sum);
    return 0;
}
