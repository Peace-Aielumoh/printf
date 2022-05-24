#include "main.h"

/**
 * get_flag - turn on flags if _printf finds
 * a flag modifier in the format string
 * @s: character that holds the flag specifier
 * @f: pointer to the struct flags in which we turn on flag
 *
 * Return: 1 if a flag has been turned on, else 0
 */
int get_flag(char s, flags_t *f)
{
    int i = 0;

    switch (s)
    {
    case '+':
        f->plus = 1;
        i = 1;
        break;
    case ' ':
        f->space = 1;
        i = 1;
        break;
    case '#':
        f->hash = 1;
        i = 1;
        break;
    }

    return (i);
}
