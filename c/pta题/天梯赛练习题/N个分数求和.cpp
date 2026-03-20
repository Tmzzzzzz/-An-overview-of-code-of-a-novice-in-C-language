/*
本题的要求很简单，就是求N个数字的和。麻烦的是，这些数字是以有理数分子/分母的形式给出的，你输出的和也必须是有理数的形式。

输入格式：
输入第一行给出一个正整数N（≤100）。随后一行按格式a1/b1 a2/b2 ...给出N个有理数。题目保证所有分子和分母都在长整型范围内。另外，负数的符号一定出现在分子前面。

输出格式：
输出上述数字和的最简形式 —— 即将结果写成整数部分 分数部分，其中分数部分写成分子/分母，要求分子小于分母，且它们没有公因子。如果结果的整数部分为0，则只输出分数部分。
*/
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int son[100];
    int mom[100];
    int i;
    int sum_s=0;
    int sum_m=0;
    for(i=0;i<n;i++){
        scanf("%d/%d",&son[i],&mom[i]);
        if(i==0){
            sum_s=son[i];
            sum_m=mom[i];
        }else{
            sum_s=mom[i]*sum_s+son[i]*sum_m;
            sum_m=mom[i]*sum_m;  //获得分数和
        }
        
        int gcd;
        int s1=sum_s;
        int m1=sum_m;
        while(m1!=0){
            gcd=s1%m1;
            s1=m1;
            m1=gcd;
        }
        s1= s1<0 ? -s1 : s1;
        sum_s=sum_s/s1;
        sum_m=sum_m/s1;    //获得最大公约数并化简
    }

    if(sum_m<0){
        sum_s=-sum_s;
        sum_m=-sum_m;   //防止分母为负数
    }

    int num=sum_s/sum_m;
    sum_s=sum_s%sum_m;       //处理整数部分

    if(num==0){//处理整数为零的情况 
        if(sum_s==0){
            printf("0");
        }else{
            printf("%d/%d",sum_s,sum_m);
        }
    }else if(sum_s==0){
        printf("%d",num);
    }else{
        printf("%d %d/%d",num,sum_s,sum_m);
    }
    return 0;
}
