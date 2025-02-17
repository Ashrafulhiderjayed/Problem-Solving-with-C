#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n); // Read the size of the array from the user

    int arr[n + 1]; // Declare the array with size n + 1 to accommodate the new value

    // Read elements into the array
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    // Insert a new value into the array
    int insert_value, insert_position;
    printf("Enter the value to insert: ");
    scanf("%d", &insert_value);
    printf("Enter the position to insert (0 to %d): ", n);
    scanf("%d", &insert_position);

    // Shift elements to the right to make space for the new value
    for(int i = n; i > insert_position; i--){
        arr[i] = arr[i - 1];
    }

    // Insert the new value
    arr[insert_position] = insert_value;

    // Print the updated array
    printf("Updated array: ");
    for(int i = 0; i <= n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}