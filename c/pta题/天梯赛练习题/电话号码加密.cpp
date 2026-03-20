#include <stdio.h>
int main(){
    int arr[11]={0};
    char tel[12];
    int index[11]={0};
    int cnt[10]={0};
    int i;
    scanf("%s",tel);
    for(i=0;i<11;i++){
        cnt[tel[i]-'0']++;
    }
    int j=0;
    for(i=0;i<10;i++){    //¼ÇÂ¼arr
        if(cnt[i]>0){
            arr[j]=i;
            j++;
        }
    }
    for(i=0;i<11;i++){     //ÅÅÐò
        for(j=0;j<11;j++){
            if(arr[j]>arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    for(i=0;i<11;i++){     //¼ÇÂ¼index
        for(j=0;j<11;j++){
            if((tel[i]-'0')==arr[j]){
                index[i]=j;
            }
        }
    }
    printf("int[] arr = new int[]{ ");
    for(i=0;i<11;i++){
        if(arr[i]!=0){
            printf("%d,",arr[i]);
        }else if(arr[i]==0){
            printf("0};\n");
            break;
        }
    }
    printf("int[] index = new int[]{");
    for(i=0;i<11;i++){
        if(i<10){
            printf("%d,",index[i]);
        }else if(i==10){
            printf("%d};",index[10]);
        }
    }
    return 0;
}
