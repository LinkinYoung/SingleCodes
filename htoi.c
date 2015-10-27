//
//  main.c
//  htoi
//
//  Created by 杨林青 on 15/10/25.
//  Copyright © 2015年 杨林青. All rights reserved.
//

#include <stdio.h>

int numof(char c){
    //用这个函数求字母代表的数字
    if (c <='9') {
        return c-'0';
    } else if (c > 'Z'){
        return c-'a'+10;
    }else {
        return c-'A'+10;
    }
}
int htoi(char *s){
    //从后往前扫描，遇到x或者i<0停止
    int n=0,i,j=0;
    for (i=0; s[i]!='\0'; i++);
    for (i--; (i>=0) && (s[i]!='x') && (s[i]!='X'); i--) {
        n+=numof(s[i])*(1<<(4*j));//用左移进行乘方运算
        j++;
    }
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
