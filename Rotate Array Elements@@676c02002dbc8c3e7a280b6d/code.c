#include<stdio.h>
int main(){
    void reverse(int arr[],int start,int end){
        while(start<end){
            int temp = arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
            start++;
            end--;
        }
    }
    void rotateright(int arr[],int N,int k){
        k=k%N;
        reverse(arr,0,N-1);
        reverse(arr,0,k-1);
        reverse(arr,k,N-1);
    }
    int main(){
        int N,k;
        scanf("%d",&N);
        int arr[N];
        for(int i=0;i,N;i++){
            scanf("%d",&arr[i]);
        }
        scanf("%d",&k);
        if(N>1){
            rotateright(arr,N,k);
        }
        for(int i=0;i<N;i++){
            if(i>0){
                printf(" ");
            }
            printf("%d",arr[i]);
        }
        printf("\n");
    }
}