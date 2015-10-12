//
//  main.c
//  reverse
//
//  Created by 杨林青 on 15/10/12.
//  Copyright © 2015年 杨林青. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i;
    char c;
    char ch[100]={0};
    for (i=0; (c = getchar()) != '\n'; i++) {
        ch[i] = c;
    }
    for (i--; i>=0; i--) {
        putchar(ch[i]);
    }
    putchar('\n');
    return 0;
}
