#include <stdio.h>
char* readexact(char* buff, int len) {
    // add 1 for null terminator
    return fgets(buff, len+1, stdin);
}

void main(int argc, char **argv, char **envp) {
    char test[10];
    printf("hello dees:\n");
    readexact(test, 6);
    printf("%s", test);
}