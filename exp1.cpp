#include <iostream>
using namespace std;

// Function to reverse an array of integers
void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    // Swap elements from the start and end until they meet in the middle
    while (start < end) {
        // Swap elements
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
        // Move pointers
        start++;
        end--;
    }
}

int main() {
    int N;
    cout << "Enter the size of the array: ";
    cin >> N;

    // Dynamic memory allocation
    int *A = new int[N];

    cout << "Enter " << N << " integers: ";
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    // Reverse the array
    reverseArray(A, N);

    // Print the reversed array
    cout << "Reversed array: ";
    for (int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }

    // Free allocated memory
    delete[] A;

    return 0;
}
