#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int d=a+b;
    int e=b+c;
    int f=c+a;
    if(d>c && e>a && f>b){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
}