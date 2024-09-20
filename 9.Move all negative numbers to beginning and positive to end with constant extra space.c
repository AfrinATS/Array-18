#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int left = 0;


    for (int right = 0; right < n; right++) {
        if (arr[right] < 0) {

            if (left != right) {
                int temp = arr[left];
                arr[left] = arr[right];
                arr[right] = temp;
            }
            left++;
        }
    }

    printf("Rearranged array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

