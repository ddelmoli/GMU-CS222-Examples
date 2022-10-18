#include <stdio.h>

void proc1(char p[]);
void proc2(char *p);

int main() {
    char a[4];
    int b[4];
    char c;

    a[0] = 67;
    a[1] = 97;
    a[2] = 116;
    a[3] = 0;

    printf("a is %s\n",a);

    proc1(a);
    printf("After proc1, a is %s\n",a);

    proc2(&a[1]);
    printf("After proc2, a is %s\n",a);

    b[0] = 'D';
    b[1] = 'o';
    b[2] = 'g';
    b[3] = '\0';
    printf("b[2] is %d\n",b[2]);

    c = b[1];
    printf("c is %c\n",c);
    printf("c is also %d\n",c);

    return 0;
}

void proc1(char p[]) {
    p[1] = 'o';
}

void proc2(char *p) {
    *p = 'u';
    p++;
    *p = 'p';
}