#include <stdio.h>
int f1(void);
int f2(int p_x, int p_a);
int g_a;

int main() {
   int l_a, l_b, l_c;
   l_a = 7;
   l_b = f1();
   l_c = f2(l_a,l_b);
   printf("%d %d %d\n", l_a, l_b, l_c); 
   return 0;
}

int f1(void) {
   g_a = 12;
   printf("%d ",g_a); 
   return(g_a+5);
}

int f2(int p_x,int p_a) {
   printf("%d ",p_a);
   return(p_x*p_a); 
}
