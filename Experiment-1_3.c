/*Experiment 1: Installation, environment setup and starting with C language
2. Write a program that prompts user to enter their name and age*/


#include <stdio.h>
int main() {
    char name[100];
    int age;

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Name: %s\n", name);
    printf("Age: %d\n", age);

    return 0;
}