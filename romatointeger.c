#include <stdio.h>

int romanToInt(char* s) {
    int sum = 0; // Initialize sum inside the function
    int romanNumerals[256] = {0}; // Initialize an array to store Roman numeral values

    // Assign values to Roman numerals
    romanNumerals['I'] = 1;
    romanNumerals['V'] = 5;
    romanNumerals['X'] = 10;
    romanNumerals['L'] = 50;
    romanNumerals['C'] = 100;
    romanNumerals['D'] = 500;
    romanNumerals['M'] = 1000;

    for (int i = 0; s[i] != '\0'; i++) {
        // Check for subtractive combinations and adjust the sum accordingly
        if (s[i] == 'I' && (s[i+1] == 'V' || s[i+1] == 'X')) {
            sum -= 1;
        } else if (s[i] == 'X' && (s[i+1] == 'L' || s[i+1] == 'C')) {
            sum -= 10;
        } else if (s[i] == 'C' && (s[i+1] == 'D' || s[i+1] == 'M')) {
            sum -= 100;
        } else {
            sum += romanNumerals[(int)s[i]];
        }
    }

    return sum;
}

int main() {
    char str[] = "LXI";
    int result = romanToInt(str);
    printf("The integer value is: %d\n", result);

    return 0;
}
