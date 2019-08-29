#include <stdio.h>
char *myFunc(){
    char testChar = 'b';
    char *myPo = &testChar;
    return myPo;
}

int main() {
//    printf("%p",myFunc());
    int test1 = 10;
    int* const p = &test1;
    *p = 20;
    printf("%d", *p);
    return 0;
}