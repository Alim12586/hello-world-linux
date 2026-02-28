#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <unistd.h>


void handle_sigint(int sig) {
    printf("\nExiting program...\n");
    exit(0);
}

int main() {
    
    signal(SIGINT, handle_sigint);

    
    while (1) {
        printf("Hello World\n");
        sleep(1); // 1 saniye bekle
    }

    return 0;
}