#include <stdio.h>
int main(){
    char ch ;
    scanf("%c",&ch);
    if(ch=='R'){
        printf("Stop");
    }
    else if(ch=='G'){
        printf("Go");
    }
    else{
        printf("Slow Down or Invalid input");
    }
}