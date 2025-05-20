#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void init() {
    setvbuf(stdout, NULL, _IONBF, 0);
    setvbuf(stdin, NULL, _IONBF, 0);
    setvbuf(stderr, NULL, _IONBF, 0);
}

void win(){
    puts("나탑이 : 대단해요!!");
    system("/bin/sh");
}

int main(){
    init();
    char buf[0x100];
    printf("input : ");
    scanf("%s", buf);
    return 0;
}
