/*Experiment 1: Installation, environment setup and starting with C language
3. Write a program that takes two numbers from the user and adds them*/


#include <stdio.h>
int main() {
    int num1, num2, sum;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("%d\n", sum);

    return 0;
}