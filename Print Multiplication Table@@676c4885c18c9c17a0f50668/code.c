// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i=1;
    int product=1;
    while(i<11){
        i++;
        product=product*i;
    }
    printf("%d x %d = %d\n",n,i,product);
}