#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t pid = fork();   // Create a new process

    if (pid == 0) {
        // This block runs in the child process
        printf("This is the child process. PID: %d\n", getpid());
    }
    else if (pid > 0) {
        // This block runs in the parent process
        printf("This is the parent process. PID: %d\n", getpid());
    }
    else {
        // fork() returns -1 if creation failed
        printf("Fork failed!\n");
    }

    return 0;
}
