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
 * @file stats.h 
 * @brief Function declarations for assignment-1
 *
 * Function declarations to find max, min, mean, median, and for sorting and 
 * printing give an array of type unsigned char.
 *
 * @author Vivek Joshi
 * @date November 26, 2022
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief Takes an array and its length, and prints its max, min, mean and median values.
 * @param a array of type unsigned char whose statistics will be printed on console
 * @param len length of the parameter array
 * @return void
 */
void print_statistics(unsigned char a[], int len);

/**
 * @brief Takes an array and its length, and prints it on console.
 * @param a array of type unsigned char to be printed on console
 * @param len length of the parameter array
 * @return void
 */
void print_array(unsigned char a[], int len);

/**
 * @brief Takes an array and its length, and returns its median value.
 * @param a array of type unsigned char
 * @param len length of the parameter array
 * @return median of the array
 */
unsigned char find_median(unsigned char a[], int len);

/**
 * @brief Takes an array and its length, and returns its arithmetic mean.
 * @param a array of type unsigned char
 * @param len length of the parameter array
 * @return int-rounded arithmetic mean of the array
 */
int find_mean(unsigned char a[], int len);

/**
 * @brief Takes an array and its length, and returns the maximum value in the array.
 * @param a array of type unsigned char
 * @param len length of the parameter array
 * @return max-value in the parameter array
 */
unsigned char find_maximum(unsigned char a[], int len);


/**
 * @brief Takes an int array and its length, and returns the minimum value in the array.
 * @param a array of type unsigned char
 * @param len length of the parameter array
 * @return min-value in the parameter array
 */
unsigned char find_minimum(unsigned char a[], int len);


/**
 * @brief Takes an array and its length, and sorts it in descending order.
 * @param a array of type int
 * @param len length of the parameter array
 * @return void
 */
void sort_array(unsigned char a[], int len);

#endif /* __STATS_H__ */
