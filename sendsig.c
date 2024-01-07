////////////////////////////////////////////////////////////////////////////////
// Main File:        sendsig.c
// This File:        sendsig.c
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
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: sendsig <signal type> <pid>\n");
        exit(1);
    }

    int pid = atoi(argv[2]);

    if (strcmp(argv[1], "-i") == 0) {
        kill(pid, SIGINT);
    } else if (strcmp(argv[1], "-u") == 0) {
        kill(pid, SIGUSR1);
    } else {
        printf("Invalid signal type. Please use -i or -u.\n");
        exit(1);
    }

    return 0;
}
