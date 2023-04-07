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

void square_root(){
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);
    printf("\n%c%d = %.3lf\n", 251, a, sqrt(a));
}

void average(){
    int num, sum=0, cnt=0;
    printf("\nEnter the numbers (press -1 to stop): ");
    while(1){
        scanf("%d", &num);
        if(num==-1)
            break;
        sum+=num;
        cnt++;
    }
    printf("\nThe average is %.2lf\n", (double)sum/cnt);
}

void power(){
    int a, b;
    printf("Enter the base and the exponent: ");
    scanf("%d %d", &a, &b);
    printf("\n%d ^ %d = %.1lf\n", a, b, pow(a, b));
}

int main(){
    char operation;
    printf("\t\t\t\tCalculator app\n");
    printf("\n\t +  addition");
    printf("\n\t -  subtraction");
    printf("\n\t *  multiplication");
    printf("\n\t /  division");
    printf("\n\t %%  modulus");
    printf("\n\t s  square root");
    printf("\n\t ^  power");
    printf("\n\t a  average of n numbers\n");
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
    else if(operation=='s')
        square_root();
    else if(operation=='^')
        power();
    else if(operation=='a')
        average();
    return 0;
}
