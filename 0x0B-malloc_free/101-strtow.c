int get_word_length(char *str)
{
int i, length = 0;
for (i = 0; str[i] && str[i] != ' '; i++)
length++;
return (length);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: If str is NULL or empty, or if memory allocation fails, return NULL.
 * Otherwise, return a pointer to an array of each word in str.
 * Each element of the array is null-terminated, and the last element is NULL.
 */
char **strtow(char *str)
{
char **words;
int i, j, k, num_words, word_len;
if (str == NULL || *str == '\0')
return (NULL);
num_words = count_words(str);
if (num_words == 0)
return (NULL);
words = malloc((num_words + 1) * sizeof(char *));
if (words == NULL)
return (NULL);
for (i = 0, j = 0; j < num_words; i++)
{
if (str[i] != ' ')
{
word_len = get_word_length(&str[i]);
words[j] = malloc((word_len + 1) * sizeof(char));
if (words[j] == NULL)
{
for (k = 0; k < j; k++)
free(words[k]);
free(words);
return (NULL);
}
for (k = 0; k < word_len; k++)
words[j][k] = str[i + k];
words[j][k] = '\0';
j++;
i += word_len;
}
}
words[num_words] = NULL;
return (words);
}
