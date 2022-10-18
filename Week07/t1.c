#include <stdio.h>

void proc1 (int a, int b);
void proc2 (int *a, int *b);
void proc3 (int *p1, int *p2);

int main () {
    int x=5, y=10;
    int *p1;
    int *p2;

    printf("Initial values: x=%d, y=%d\n",x,y);

    proc1(x,y);
    printf("After proc1, x=%d, y=%d\n",x,y);

    proc2(&x,&y);
    printf("After proc2, x=%d, y=%d\n",x,y);

    p1 = &x;
    p2 = &y;
//    proc3(p1,p2);
    proc3(x,y);
    printf("After proc3, x=%d, y=%d\n",x,y);

    return 0;
}

void proc1(int a, int b) {
    a=25;
    b=30;
}

void proc2(int *a, int *b) {
    *a=45;
    *b=60;
}

void proc3(int *p1, int *p2) {
    *p1=10;
    *p2=5;
}