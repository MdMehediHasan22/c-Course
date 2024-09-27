#include <stdio.h>
#include <string.h> 

void remove_spaces(char *str) {
    int i = 0, j = 0;
    while (str[i]) {
        if (str[i] != ' ') {
            str[j++] = str[i];
        }
        i++;
    }
    str[j] = '\0'; // Null-terminate the modified string
}

int main() {
    char input_str[100];

    printf("Enter a string: ");
    fgets(input_str, sizeof(input_str), stdin);

    // Remove newline character from the string, if present
    size_t len = strlen(input_str);
    if (len > 0 && input_str[len - 1] == '\n') {
        input_str[len - 1] = '\0';
    }

    remove_spaces(input_str);

    printf("String without spaces: %s\n", input_str);

    return 0;
}
