#include <stdio.h>

void myPrint(){
    printf("hello print\n");
}

void add1(){
    int a = 100;
    int b = 200;
    printf("%d\n",a+b);
}

int add2(){
    int a = 100;
    int b = 200;
    return a+b;
}

int add3(int a, int b){
    return a+b;
}

int main(){

myPrint();
add1();
printf("%d\n", add2());
printf("%d\n",add3(100,200));
return 0;
}
