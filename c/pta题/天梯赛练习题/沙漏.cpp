#include <stdio.h>
int main()
{
    int n,i;
    char s;
    scanf("%d %c",&n,&s);
    int count=0;
    int num=(n-1)/2;
    int sum=0;
    while(num>0){
        if(num-3-2*count>0)
        {
            count++;
            num=num-(1+2*count);
            sum+=1+2*count;
        }else{
            break;
        } 
    }
    sum=sum*2+1;
    int remain=n-sum;
    
    int space=0;
    int cycle=count;    
    while(cycle>0){
        for(i=0;i<space;i++){
            printf(" ");
        }
        for(i=0;i<cycle*2+1;i++){
            printf("%c",s);
        }
        space++;
        cycle--;
        printf("\n");
    }
    
    for(i=0;i<space;i++){
        printf(" ");
        }
    printf("%c",s);
    printf("\n");
    space--;

    cycle=1;
    while(cycle<=count){
        for(i=0;i<space;i++){
            printf(" ");
        }
        for(i=0;i<cycle*2+1;i++){
            printf("%c",s);
        }
        space--;
        cycle++;
        printf("\n");
    }
    printf("%d",remain);
    
    return 0;
}
