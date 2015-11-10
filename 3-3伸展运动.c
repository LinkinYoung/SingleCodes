//
//  main.c
//  3-3伸展运动
//
//  Created by 杨林青 on 15/11/10.
//  Copyright © 2015年 杨林青. All rights reserved.
//

#include <stdio.h>

int Stack[3]={0};
int Size_of_Stack=0;                            //栈的大小，等同于标记栈的'\0'位

void Push_Stack(char ch){
    Stack[Size_of_Stack] = ch;
    Size_of_Stack++;
}
void Print_Stack(int n){
    int i;
    for (i=0; i<n; i++) {
        putchar(Stack[i]);
    }
}
void Move_Stack(int n){
    Stack[0] = Stack[n];
    Size_of_Stack -= n;
}
int Continum(){
    if (Stack[0]>='0' && Stack[0]<='9') {
        if (Stack[2]>='0' && Stack[2]<='9') {
            return Stack[2] - Stack[0];
        }
    } else if (Stack[0]>='a' && Stack[0]<='z'){
        if (Stack[2]>='a' && Stack[2]<='z') {
            return Stack[2] - Stack[0];
        }
    } else if (Stack[0]>='A' && Stack[0]<='Z'){
        if (Stack[2]>='A' && Stack[2]<='Z') {
            return Stack[2] - Stack[0];
        }
    }
    return -1;
}

int main(int argc, const char * argv[]) {
    char buff[1000];
    int i;
    char j;
    while (fgets(buff, 1000, stdin) != NULL) {
        for (i=0; buff[i]!='\0'; i++) {
            if (buff[i] != '-') {
                if (Size_of_Stack == 0) {
                    Push_Stack(buff[i]);
                } else if (Size_of_Stack == 2) {
                    Push_Stack(buff[i]);
                    if (Continum() < 0) {
                        Print_Stack(2);
                        Move_Stack(2);
                    } else if (Continum()>0) {
                        for (j=Stack[0]; j<Stack[2]; j++) {
                            putchar(j);
                        }
                        Move_Stack(2);
                    } else {
                        Print_Stack(1);
                        Move_Stack(2);
                    }
                } else if (Size_of_Stack == 1) {
                    Push_Stack(buff[i]);
                    Print_Stack(1);
                    Move_Stack(1);
                }
            } else {
                if (Size_of_Stack == 0) {
                    putchar('-');
                } else {
                    Push_Stack(buff[i]);
                }
            }
        }
        if (Size_of_Stack != 0) {
            Print_Stack(Size_of_Stack);             //每一行的'\0'注定会压入栈，这时候会被打印
            Size_of_Stack = 0;
        }
    }
    return 0;
}
