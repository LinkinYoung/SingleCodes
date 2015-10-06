//
//  main.c
//  jj
//
//  Created by 杨林青 on 15/10/2.
//  Copyright © 2015年 杨林青. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    long n=0;
    int c;
    while ((c=getchar()) != EOF)
        //if (c == '\n') {
            n++;
        //}
    printf("%ld\n",n);
    return 0;
}
