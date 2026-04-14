#include <stdio.h>
#include <string.h>

// Function to print combinations
void combination(char str[], int index, char result[], int i)
{
    if(str[i] == '\0')
    {
        result[index] = '\0';

        if(index != 0)
            printf("%s\n", result);

        return;
    }

    // Include current character
    result[index] = str[i];
    combination(str, index + 1, result, i + 1);

    // Exclude current character
    combination(str, index, result, i + 1);
}

int main()
{
    char str[100], result[100];

    printf("Enter a string: ");
    scanf("%s", str);

    printf("String combinations are:\n");

    combination(str, 0, result, 0);

    return 0;
}
