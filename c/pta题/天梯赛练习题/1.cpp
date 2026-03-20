#include <stdio.h>
#include <stdlib.h>
#define min(a,b) ((a)>(b)?(b):(a))
int main(){
    int n,n0,n1;
    scanf("%d %d %d",&n0,&n1,&n);
    int pass=0;
    int ave_girl=n0;
    int ave_boy=n1;
    int girl=1;
    int boy=1;
    int x=min(n0,n1);
    int dif=abs(n0-n1);
    int temp0=n0;
    int temp1=n1;
    int i;
    for(i=x;i>1;i--){
        if(n0%i==0){
            temp0=i;
        }
        if(n1%i==0){
            temp1=i;
        }
        if(abs(temp1-temp0)<dif){
            if(n0/temp0+n1/temp1<=n){
                dif=abs(temp1-temp0);
                ave_girl=temp0;
                ave_boy=temp1;
                pass=1;
                girl=n0/temp0;
                boy=n1/temp1;
            }
        }
    }
    if(!pass){
        printf("No Solution");
    }else{
        printf("%d %d",girl,boy);
    }
    
    return 0;
}
