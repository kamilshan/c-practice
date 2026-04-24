#include <stdio.h>
#include <stdlib.h>

int main() {
    int n ,i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    char *ptr = (char *)malloc(n *sizeof(*char));
    if (ptr==NULL) {
        printf("memory not allocated"):
        exit(1);
    }
    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf(" %c", &ptr[i]);
    }
    printf("The elements are: ");
    for (i = 0; i < n; i++) {
        printf("%c ", ptr[i]);
    }
    
    free(ptr);
    return 0;

}
