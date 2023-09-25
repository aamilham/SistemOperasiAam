#include <stdio.h>
#include <pthread.h>
#define N 8


void* hello(void* arg) {
    printf("hello from thread %d\n", ((int*)arg)[0]);
    pthread_exit(NULL);
}

int main() {
    pthread_t t[N];
    int id[N] = {1, 2, 3, 4, 5, 6, 7, 8};
    for (int i = 0; i < N; i++)
    pthread_create(&t[i], NULL, hello, &id[i]);
    for (int i = 0; i < N; i++)
    pthread_join(t[i], NULL);

    return 0;
}
