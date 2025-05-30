#include <stdio.h>
#include <stdlib.h>

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int *result = (int*)malloc(sizeof(int) * (m + n));

    int k = 0;

    // Copy all m valid elements from nums1
    for (int i = 0; i < m; i++) {
        result[k++] = nums1[i];
    }

    // Copy all n elements from nums2
    for (int j = 0; j < n; j++) {
        result[k++] = nums2[j];
    }

    // Sort the result array (bubble sort for your approach)
    for (int i = 0; i < m + n - 1; i++) {
        for (int j = 0; j < m + n - i - 1; j++) {
            if (result[j] > result[j + 1]) {
                int temp = result[j];
                result[j] = result[j + 1];
                result[j + 1] = temp;
            }
        }
    }

    // Copy back into nums1
    for (int i = 0; i < m + n; i++) {
        nums1[i] = result[i];
    }

    free(result);
}
