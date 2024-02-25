#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char* generate_random_string(int length) {
    char* str = (char*)malloc((length + 1) * sizeof(char)); // Allocate memory for the string
    if (str == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }

    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"; // Characters to choose from
    int charset_size = sizeof(charset) - 1;

    srand(time(NULL)); // Seed for random number generator

    for (int i = 0; i < length; ++i) {
        int index = rand() % charset_size; // Generate random index within the charset
        str[i] = charset[index]; // Assign a random character from the charset to the string
    }
    str[length] = '\0'; // Null-terminate the string
    return str;
}