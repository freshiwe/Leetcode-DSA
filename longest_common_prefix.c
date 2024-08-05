#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int i, j, k;
char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) return "";

    char* value = (char*)malloc((strlen(strs[0]) + 1) * sizeof(char));
    int index = 0;

    for (i = 0; i < strlen(strs[0]); i++) {
        char c = strs[0][i];
        for (j = 1; j < strsSize; j++) {
            if (i >= strlen(strs[j]) || strs[j][i] != c) {
                value[index] = '\0';
                return value;
            }
        }
        value[index++] = c;
    }

    value[index] = '\0';
    return value;
}

int main() {
    char *strs[] = {"flower", "flow", "flight"};
    int strsSize = sizeof(strs) / sizeof(strs[0]);
    char* prefix = longestCommonPrefix(strs, strsSize);
    printf("Longest Common Prefix: %s\n", prefix);
    free(prefix); // Free the allocated memory for the prefix
    return 0;
}
