#include <stdio.h>

int main(int argc, const char * argv[]) {
    char c;
    c=getchar();
    if (c == EOF) {
        printf("c is EOF\n");
    } else {
        printf("c != EOF\n");
    }
    while ((c=getchar())!=EOF) {
        putchar(c);
    }
    return 0;
}
