#include <stdio.h>
#include <include/libhttp.h>

char* readexact(size_t len) {
    char *buff = malloc(len + 1);
    if (!buff) return NULL;

    if (fgets(buff, len + 1, stdin) == NULL) {
        free(buff);
        return NULL;
    }

    return buff;
}

void main(int argc, char **argv, char **envp) {
    char* test;
    int fd;
    printf("hello dees:\n");
    test = readexact(5);
    printf("%s: wow", test);
}