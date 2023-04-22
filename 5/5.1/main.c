#include <stdio.h>
#include "firstcharpos.h"

int main() {
    char s1[100], s2[100];
    printf("Enter string 1: ");
    scanf("%s", s1);
    printf("Enter string 2: ");
    scanf("%s", s2);
    int pos = findFirstCharPos(s1, s2);
    if(pos == -1) {
        printf("Character not found. %d", pos);
    } else {
        printf("Position of first character found: %d\n", pos);
    }
    return 0;
}
