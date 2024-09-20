#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];


    printf("Enter the elements of the array (0 to %d): ", n - 1);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Duplicate elements are: ");

    for (int i = 0; i < n; i++) {

        int index = abs(arr[i]);


        if (arr[index] < 0) {
            printf("%d ", index);
        } else {

            arr[index] = -arr[index];
        }
    }

    printf("\n");
    return 0;
}
