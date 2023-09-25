#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

int main() {
    pid_t pid, pid1;

    /* fork a child process */
    pid = fork();

    if (pid < 0) {                      /* error occurred */
        fprintf(stderr, "Fork Failed");
        return 1;
    } else if (pid == 0) {              /* child process */
        pid1 = getpid();
        printf("%d", pid);            /* A */
        printf("%d\n", pid1);           /* B */
    } else {                            /* parent process */
        pid1 = getpid();
        printf("%d\n", pid);            /* C */
        printf("%d\n", pid1);           /* D */
        wait(NULL);
    }
}