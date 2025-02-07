#include <stdio.h>
int main(){
    char ch;
    sacnf("%c",&ch);
    if(ch<=A && ch>=Z){
        printf("Uppercase");
    }
    else if(ch<=a && ch>=z){
        printf("Lowercase");
    }
    else {
        printf("Not an alphabet");
    }
}