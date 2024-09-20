#include <stdio.h>

int main() {
    int n;


    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    int count[1000] = {0};


    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        count[arr[i] + 500]++;
    }


    for (int i = 0; i < n; i++) {
        if (count[arr[i] + 500] > 1) {
            printf("First repeating element is: %d\n", arr[i]);
            return 0;
        }
    }


    printf("No repeating element found.\n");
    return 0;
}

