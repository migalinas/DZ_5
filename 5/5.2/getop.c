#include <stdio.h>
#include <ctype.h>


#define NUMBER '0'

int getop(char s[]) {
    int i, c;

    while ((c = getchar()) == ' ' || c == '\t')
        ;

    s[0] = c;
    s[1] = '\0';

    if (!isdigit(c) && c != '.' && c != '-' && c != 's' && c != 'c')
        return c;

    i = 0;
    if (c == '-') {
        if (isdigit(c = getchar()) || c == '.')
            s[++i] = c;
        else {
            if (c != EOF)
                ungetc(c, stdin);
            return '-';
        }
    }

    if (c == 's' || c == 'c') {
        c = getchar();
        if (c == 'i' || c == 'o')
            s[++i] = c;
        else {
            if (c != EOF)
                ungetc(c, stdin);
            return s[0];
        }
    }

    if (isdigit(c))
        while (isdigit(s[++i] = c = getchar()));
    if (c == '.')
        while (isdigit(s[++i] = c = getchar()));
    s[i] = '\0';
    if (c != EOF)
        ungetc(c, stdin);

    return NUMBER;
}