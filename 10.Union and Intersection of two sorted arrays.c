#include <stdio.h>

int main() {
    int n1, n2;


    printf("Enter the size of the first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter the elements of the first sorted array: ");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }


    printf("Enter the size of the second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter the elements of the second sorted array: ");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }


    int unionArr[n1 + n2];
    int intersectionArr[n1 < n2 ? n1 : n2];

    int i = 0, j = 0, unionIndex = 0, intersectionIndex = 0;


    while (i < n1 || j < n2) {
        if (i < n1 && (j >= n2 || arr1[i] < arr2[j])) {
            unionArr[unionIndex++] = arr1[i++];
        } else if (j < n2 && (i >= n1 || arr1[i] > arr2[j])) {
            unionArr[unionIndex++] = arr2[j++];
        } else {
            unionArr[unionIndex++] = arr1[i];
            intersectionArr[intersectionIndex++] = arr1[i++];
            j++;
        }
    }


    printf("Union: ");
    for (int k = 0; k < unionIndex; k++) {
        printf("%d ", unionArr[k]);
    }
    printf("\n");


    printf("Intersection: ");
    for (int k = 0; k < intersectionIndex; k++) {
        printf("%d ", intersectionArr[k]);
    }
    printf("\n");

    return 0;
}

