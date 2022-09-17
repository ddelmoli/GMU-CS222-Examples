#include <stdio.h>
int main () {
    int a = 10;
    int b = -5;
    float f = 3.14159;

    fprintf(stdout, "%-5i %5i %+i % i %05i\n", a, a, a, b, b);
    fprintf(stdout, "%f %4.3f %+3.2f\n", f, f, f);

    return 0;
}