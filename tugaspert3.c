#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>


int main() {
    pid_t child = fork();
    if (child == 0) {
        while (1) {
            puts("ouput here");
            sleep(1);
        }
    } else {
        sleep(4);
        kill(child, SIGSTOP); // berhentikan proses
        sleep(3);
        kill(child, SIGCONT); // lanjutkan proses
        sleep(2);
        kill(child, SIGTERM);   // terminate proses
    }
    return 0;
}
