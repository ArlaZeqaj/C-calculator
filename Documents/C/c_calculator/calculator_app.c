#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void addition(){
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("\n%d + %d = %d\n", a, b, a+b);
}

void subtraction(){
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("\n%d - %d = %d\n", a, b, a-b);
}

void multiplication(){
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("\n%d * %d = %d\n", a, b, a*b);
}

void division(){
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("\n%d / %d = %.3lf\n", a, b, (double)a/b);
}

void modulus(){
    int a, b;
    printf("Enter the number and its divisor: ");
    scanf("%d %d", &a, &b);
    printf("\n%d %% %d = %d\n", a, b, a%b);
}

int main(){
    char operation;
    printf("\t\t\t\tCalculator app\n");
    printf("\n\t +  addition");
    printf("\n\t -  subtraction");
    printf("\n\t *  multiplication");
    printf("\n\t /  division");
    printf("\n\t %%  modulus\n");
    printf("\nEnter the operation: ");
    scanf("%c", &operation);
    if(operation=='+')
        addition();
    else if(operation=='-')
        subtraction();
    else if(operation=='*')
        multiplication();
    else if(operation=='/')
        division();
    else if(operation=='%')
        modulus();
    return 0;
}
