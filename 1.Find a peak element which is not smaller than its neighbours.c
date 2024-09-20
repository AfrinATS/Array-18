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


    if (n == 1) {
        printf("Peak element is %d\n", arr[0]);
        return 0;
    }


    if (arr[0] >= arr[1]) {
        printf("Peak element is %d\n", arr[0]);
        return 0;
    }


    if (arr[n - 1] >= arr[n - 2]) {
        printf("Peak element is %d\n", arr[n - 1]);
        return 0;
    }


    for (int i = 1; i < n - 1; i++) {
        if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1]) {
            printf("Peak element is %d\n", arr[i]);
            return 0;
        }
    }

    return 0;
}

