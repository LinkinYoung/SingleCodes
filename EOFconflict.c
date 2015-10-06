//
//  main.c
//  jj
//
//  Created by 杨林青 on 15/10/2.
//  Copyright © 2015年 杨林青. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char c=-1;
    if (c == EOF) {
        printf("%c is EOF\n",c);
    } else {
        printf("%c != EOF\n",c);
    }
    return 0;
}
