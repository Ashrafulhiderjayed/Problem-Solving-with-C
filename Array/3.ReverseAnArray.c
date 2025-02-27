#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the values of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Current array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Reverse the array
    int left = 0, right = n - 1;
    while (left < right) {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp; // Corrected swap

        left++;
        right--;
    }

    printf("\nReversed Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}


Input:
Enter the size of the array: 5
Enter the values of the array: 1 2 3 4 5


Output:
Current array: 1 2 3 4 5 
Reversed Array: 5 4 3 2 1 