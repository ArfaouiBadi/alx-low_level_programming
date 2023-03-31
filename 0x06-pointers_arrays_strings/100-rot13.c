#include <main.h>
/**
 * rot13 - Encode a string using ROT13 cipher
 *
 * @s: the string to encode
 *
 * Return: a pointer to the encoded string
 */
char *rot13(char *s)
{
    int i, j;
    char *res = s;

    for (i = 0; s[i]; i++)
    {
        if ((s[i] >= 'A' && s[i] <= 'M') || (s[i] >= 'a' && s[i] <= 'm'))
        {
            for (j = 0; j < 13; j++)
            {
                res[i]++;
                if (res[i] == 'n')
                    break;
            }
        }
        else if ((s[i] >= 'N' && s[i] <= 'Z') || (s[i] >= 'n' && s[i] <= 'z'))
        {
            for (j = 0; j < 13; j++)
            {
                res[i]++;
            if (res[i] == ('z' + 1))
                    res[i] = 'a';
            else if (res[i] == ('Z' + 1))
                    res[i] = 'A';
            }
        }
    }

    return (res);
}
