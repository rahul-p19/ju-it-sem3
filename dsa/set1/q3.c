/*Write a program to add two sparse polynomials.*/

#include <stdio.h>

typedef struct term
{
    float coef;
    int exp;
} term;

typedef struct poly
{
    term terms[100];
    int size;
} poly;

int i;

void inputPoly(poly *p)
{
    for (i = 0; i < p->size; i++)
    {
        printf("Enter coefficient and exponent of term %d: ", i + 1);
        scanf("%f %d", &(p->terms[i].coef), &(p->terms[i].exp));
    }
}

poly addPoly(poly p1, poly p2)
{
    poly res;
    int i =0 , j =0 , k = 0;
    while (i < p1.size && j < p2.size){
        if (p1.terms[i].exp > p2.terms[j].exp){
            res.terms[k++] = p1.terms[i++];
        }
        else if (p1.terms[i].exp < p2.terms[j].exp){
            res.terms[k++] = p2.terms[j++];
        }
        else{
            res.terms[k].coef = p1.terms[i++].coef + p2.terms[j].coef;
            res.terms[k++].exp = p2.terms[j++].exp;
        }
    }
    while (i < p1.size){
        res.terms[k++] = p1.terms[i++];
    }
    while (j < p2.size){
        res.terms[k++] = p2.terms[j++];
    }
    res.size = k;
    return res;
}

void printPoly(poly p){
    for (i = 0; i < p.size; i++){
        if (p.terms[i].coef != 0){
            if (p.terms[i].exp == 0)
                printf("%d", p.terms[i].coef);
            else if (p.terms[i].exp == 1)
                printf("%.2fx", p.terms[i].coef);
            else
                printf("%.2fx^%d", p.terms[i].coef, p.terms[i].exp);

            if (i < p.size - 1)
                printf(" + ");
            else
                printf("\n");
        }
    }
}

int main()
{
    poly p1, p2;
    printf("Enter size of first polynomial: ");
    scanf("%d", &(p1.size));
    printf("Enter 1st polynomial:\n");
    inputPoly(&p1);
    printf("Enter size of second polynomial: ");
    scanf("%d", &(p2.size));
    printf("Enter 2nd polynomial:\n");
    inputPoly(&p2);

    poly ans = addPoly(p1, p2);

    printf("First polynomial:\n");
    printPoly(p1);
    printf("Second polynomial:\n");
    printPoly(p2);
    printf("Resulting polynomial:\n");
    printPoly(ans);

    return 0;
}