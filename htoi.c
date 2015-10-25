//
//  main.c
//  htoi
//
//  Created by 杨林青 on 15/10/25.
//  Copyright © 2015年 杨林青. All rights reserved.
//

#include <stdio.h>

int htoi(char *s){
    //将字符串中的16进制数转换为整型。调用sscanf函数
    int n;
    sscanf(s, "%x",&n);
    return n;
}
int main(int argc, const char * argv[]) {
    char buf[30];
    int answer;
    //每一行输入输出一行答案
    while(scanf("%s",buf)!=EOF){
        answer = htoi(buf);
        printf("%d\n",answer);
    }
    return 0;
}
