/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c 
 * @brief Implementation for assignment-1
 *
 * Functions that take an int array and its length as parameter and 
 * print it, its statistics, and
 * find its min, max, mean and median values
 *
 * @author Vivek Joshi
 * @date November 26, 2022
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  printf("orignial ");
  print_array(test, SIZE);
  printf("mean: %d\n", find_mean(test, SIZE));
  printf("max: %d\n", find_maximum(test, SIZE));
  printf("min: %d\n", find_minimum(test, SIZE));
}

void print_statistics(unsigned char a[], int len) {
}

void print_array(unsigned char a[], int len) {
	printf("array [ ");
	for (int i = 0; i < len; i++)
		printf("%d ", a[i]);
	printf("]\n");
}

unsigned char find_median(unsigned char a[], int len) {
	return 0;
}

int find_mean(unsigned char a[], int len) {
	int sum = 0;
	for (int i = 0; i < len; i++) 
		sum += a[i];
	return sum/len;
}

unsigned char find_maximum(unsigned char a[], int len) {
	unsigned char max = 0;
	for (int i = 0; i < len; i++) 
		max = max > a[i] ? max : a[i];
	return max;
}

unsigned char find_minimum(unsigned char a[], int len) {
	unsigned char min = 0;
	for (int i = 0; i < len; i++) 
		min = min < a[i] ? min : a[i];
	return min;
}

void sort_array(unsigned char a[], int len) {
}

