#include <stdio.h>

int main() {
    int n;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    int arr[n - 1];


    printf("Enter the elements of the array (1 to %d): ", n);
    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
    }


    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;


    for (int i = 0; i < n - 1; i++) {
        actualSum += arr[i];
    }


    int missingNumber = expectedSum - actualSum;

    printf("The missing number is: %d\n", missingNumber);

    return 0;
}
