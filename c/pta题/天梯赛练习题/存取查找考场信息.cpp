#include <stdio.h>
typedef struct{
    long long num;
    int a;
    int b;
}student;


int main(){
    int N;
    int i,j;
    scanf("%d",&N);
    student stu[N];
    for(i=0;i<N;i++){
        scanf("%lld %d %d",&stu[i].num,&stu[i].a,&stu[i].b);
    }
    
    int m;
    scanf("%d",&m);
    int t[m];
    for(j=0;j<m;j++){
        scanf("%d",&t[j]);
    }
    
    for(j=0;j<m;j++){
        for(i=0;i<N;i++){
            if(stu[i].a==t[j]){
                printf("%lld %d\n",stu[i].num,stu[i].b);
                break; 
            }
        }
    }
    
    return 0;
}
