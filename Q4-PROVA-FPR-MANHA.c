/*Desenvolver uma função recursiva que, dado um
número inteiro n, no intervalo de 1 a 3000, exiba o
número romano equivalente.
*/
/*
I = 1
V = 5
X = 10
L = 50
C = 100
D = 500
M = 1000
*/

#include <stdio.h>

void romanosRec(int n);

void main() {
    int n = 49;
    printf("O numero eh ", n);
    romanosRec(n);
    printf("\n");
}

void romanosRec(int n) {
    if (n >= 1 && n <= 3000) {
        if (n >= 1000) {
            printf("M");
            romanosRec(n - 1000);
        } else if (n >= 900) {
            printf("CM");
            romanosRec(n - 900);
        } else if (n >= 500) {
            printf("D");
            romanosRec(n - 500);
        } else if (n >= 400) {
            printf("CD");
            romanosRec(n - 400);
        } else if (n >= 100) {
            printf("C");
            romanosRec(n - 100);
        } else if (n >= 90) {
            printf("XC");
            romanosRec(n - 90);
        } else if (n >= 50) {
            printf("L");
            romanosRec(n - 50);
        } else if (n >= 40) {
            printf("XL");
            romanosRec(n - 40);
        } else if (n >= 10) {
            printf("X");
            romanosRec(n - 10);
        } else if (n >= 9) {
            printf("IX");
            romanosRec(n - 9);
        } else if (n >= 5) {
            printf("V");
            romanosRec(n - 5);
        } else if (n >= 4) {
            printf("IV");
            romanosRec(n - 4);
        } else if (n >= 1) {
            printf("I");
            romanosRec(n - 1);
        }
    }
}


