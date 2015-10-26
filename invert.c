//
//  main.c
//  invert
//
//  Created by 杨林青 on 15/10/25.
//  Copyright © 2015年 杨林青. All rights reserved.
//

#include <stdio.h>
int invert( int x,int p,int n){
    return (~((~0) << n)) << (p-1) ^ x;
}
int main(int argc, const char * argv[]) {
    int x;
    int p,n;
    while (scanf("%x%d%d",&x,&p,&n)!=EOF) {
        x = invert(x,p,n);
        printf("%d\n",x);
    }
    return 0;
}
