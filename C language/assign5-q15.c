#include <stdio.h>

int main() {
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        char ch = 'A'; 
        for (int j = 0; j < 2 * n - 1; j++) {
            if (j >= (n - 1 - i) && j <= (n - 1 + i) && (j - (n - 1 - i)) % 2 == 0) {
                printf("%c", ch);
                ch++;
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
