#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    if (n > 26) {
        printf("Please enter n ≤ 26\n");
        return 0;
    }

    for (int i = 0; i < n; i++) {
        printf("%c ", 'A' + i); 
    }
    printf("\n");

    return 0;
}
