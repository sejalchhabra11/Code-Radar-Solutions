#include <stdio.h>
int main(){
    char a;
    sacnf("%c",&a)
    if(a<=A && a>=Z){
        printf("Uppercase");
    }
    else if(a<=a && a>=z){
        printf("Lowercase");
    }
    else {
        printf("Not an alphabet");
    }
}