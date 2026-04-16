#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5, i, key = 30;

    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            printf("Element found at position %d", i+1);
            return 0;
        }
    }
    printf("Element not found");
    return 0;
}
