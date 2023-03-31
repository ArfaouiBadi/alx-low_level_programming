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
        for (j = 0; (j < 13) && s[i]; j++)
        {
            if ((s[i] >= 'a' && s[i] < 'n') || (s[i] >= 'A' && s[i] < 'N'))
                res[i] = s[i] + 13;
            else if ((s[i] >= 'n' && s[i] <= 'z') || (s[i] >= 'N' && s[i] <= 'Z'))
                res[i] = s[i] - 13;
            i++;
        }
        i--;
    }

    return (res);
}
