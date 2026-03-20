#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum=0;
    int temp=1;
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            temp*=j;
        }
        sum+=temp;
    }
    if(n==1){
        sum=1;
    }
    printf("%d",sum);
    return 0;
}
