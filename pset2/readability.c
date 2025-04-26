#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{
    string text = get_string("Text: ");

    float letters = count_letters(text);
    float words = count_words(text);
    float sentences = count_sentences(text);

    float L = 100 * (letters / words);
    float S = 100 * (sentences / words);
    int index = round(0.0588 * L - 0.296 * S - 15.8);

    if (index > 16)
    {
        printf("Grade 16+\n");
    }
    else if (index <= 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }
}

int count_letters(string text)
{
    float l = 0;
    int n = strlen(text);
    for (int i = 0; i < n; i++)
    {
        if (isalpha(text[i]) != 0)
        {
            l++;
        }
    }
    return l;
}

int count_words(string text)
{
    float w = 1;
    int n = strlen(text);
    for (int i = 0; i < n; i++)
    {
        if (text[i] == 32)
        {
            w++;
        }
    }
    return w;
}

int count_sentences(string text)
{
    float s = 0;
    int n = strlen(text);
    for (int i = 0; i < n; i++)
    {
        if (text[i] == 46 || text[i] == 33 || text[i] == 63)
        {
            s++;
        }
    }
    return s;
}
