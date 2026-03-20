/*
本题要求你计算A?B。不过麻烦的是，A和B都是字符串 —— 即从字符串A中把字符串B所包含的字符全删掉，剩下的字符组成的就是字符串A-B。

输入格式：
输入在2行中先后给出字符串A和B。两字符串的长度都不超过10000，并且保证每个字符串都是由可见的ASCII码和空白字符组成，最后以换行符结束。

输出格式：
在一行中打印出A-B的结果字符串。
*/
#include <stdio.h>
#include <string.h>
int main(){
    char a[10005];
    char b[10005];
    fgets(a,sizeof(a),stdin);   //scanf无法输入带空格的字符串
    fgets(b,sizeof(b),stdin);
    int i,j;
    int del[256]={0};          //使用ascii码数组标记b中含有的字符，单纯使用三重循环会超时
    for(i=0;b[i]!='\0'&&b[i]!='\n';i++){
        del[(unsigned char)b[i]]=1;
    }
    for(i=0;a[i]!='\0'&&a[i]!='\n';i++){
        if(del[(unsigned char)a[i]]==0){
            putchar(a[i]);
        }
    }
    return 0;
}
