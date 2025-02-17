// Your code here...
#include <stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    if(n>=18 && m==1 || m==0){
        printf("Eligible");
    }
    else{
        printf("Not Eligible");
    }
    
}