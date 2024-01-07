////////////////////////////////////////////////////////////////////////////////
// Main File:        division.c
// This File:        division.c
// Other Files:      (name of all other files if any)
// Semester:         CS 354 Lecture 001
// Instructor:       deppeler
// 
// Author:           Anurag Sai Tallapragada
// Email:            atallapragad@wisc.edu
// CS Login:         tallapragada
//
/////////////////////////// OTHER SOURCES OF HELP //////////////////////////////
//                   fully acknowledge and credit all sources of help,
//                   other than Instructors and TAs.
//
// Persons:          Identify persons by name, relationship to you, and email.
//                   Describe in detail the the ideas and help they provided.
//
// Online sources:   avoid web searches to solve your problems, but if you do
//                   search, be sure to include Web URLs and description of 
//                   of any information you find.
//////////////////////////// 80 columns wide ///////////////////////////////////
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <string.h>

volatile int count = 0;

void sigfpe_handler(int sig) {
    printf("Error: a division by 0 operation was attempted.\n");
    printf("Total number of operations completed successfully: %d\n", count);
    printf("The program will be terminated.\n");
    exit(0);
}

void sigint_handler(int sig) {
    printf("\nTotal number of operations completed successfully: %d\n", count);
    printf("The program will be terminated.\n");
    exit(0);
}

int main() {
    struct sigaction sa_fpe, sa_int;
    memset(&sa_fpe, 0, sizeof(sa_fpe));
    memset(&sa_int, 0, sizeof(sa_int));

    sa_fpe.sa_handler = &sigfpe_handler;
    sigaction(SIGFPE, &sa_fpe, NULL);

    sa_int.sa_handler = &sigint_handler;
    sigaction(SIGINT, &sa_int, NULL);

    char buffer[100];
    int num1, num2;

    while (1) {
        printf("Enter first integer: ");
        fgets(buffer, 100, stdin);
        num1 = atoi(buffer);

        printf("Enter second integer: ");
        fgets(buffer, 100, stdin);
        num2 = atoi(buffer);

        if (num2 == 0) {
            printf("Error: a division by 0 operation was attempted.\n");
            printf("Total number of operations completed successfully: %d\n", count);
            printf("The program will be terminated.\n");
            exit(0);
        }

        int quotient = num1 / num2;
        int remainder = num1 % num2;
        printf("%d / %d is %d with a remainder of %d\n", num1, num2, quotient, remainder);
        count++;
    }

    return 0;
}
