///////////////////////////////////////////////////////////////////////////////
// Main File:        cache1D.c
// This File:        cache1D.c
// Other Files:      cache1D.c cache2Drows.c cache2Dcols.c cache2Dclash.c
// Semester:         CS 354 Fall 2023
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
#include <string.h>

int arr[100000]; // global variable so that it will be in the data segment

/*
 * This is the main function to iterate over the entire array and set
 * the caluse of ech element in the array
 */
int main() {

    for(int i=0; i<100000; i++) {
	arr[i] = i;
    }

    return 0;
}