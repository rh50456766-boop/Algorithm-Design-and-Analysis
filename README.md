#include <stdio.h>

int main() {
    int numbers[100], size, target, i;

    printf("Enter number of elements: ");
    scanf("%d", &size);

    printf("Enter elements:\n");
    for(i = 0; i < size; i++) {
        scanf("%d", &numbers[i]);
    }

    printf("Enter value to search: ");
    scanf("%d", &target);

    for(i = 0; i < size; i++) {
        if(numbers[i] == target) {
            printf("Found at position %d", i + 1);
            return 0;
        }
    }

    printf("Not found");
    return 0;
}
