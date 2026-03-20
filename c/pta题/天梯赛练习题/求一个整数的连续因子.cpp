/*
一个正整数 N 的因子中可能存在若干连续的数字。例如 630 可以分解为 3×5×6×7，其中 5、6、7 就是 3 个连续的数字。给定任一正整数 N，要求编写程序求出最长连续因子的个数，并输出最小的连续因子序列。

输入格式：
输入在一行中给出一个正整数 N（1<N<2的31次方）。

输出格式：
首先在第 1 行输出最长连续因子的个数；然后在第 2 行中按 因子1*因子2*……*因子k 的格式输出最小的连续因子序列，其中因子按递增顺序输出，1 不算在内。
*/
#include <stdio.h>
#include <math.h>
int main(){
    int N;
    scanf("%d",&N);
    int i,j;
    int cnt=0;
    int save=0;
    for(i=2;i<sqrt(N);i++){
        int cnt1=0;
        int save1=0;
        long long k=1;
        for(j=i;j<N;j++){
            k*=j;
            if(k>N||N%k!=0){
                break;
            }
            if(N%k==0){
                cnt1++;
                save1=i;
            }
        }
        if (cnt1>cnt){
            cnt=cnt1;
            save=save1;
        }
    }

    if(cnt==0){
        printf("1\n%d",N);
        return 0;   //处理质数
    }

    printf("%d\n",cnt);
    for(i=0;i<cnt;i++){
        printf("%d",save+i);
        if(i!=cnt-1){
            printf("*");
        }
    }
    return 0;
}
