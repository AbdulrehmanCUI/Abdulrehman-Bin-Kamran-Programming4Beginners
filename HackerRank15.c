#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[1000];
    int digit_counts[10] = {0};
    int i = 0;
    int j = 0;
    if (fgets(s, sizeof(s), stdin) == NULL) {
        return 1;
    }

    s[strcspn(s, "\n")] = 0; 

    for (i = 0; s[i] != '\0'; i++) {
        char current_char = s[i];

        if (isdigit(current_char)) {
            int digit_value = current_char - '0';

            if (digit_value >= 0 && digit_value <= 9) {
                digit_counts[digit_value]++;
            }
        }
    }

    for (j = 0; j < 10; j++) {
        printf("%d", digit_counts[j]);
        if (j < 9) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
