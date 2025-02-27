// 12S24016 - Boy Harendy Simamora
// 12S24048 - Olivia Tambunan

#include <stdio.h>
#include <string.h>

int main(int _argv, char **_argc) {
    char input[100];
    
    fgets(input, sizeof(input), stdin);


    input[strcspn(input, "\n")] = '\0';

    for (int i = 0; i < strlen(input); i++) {
        printf("%03d", (int)input[i]);
    }
    
    printf("\n");

    return 0;
  } 