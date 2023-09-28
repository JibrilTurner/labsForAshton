// Do Not Touch // Do Not Touch // Do Not Touch // Do Not Touch // Do Not Touch // Do Not Touch // Do Not Touch
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isString(const char *str) {
    return (str != NULL && str[0] != '\0');
}

void testQuiz1_2() {
    char *word = quiz1_2();

    if (isString(word)) {
        printf("%s \nPassed\n", word);
    } else {
        printf("%s \nFailed\n", word);
    }
}

// Do Not Touch // Do Not Touch // Do Not Touch // Do Not Touch // Do Not Touch // Do Not Touch // Do Not Touch

void testQuiz1_2() {
    char *word = quiz1_2();

    if (isString(word)) {
        printf("%s \nPassed\n", word);
    } else {
        printf("%s \nFailed\n", word);
    }
}

char *quiz1_2() {
    static char string[25]; // Assuming a maximum string length of 24 characters
    printf("Enter a word: ");
    scanf("%s", string);
    return string;
}

int main() {
    testQuiz1_2();
    return 0;
}

/*
g++ OneOfTwo.cpp -o OneOfTw
./OneOfTwo
*/

char *quiz1_2() {
    static char string[25]; // Assuming a maximum string length of 24 characters
    printf("Enter a word: ");
    scanf("%s", string);
    return string;
}

int main() {
    testQuiz1_2();
    return 0;
}

/*
g++ OneOfTwo.cpp -o OneOfTw
./OneOfTwo
*/
