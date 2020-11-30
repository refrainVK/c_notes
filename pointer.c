#include <stdio.h>
#include <stdlib.h>

void
f(void)
{
    int a[4];
    int *b = malloc(16);
    int *c;
    int i;

    printf("1: a = %p, b = %p, c = %p\n", a, b, c);

    c = a;
    for (i = 0; i < 4; i++) {
        a[i] = 100 + i;
    }

    c[0] = 200;
    printf("2: a[0] = %d, a[1] = %d, a[2] = %d, a[3] = %d\n", a[0], a[1], a[2], a[3]);

    printf("c + 2 is %p\n", c + 2);
    c[1] = 300;

    // c[2]
    *(c + 2) = 301;

    // 3[c] -> c[3]
    3[c] = 302;
    printf("3: a[0] = %d, a[1] = %d, a[2] = %d, a[3] = %d\n",
           a[0], a[1], a[2], a[3]);

    c = c + 1;
    *c = 400;
    printf("4: a[0] = %d, a[1] = %d, a[2] = %d, a[3] = %d\n",
           a[0], a[1], a[2], a[3]);

    // int* -> 4
    // char* -> 1
    printf("c is %p\n", c);
    printf("char* c is %p\n", (char *)c);
    printf("char* c + 1 is %p\n", (char *)c + 1);
    printf("(int *) ((char *) c + 1) is %p\n", (int *) ((char *) c + 1));

    printf("c + 1 is %p\n", (c + 1));
    c = (int *) ((char *) c + 1);
    *c = 500;
    printf("5: a[0] = %d, a[1] = %d, a[2] = %d, a[3] = %d\n",
           a[0], a[1], a[2], a[3]);


    b = (int *) a + 1;
    c = (int *) ((char *) a + 1);
    printf("6: a = %p, b = %p, c = %p\n", a, b, c);

    int* su = ((int *) 0);
    printf("su points to %d", *su);

    // a[0]:
    // 0000 0000
    // 0000 0000
    // 0000 0000
    // 1100 1000

    // C8
    // 00
    // 00
    // 00

    // a[1]:
    // 0000 0000
    // 0000 0001 <- c
    // 1111 0100
    // 1001 0000

    // 90   // 90
    // 01   // F4 <- c
    // 00   // 01
    // 00   // 00

    // a[2]:
    // 0000 0000
    // 0000 0000
    // 0000 0001
    // 0010 1101

    // 2D   // 00
    // 01   // 01
    // 00   // 00
    // 00   // 00
}
