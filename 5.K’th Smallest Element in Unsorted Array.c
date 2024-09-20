#include <stdio.h>

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {

        if (arr[j] <= pivot) {
            i++;

            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return i + 1;
}

int quickSelect(int arr[], int low, int high, int k) {
    if (low <= high) {
        int partitionIndex = partition(arr, low, high);


        if (partitionIndex == k) {
            return arr[partitionIndex];
        }

        else if (k < partitionIndex) {
            return quickSelect(arr, low, partitionIndex - 1, k);
        }

        else {
            return quickSelect(arr, partitionIndex + 1, high, k);
        }
    }
    return -1;
}

int main() {
    int n, k;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of K: ");
    scanf("%d", &k);


    if (k > n || k <= 0) {
        printf("Invalid input: K should be between 1 and %d.\n", n);
        return 1;
    }


    int kthSmallest = quickSelect(arr, 0, n - 1, k - 1);

    printf("The %d'th smallest element is %d\n", k, kthSmallest);

    return 0;
}

