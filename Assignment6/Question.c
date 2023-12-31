#include <stdio.h>
#define SIZE 10

// Function to find the maximum element in an array recursivelyw
int findMax(int arr[], int n) {
    // Base case: if there is only one element in the array
    if (n == 1) {
        return arr[0];
    }

    // Recursive case: find the maximum element in the rest of the array
    int maxRest = findMax(arr + 1, n - 1);

    // Compare the maximum element in the rest with the first element
    if (arr[0] > maxRest) return arr[0];
    else return maxRest;
}

void printArray(int arr[], int n) {
    printf("[ ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("]\n");
}


int main()
{
	int arr[SIZE] = {-9, 30, 12, 53, 9, -43, -2, 9, 103, 95};

    printArray(arr, SIZE);
    printf("\nThe maximum value of the array is: %d\n", findMax(arr, SIZE));
}
