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

int arr2D[3000][500]; // global variable so that it will be in data segment

/*
 * This is the main function to iterate over the entire array and set
 * the value of each element in the array to its index
 */
int main() {

    for(int row=0; row<3000; row++) {
	for(int col=0; col<500; col++) {
	    arr2D[row][col] = row + col;
	}
    }

     return 0;
 }