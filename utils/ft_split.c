#include "../push_swap.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *substr;
    size_t size;
    size_t i;

    if (!s)
        return (0);
    if (ft_strlen(s) < len)
        len = ft_strlen(s);
    size = len;
    substr = malloc(sizeof(char) * (size + 1));
    if (substr == NULL)
        return (NULL);
    if (start > ft_strlen(s))
    {
        *substr = '\0';
        return (substr);
    }
    i = 0;
    while (i < len)
    {
        *(substr + i) = (*(s + start + i));
        i++;
    }
    *(substr + i) = '\0';
    return (substr);
}

static size_t wordlen(char const *s, char c)
{
    size_t index;

    index = 0;
    while (*s)
    {
        index++;
        while (*s && *s == c)
            s++;
        if (*s == '\0')
            index--;
        while (*s && *s != c)
            s++;
    }
    return (index);
}

static char **fill_string(char **store, char const *s, char c)
{
    size_t len;
    size_t i;

    i = 0;
    while (*s)
    {
        if (*s != c)
        {
            len = 0;
            while (*s && *s != c)
            {
                len++;
                s++;
            }
            store[i++] = ft_substr(s - len, 0, len);
        }
        else
            s++;
    }
    store[i] = 0;
    return (store);
}

char **ft_split(char const *s, char c)
{
    char **split_string;
    size_t len_words;

    if (!s)
        return (NULL);
    len_words = wordlen(s, c);
    split_string = malloc(sizeof(char *) * (len_words + 1));
    if (!split_string)
        return (NULL);
    split_string = fill_string(split_string, s, c);
    return (split_string);
}