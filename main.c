#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int arr[10] = {17, 21, 13, 1, 3, 11}, size = 6;

    /*
    // Selection Sort
    selectionSort (arr, size);

    for (int i = 0; i < size; i++) {
        printf ("%d ", arr[i]);
    }
    */

    /*
    // Bubble Sort
    bubbleSort (arr, size);

    for (int i = 0; i < size; i++) {
        printf ("%d ", arr[i]);
    }
    */

    /*
    // Insertion Sort
    insertionSort (arr, size);

    for (int i = 0; i < size; i++) {
        printf ("%d ", arr[i]);
    }
    */

    /*
    mergeSort (arr, 0, size-1);

    for (int i = 0; i < size; i++) {
        printf ("%d ", arr[i]);
    }
    */

    /*
    heapSort (arr, size);

     for (int i = 0; i < size; i++) {
        printf ("%d ", arr[i]);
    }
    */

    /*
    quickSort (arr, 0, size-1);

    for (int i = 0; i < size; i++) {
        printf ("%d ", arr[i]);
    }
    */

    return 0;
}

/*
void selectionSort (int ar[], int n) {
    int i, j;

    for (i = 0; i < n; i++) {
        int min = ar[i];
        int loc = i;

        for (j = i + 1; j < n; j++) {
            if (min > ar[j]) {
                min = ar [j];
                loc = j;
            }
        }
        swap (&ar[i], &ar[loc]);
    }
}
*/

/*
void bubbleSort (int ar[], int n) {

    int i, j;

    for (i = 0; i <= n-2; i++) {

        for (j = 0; j <= (n - (i+2)); j++) {
            if (ar [j] > ar [j + 1]) {
                swap (&ar[j], &ar[j+1]);
            }
        }
    }
}
*/

/*
void insertionSort (int ar[], int n) {
    int i, j;

    for (i = 1; i < n; i++) {
        int key = ar[i];
        j = i - 1;

        while ( (j >= 0) && (key < ar[j]) ) {
            ar [j+1] = ar [j];
            j--;
        }
        ar [j+1] = key;
    }
}
*/

/*
void mergeSort (int arr[], int l, int r) {
    if (l < r) {
        int mid = (l+r) / 2;
        mergeSort (arr, l, mid);
        mergeSort (arr, mid+1, r);
        merge (arr, l, mid, r);
    }
}

void merge (int arr[], int l, int mid, int r) {
    int n1 = (mid-l) + 1;
    int n2 = r - mid;
    int i, j, k;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++) {
        L[i] = arr [l+i];
    }

    for (j = 0; j < n2; j++) {
        R[j] = arr [mid+1 + j];
    }

    i = 0;
    j = 0;
    k = l;

    while ( (i<n1) && (j<n2) ) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr [k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr [k] = R[j];
        j++;
        k++;
    }

}
*/

/*
void heapify (int arr[], int n, int i) {

    int largest = i;

    int left = (2 * i) + 1;
    int right = (2 * i) + 2;

    if ((left < n) && (arr[left] > arr[largest])) {
        largest = left;
    }

    if ( (right < n) && (arr[right] > arr[largest])) {
        largest = right;
    }

    if (largest != i) {
        swap (&arr[i], &arr[largest]);

        heapify (arr, n, largest);
    }
}

void heapSort (int arr[], int n) {

    for (int i = ((n/2) -1); i >= 0; i--) {
        heapify (arr, n, i);
    }

    for (int i = n - 1; i > 0; i--) {
        swap (&arr[0], &arr[i]);
        heapify (arr, i, 0);
    }
}
*/

/*
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int q = partition(arr, low, high);
        quickSort(arr, low, q - 1);
        quickSort(arr, q + 1, high);
    }
}

int partition(int arr[], int low, int high) {
    int pivot = arr[low];
    int i = low;
    int j = high;

    while (i < j) {
        while ((arr[i] <= pivot) && (i < high)) {
            i++;
        }

        while ((arr[j] > pivot) && (j > low)) {
            j--;
        }

        if (i < j) {
            swap(&arr[i], &arr[j]);
        } else {
            swap(&arr[low], &arr[j]);
        }
    }

    return j;
}
*/

void swap (int *ptr1, int *ptr2) {
    int c;
    c = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = c;
}
