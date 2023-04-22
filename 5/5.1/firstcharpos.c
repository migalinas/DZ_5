#include <string.h>

int findFirstCharPos(char s1[], char s2[]) {
    for (int i=0; i<strlen(s1); i++) {
        for(int j=0; j<strlen(s2); j++) {
            if (s2[j] == s1[i]) {
                return i;
            }
        }
    }
    return -1;
}