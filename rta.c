#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void win(){
    puts("나탑이 : 대단해요!!");
    system("/bin/sh");
}

int main(){
    char buf[0x100];
    int a = 30;
    int b = 100;

    printf("input : ");
    scanf("%s", buf);

    if(a != 30 && b != 100){
        printf("오호라..");   
    }
    else{
        exit(0);
    }
    return 0;
}