#include "calc.h"

const char *s = nullptr;

int main (int argc, char *argv[])
{
    if (argc < 1) return 1;

    FILE *file = fopen (argv [1], "r");
    if (file == nullptr) return 2;

    char str [BUFSIZE] = "";

    fgets (str, BUFSIZE, file);

    fclose (file);

    s = str;

    int val = Calculate ();

    printf ("%d", val);

    return 0;
}