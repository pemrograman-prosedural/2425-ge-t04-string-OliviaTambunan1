// 12S24016 - Boy Harendy Simamora
// 12S24048 - Olivia Tambunan

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int _argv, char **_argc) {
  char input[100];
    char output[100];
    int range, index = 0, j = 0;

    scanf("%s", input);

    range = strlen(input);


    while (index < range) {
        char temp[4] = {0};
        strncpy(temp, input + index, 3);
        int ascii = atoi(temp);
        output[j++] = (char)ascii;
        index += 3;
    }
    output[j] = '\0';

    printf("%s\n", output);


  return 0;
}
