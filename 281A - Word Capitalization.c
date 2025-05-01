#include <stdio.h>
#include <ctype.h>  // For toupper()

int main() {
    char word[104]; // Maximum length is 103, plus 1 for null terminator

    // Read the word
    scanf("%s", word);

    // Capitalize the first letter if it's lowercase
    if (word[0] >= 'a' && word[0] <= 'z') {
        word[0] = toupper(word[0]);
    }

    // Print the result
    printf("%s\n", word);
    return 0;
}
