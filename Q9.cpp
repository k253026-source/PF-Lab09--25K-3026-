#include <stdio.h>

int main() {
   
    int a = 100, b = 200, c = 300;

    int *p1 = &a;
    int *p2 = &b;
    int *p3 = &c;


    int *temp;
    temp = p1; p1 = p2; p2 = p3; p3 = temp;

    
    *p1 += 50;    
    *p2 -= 30;   
    *p3 *= 2;     

   
    p1 = &c;
    p2 = &a;
    p3 = &b;


    *p1 += 10;   
    *p2 -= 20;    
    *p3 *= 3;   

  
    printf("Final values:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);

    return 0;
}

