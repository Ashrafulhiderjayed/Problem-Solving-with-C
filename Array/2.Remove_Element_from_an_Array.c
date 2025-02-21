#include <stdio.h>

int main() {
    int n;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter array elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int positionRemove;
    printf("Enter the position you want to remove (0 to %d): ", n - 1);
    scanf("%d", &positionRemove);
    
    // Validate position
    if (positionRemove < 0 || positionRemove >= n) {
        printf("Invalid position!\n");
        return 1; // Exit program with an error
    }

    // Shift elements left
    for (int j = positionRemove; j < n - 1; j++) {
        arr[j] = arr[j + 1];
    }
    
    // Print the updated array
    printf("Updated array: ");
    for (int k = 0; k < n - 1; k++) {
        printf("%d ", arr[k]);
    }
    
    printf("\n");

    return 0;
}
// In this program, we have an array of size n and we want to remove an element from the array. We first read the size of the array and the elements from the user. Then, we read the position of the element to remove. We validate the position to ensure it is within the valid range (0 to n - 1). If the position is invalid, we print an error message and exit the program with an error code.

📌 Example Run:
Enter the size of the array: 5
Enter array elements: 10 20 30 40 50
Enter the position you want to remove (0 to 4): 2
Updated array: 10 20 40 50