#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *ptr;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Initial allocation
    ptr = (int*)calloc(n, sizeof(int));
    if (ptr == NULL) {
        printf("Memory not allocated\n");
        exit(1);
    }

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) { // Changed i <= n to i < n
        scanf("%d", &ptr[i]);
    }

    // Reallocation to double the size
    int *temp = (int*)realloc(ptr, 2 * n * sizeof(int));
    if (temp == NULL) { // Check the new temp pointer
        printf("Reallocation failed\n");
        free(ptr); // Clean up original memory before exiting
        exit(1);
    }
    ptr = temp;

    printf("Enter the remaining %d elements: ", n);
    for (i = n; i < 2 * n; i++) { // Start at index n
        scanf("%d", &ptr[i]);
    }

    printf("\nAll elements are: ");
    for (i = 0; i < 2 * n; i++) {
        printf("%d ", ptr[i]);
    }

    free(ptr);
    return 0;
}
