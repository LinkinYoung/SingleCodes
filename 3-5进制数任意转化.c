//
//  main.c
//  3-5进制任意转换
//
//  Created by 杨林青 on 15/11/11.
//  Copyright © 2015年 杨林青. All rights reserved.
//

#include <stdio.h>

void convert(int *result,long num,int B){
    int buf[100]={0},i,j=0;
    for (i=0; num > 0; num = num / B) {
        buf[i++] = num % B;
    }
    for (i--; i>=0; i--) {
        result[j++]=buf[i];
    }
    result[j] = 50;
}
void print(int *result){
    int i;
    for (i=0; result[i] < 50; i++) {
        if (result[i] < 10) {
            printf("%d",result[i]);
        } else {
            printf("%c",result[i] - 10 + 'A');
        }
    }
    putchar('\n');
}
int main(int argc, const char * argv[]) {
    long num=0;
    int b=0,result[100];
    while (scanf("%ld%d",&num,&b) != EOF) {
        if (num < 0) {
            putchar('-');
            num = -num;
        }
        convert(result, num, b);
        print(result);
    }
    return 0;
}
