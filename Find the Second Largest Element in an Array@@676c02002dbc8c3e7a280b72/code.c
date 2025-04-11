#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d",&n);
    
    if(n<2){
        printf("-1");
        return 0;
    }
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    int max=INT_MIN;
    int smax=INT_MIN;
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            smax=max;
            max=arr[i];
        }
        else if(smax<arr[i] && max!=arr[i]){
            smax=arr[i];
        }
    }
    if(smax==INT_MIN){
        printf("-1");
    }
    else
    printf("%d",smax);
}