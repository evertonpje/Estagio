#include <stdio.h>
#include <string.h>

void count(const char *text) {
    int count = 0;

    // Iterate over each character in the string
    for (int i = 0; text[i] != '\0'; i++) {
        // Checks if the character is 'a' or 'A'
        if (text[i] == 'a' || text[i] == 'A') {
            count++;
        }
    }

    // Display the result
    if (count > 0) {
        printf("The letter 'a' appears %d times in the text.\n", count);
    } else {
        printf("The letter 'a' is not present in the text.\n");
    }
}

int main() {
    char text[100];

    // Ask the user to enter a string
    printf("Insert a Text: ");
    fgets(text, sizeof(text), stdin);


    // Remove newline character if present
    text[strcspn(text, "\n")] = '\0';

    // Call the function to count the letter 'a'
    count(text);

    return 0;
}