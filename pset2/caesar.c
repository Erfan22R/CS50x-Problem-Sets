#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    int n = strlen(argv[1]);
    for (int i = 0; i < n; i++)
    {
        if (isalpha(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
    int key = atoi(argv[1]);
    string plain = get_string("plaintext: ");
    int m = strlen(plain);
    char b;
    printf("ciphertext: ");
    for (int i = 0; i < m; i++)
    {
        int a = plain[i];
        if (isalpha(a))
        {
            if (isupper(a))
            {
                b = ((a - 'A' + key) % 26) + 'A';
            }
            if (islower(a))
            {
                b = ((a - 'a' + key) % 26) + 'a';
            }
        }
        else
        {
            b = a;
        }
        printf("%c", b);
    }
    printf("\n");
    return 0;
}
