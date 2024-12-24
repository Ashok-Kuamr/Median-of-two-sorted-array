#include <iostream>
using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main() {
    int a[] = {12, 23, 34, 54};
    int b[] = {32, 65, 43,87};
    int c[10];

    int i, j, k = 0;

    // Display array a
    cout << "Array a is: ";
    for (i = 0; i < 4; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    // Display array b
    cout << "Array b is: ";
    for (j = 0; j < 4; j++) {
        cout << b[j] << " ";
    }
    cout << endl;

    // Combine arrays a and b into c
    for (i = 0; i < 4; i++, k++) {
        c[k] = a[i]; // Add elements of a to c
    }
    for (j = 0; j < 4; j++, k++) {
        c[k] = b[j]; // Add elements of b to c
    }

    // Display array c
    cout << "Array c is: ";
    for (int m = 0; m < k; m++) { // k is the total size of c
        cout << c[m] << " ";
    }
    cout << endl;

    // Sort only the valid elements in c
    bubbleSort(c, k);

    // Display sorted array c
    cout << "Sorted Array c: ";
    for (i = 0; i < k; i++) {
        cout << c[i] << " ";
    }
    cout << endl;
    
double median = (k % 2 == 0) ? (c[k / 2] + c[(k / 2) - 1]) / 2.0 : c[k / 2];

cout << "Median of the sorted array c: " << median << endl;

    

    return 0;
}
