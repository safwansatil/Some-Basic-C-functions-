#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LINE 1000
#define MAX_WORDS 100
#define MAX_WORD_LEN 100

int main()
{
    char line[MAX_LINE];
    char target[MAX_WORD_LEN];
    char words[MAX_WORDS][MAX_WORD_LEN];
    int wordCount = 0, count = 0;

    printf("Enter a line: ");
    gets(line); // Again, use only in controlled/learning environment

    printf("Enter the word to search for: ");
    gets(target);

    // Manual word parsing
    int i = 0, j = 0, k = 0;
    while (line[i] != '\0')
    {
        if (line[i] != ' ' && line[i] != '\t')
        {
            words[wordCount][j++] = line[i];
        }
        else if (j > 0)
        {
            words[wordCount][j] = '\0';
            wordCount++;
            j = 0;
        }
        i++;
    }
    if (j > 0)
    { // Capture the last word
        words[wordCount][j] = '\0';
        wordCount++;
    }

    // Compare and count
    printf("'%s' found at positions: ", target);
    for (k = 0; k < wordCount; k++)
    {
        if (strcmp(words[k], target) == 0)
        {
            printf("%d ", k);
            count++;
        }
    }

    printf("\nTotal occurrences of '%s': %d\n", target, count);

    return 0;
}
