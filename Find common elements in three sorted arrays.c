#include <stdio.h>

int main() {
    int n1, n2, n3;


    printf("Enter the size of the first array: ");
    scanf("%d", &n1);
    int A[n1];

    printf("Enter the elements of the first sorted array: ");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &A[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &n2);
    int B[n2];

    printf("Enter the elements of the second sorted array: ");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &B[i]);
    }

    printf("Enter the size of the third array: ");
    scanf("%d", &n3);
    int C[n3];

    printf("Enter the elements of the third sorted array: ");
    for (int i = 0; i < n3; i++) {
        scanf("%d", &C[i]);
    }

    int i = 0, j = 0, k = 0;

    printf("Common elements: ");
    while (i < n1 && j < n2 && k < n3) {
        if (A[i] == B[j] && B[j] == C[k]) {
            printf("%d ", A[i]);
            i++;
            j++;
            k++;
        } else if (A[i] < B[j]) {
            i++;
        } else if (B[j] < C[k]) {
            j++;
        } else {
            k++;
        }
    }
    printf("\n");

    return 0;
}

