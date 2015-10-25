//
//  main.c
//  invert
//
//  Created by 杨林青 on 15/10/25.
//  Copyright © 2015年 杨林青. All rights reserved.
//

#include <stdio.h>

long invert(unsigned long x,int p,int n){
    return (((~(x >> p)) << (64-n)) >> (64-n-p)) | (x << (64-p) >> (64-p)) | (x >> (p+n) << (p+n));
}
int main(int argc, const char * argv[]) {
    unsigned long x;
    int p,n;
    while (scanf("%lx%d%d",&x,&p,&n)!=EOF) {
        x = invert(x,p,n);
        printf("%ld\n",x);
    }
    return 0;
}
