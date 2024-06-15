#include <stdio.h>
#include "stats.h"

// Helper function to swap two elements
void swap(unsigned char* a, unsigned char* b) {
    unsigned char temp = *a;
    *a = *b;
    *b = temp;
}

// Function to sort the array in descending order using bubble sort
void sort_array(unsigned char* data, unsigned int length) {
    for (unsigned int i = 0; i < length - 1; i++) {
        for (unsigned int j = 0; j < length - i - 1; j++) {
            if (data[j] < data[j + 1]) {
                swap(&data[j], &data[j + 1]);
            }
        }
    }
}

// Function to find the median of the array
unsigned char find_median(unsigned char* data, unsigned int length) {
    // Create a copy of the data to avoid modifying the original array
    unsigned char sorted_data[length];
    for (unsigned int i = 0; i < length; i++) {
        sorted_data[i] = data[i];
    }

    // Sort the copy
    sort_array(sorted_data, length);

    // Find the median
    if (length % 2 == 0) {
        return (sorted_data[length / 2 - 1] + sorted_data[length / 2]) / 2;
    } else {
        return sorted_data[length / 2];
    }
}

// Function to find the mean of the array
unsigned char find_mean(unsigned char* data, unsigned int length) {
    unsigned int sum = 0;
    for (unsigned int i = 0; i < length; i++) {
        sum += data[i];
    }
    return (unsigned char)(sum / length);
}

// Function to find the maximum value of the array
unsigned char find_maximum(unsigned char* data, unsigned int length) {
    unsigned char max = data[0];
    for (unsigned int i = 1; i < length; i++) {
        if (data[i] > max) {
            max = data[i];
        }
    }
    return max;
}

// Function to find the minimum value of the array
unsigned char find_minimum(unsigned char* data, unsigned int length) {
    unsigned char min = data[0];
    for (unsigned int i = 1; i < length; i++) {
        if (data[i] < min) {
            min = data[i];
        }
    }
    return min;
}

// Function to print the array to the screen
void print_array(unsigned char* data, unsigned int length) {
    printf("Array: ");
    for (unsigned int i = 0; i < length; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");
}

// Function to print the statistics of the array
void print_statistics(unsigned char* data, unsigned int length) {
    printf("Statistics:\n");
    printf("Minimum: %d\n", find_minimum(data, length));
    printf("Maximum: %d\n", find_maximum(data, length));
    printf("Mean: %d\n", find_mean(data, length));
    printf("Median: %d\n", find_median(data, length));
}
