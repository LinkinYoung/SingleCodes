//
//  main.c
//  any
//
//  Created by 杨林青 on 15/10/25.
//  Copyright © 2015年 杨林青. All rights reserved.
//

#include <stdio.h>

int any(char *s1,char *s2){
    //对s1中每个字符进行判断，for（j……）循环用于检查字符是否在s2中出现。
    int i,j;
    for (i=0; s1[i]!='\0'; i++) {
        for (j=0; s2[j]!='\0'; j++) {
            if (s1[i]==s2[j]) {
                return i+1;
            }
        }
    }
    return -1;
}
int main(int argc, const char * argv[]) {
    //对于s2:空格算不算字符？标点呢？区分大小写么？
    return 0;
}
