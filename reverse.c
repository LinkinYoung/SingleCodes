//
//  main.c
//  reverse
//
//  Created by 杨林青 on 15/10/12.
//  Copyright © 2015年 杨林青. All rights reserved.
//

#include <stdio.h>

void reverse(char *s,int length){
    int i,j=0;
    char temp[100]={0};
    for (i=0; i<length; i++) {
        temp[i] = s[i];
    }
    for (i=length-1; i>=0; i--) {
        s[i] = temp[j];
        j++;
    }
}

int main(int argc, const char * argv[]) {
    int i,num;
    char c;
    char ch[100]={0};
    for (i=0; (c = getchar()) != '\n'; i++) {
        ch[i] = c;
    }
    num = i;
    reverse(ch, num);
    for (i=0; i<num; i++) {
        putchar(ch[i]);
    }
    putchar('\n');
    return 0;
}
