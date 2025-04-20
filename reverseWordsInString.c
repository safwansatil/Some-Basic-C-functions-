#include <stdio.h>
#include <string.h>

int main() {
    char sentence[1000];
    char words[100][100]; // 100 words max, each up to 99 characters
    int i = 0, j = 0, k = 0;

    printf("Enter a sentence:\n");
    gets(sentence); // Unsafe, but using as requested

    // Split sentence into words manually
    while (sentence[i] != '\0') {
        if (sentence[i] != ' ') {
            words[k][j++] = sentence[i];
        } else {
            words[k][j] = '\0'; // End current word
            k++;                // Move to next word
            j = 0;              // Reset index for new word
        }
        i++;
    }
    words[k][j] = '\0'; // End last word
    int totalWords = k + 1;

    // Print words in reverse order
    printf("Reversed sentence:\n");
    for (int x = totalWords - 1; x >= 0; x--) {
        printf("%s", words[x]);
        if (x > 0)
            printf(" ");
    }
    printf("\n");

    return 0;
}