#include <stdio.h>
#include <math.h>
#include <string.h>
#include "pointer.c"

#define    PI    3.1415926535897

void swap(int *aPtr, int *bPtr) {
    int t;
    t = *bPtr;
    *bPtr = *aPtr;
    *aPtr = t;
}

void convert_to_hexadecimal(int num) {
    int i = 0, rem;
    char hex_arr[50];
    while (num != 0) {
        rem = num % 16;  // get the right most digit
        if (rem < 10) {
            hex_arr[i++] = 48 + rem;
        } else {
            hex_arr[i++] = 55 + rem;
        }
        num /= 16;  // get the quotient
    }


    for (int j = i - 1; j >= 0; j--)  // print the hex_arr in reverse order
    {
        printf("%c", hex_arr[j]);
    }
}

int convert_to_binary(int num) {
    int ans = 0;
    int i = 0, rem;

    while (num != 0) {
        rem = num % 2;  // get the remainder
        ans = rem * (int) pow(10, i++) + ans;
        num /= 2;  // get the quotient
    }
    return ans;
}

void testDCT() {
    int x, y, u, v;
    float in[8][8] = {{10, 100, 10, 100, 10, 100, 10, 100},
                      {100, 10, 100, 10, 100, 10, 100, 10},
                      {10, 100, 10, 100, 10, 100, 10, 100},
                      {100, 10, 100, 10, 100, 10, 100, 10},
                      {10, 100, 10, 100, 10, 100, 10, 100},
                      {100, 10, 100, 10, 100, 10, 100, 10},
                      {10, 100, 10, 100, 10, 100, 10, 100},
                      {100, 10, 100, 10, 100, 10, 100, 10}};
    float out[8][8], sum, Cu, Cv;
    for (u = 0; u < 8; u++) {
        for (v = 0; v < 8; v++) {
            sum = 0;
            for (x = 0; x < 8; x++)
                for (y = 0; y < 8; y++) {
                    sum = sum + in[x][y] * cos(((2.0 * x + 1) * u * PI) / 16.0) *
                                cos(((2.0 * y + 1) * v * PI) / 16.0);
                }
            if (u == 0) Cu = 1 / sqrt(2); else Cu = 1;
            if (v == 0) Cv = 1 / sqrt(2); else Cv = 1;

            out[u][v] = 1 / 4.0 * Cu * Cv * sum;
            printf("%8.1f ", out[u][v]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    f();
    printf("123");
    return 0;
}
