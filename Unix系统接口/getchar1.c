#include <stdio.h>
#include "unistd.h"
int getchar1(void){
    char c;
    return (read(0,&c,1) == 1) ? (unsigned char) c : EOF;
}
int main(){
    int n=0;
    while (getchar1() != EOF) {
        n++;
    }
    printf("%d\n",n);
    return 0;
}