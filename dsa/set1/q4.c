/* Write a program to evaluate sparse polynomials */

#include <stdio.h>
#include <math.h>

int i;

typedef struct term {
    int coef, exp;
} term;

typedef struct poly {
    term terms[100];
    int size;
} poly;

void inputPoly(poly *p) {
    for (i = 0; i < p->size; i++) {
        printf("Enter coefficient and exponent of term %d: ", i + 1);
        scanf("%d %d", &(p->terms[i].coef), &(p->terms[i].exp));
    }
}

void evaluatePoly(poly p, int x) {
    long long ans = 0;
    for (i = 0; i < p.size; i++) {
        ans += p.terms[i].coef * pow(x, p.terms[i].exp);
    }
    printf("%lld\n", ans);
}

void printPoly(poly p) {
    for (i = 0; i < p.size; i++) {
        if (p.terms[i].coef != 0) {
            if (p.terms[i].exp == 0)
                printf("%d", p.terms[i].coef);
            else if (p.terms[i].exp == 1)
                printf("%dx", p.terms[i].coef);
            else
                printf("%dx^%d", p.terms[i].coef, p.terms[i].exp);

            if (i < p.size - 1)
                printf(" + ");
            else
                printf("\n");
        }
    }
}

int main() {
    poly p;
    printf("Enter the no of terms in polynomial: ");
    scanf("%d", &(p.size));
    int x;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    inputPoly(&p);
    printf("Polynomial: ");
    printPoly(p);
    evaluatePoly(p, x);
    return 0;
}
