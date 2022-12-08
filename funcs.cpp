#include "calc.h"


int Calculate ()
{
    int val = GetExp ();
    if (*s != '\0') printf ("Compilation Error");
    return val;
}


int GetNum ()
{
    int val = 0;

    const char *old_s = s;
    while ('0' <= *s && *s <= '9')
    {
        val += val * 10 + *s - '0';
        s++;
    }
    if (s == old_s) printf ("Error: can't get a number.\n");

    return val;
}

int GetExp ()
{
    int val = GetProd ();

    while (*s == '+' || *s == '-')
    {
        char op = *s;
        s++;

        int val2 = GetProd ();

        if (op == '+') val += val2;
        if (op == '-') val -= val2;
    }
    return val;
}

int GetProd ()
{
    int val = GetBrackets ();

    while (*s == '*' || *s == '/')
    {
        char op = *s;
        s++;

        int val2 = GetBrackets ();

        if (op == '*') val *= val2;
        if (op == '/') val /= val2;
    }
    return val;
}

int GetBrackets ()
{
    int val = 0;
    if (*s == '(')
    {
        s++;
        val = GetExp ();
        if (*s != ')') printf ("Error: no closer bracket.\n");
        s++;
    }
    else val = GetNum ();
    return val;
}