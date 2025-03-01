#include <stdio.h>

int main() {
    // Define two arrays
    int array1[] = {1, 2, 3, 4, 5};
    int array2[] = {6, 7};

    // Get the size of each array
    int size1 = sizeof(array1) / sizeof(array1[0]);
    int size2 = sizeof(array2) / sizeof(array2[0]);
    int mergedSize = size1 + size2;

    // Create a new merged array
    int mergedArray[mergedSize];

    // Copy elements from array1 to mergedArray
    for (int i = 0; i < size1; i++) {
        mergedArray[i] = array1[i];
    }

    // Copy elements from array2 to mergedArray
    for (int i = 0; i < size2; i++) {
        mergedArray[size1 + i] = array2[i];
    }

    // Print the merged array
    printf("Merged Array: ");
    for (int i = 0; i < mergedSize; i++) {
        printf("%d ", mergedArray[i]);
    }
    printf("\n");

    return 0;
}

Output:
Merged Array: 1 2 3 4 5 6 7










// Explanation of the array sizes:
int size1 = sizeof(array1) / sizeof(array1[0]);
int size2 = sizeof(array2) / sizeof(array2[0]);
Here’s how it works:

sizeof(array1)

This gives the total memory occupied by array1 in bytes.
Since array1 contains {1, 2, 3, 4, 5} and each int typically takes 4 bytes (depending on the system),
sizeof(array1) would be 5 × 4 = 20 bytes.
sizeof(array1[0])

This gives the size of one element in array1, which is an int (usually 4 bytes).
Dividing sizeof(array1) / sizeof(array1[0])

20 bytes / 4 bytes = 5, which gives the total number of elements in array1.
Similarly, for array2:

sizeof(array2) = 2 × 4 = 8 bytes
sizeof(array2[0]) = 4 bytes
8 / 4 = 2 elements.