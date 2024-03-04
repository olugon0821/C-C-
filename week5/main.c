#include <stdio.h>
#include "mylib.h"
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d\n", add(a,b));
    printf("%d\n", minus(a,b));
    printf("%d\n", multiple(a,b));
    printf("%.3f\n", divide(a,b));

    return 0;
}
