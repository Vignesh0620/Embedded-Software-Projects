#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {
    unsigned char test[SIZE] = {34, 201, 190, 154, 8, 194, 2, 6,
                                114, 88, 45, 76, 123, 87, 25, 23,
                                200, 122, 150, 90, 92, 87, 177, 244,
                                201, 6, 12, 60, 8, 2, 5, 67,
                                7, 87, 250, 230, 99, 3, 100, 90};
    // Function calls for testing
    print_statistics(test, SIZE);
}

void print_statistics(unsigned char* data, unsigned int length) {
    // TODO: Implement this function
}

void print_array(unsigned char* data, unsigned int length) {
    // TODO: Implement this function
}

unsigned char find_median(unsigned char* data, unsigned int length) {
    // TODO: Implement this function
    return 0;
}

unsigned char find_mean(unsigned char* data, unsigned int length) {
    // TODO: Implement this function
    return 0;
}

unsigned char find_maximum(unsigned char* data, unsigned int length) {
    // TODO: Implement this function
    return 0;
}

unsigned char find_minimum(unsigned char* data, unsigned int length) {
    // TODO: Implement this function
    return 0;
}

void sort_array(unsigned char* data, unsigned int length) {
    // TODO: Implement this function
}

