#include <stdio.h>
#include <pthread.h>
#define N 16

int sum = 0;

void* arraysum(void* arg) {
    int temp = 0;
    for(int i=0; i<N; i++){
        temp += ((int*)arg)[i];
    }

    sum = temp;

    pthread_exit(NULL);
}

int main() {
    pthread_t t[4];
    int A[N] = {68,34,64,95,35,78,65,93,
    51,67, 7,77, 4,73,52,91};
    /* TODO: array sum */
    for(int i=0; i < 4; i++){
        pthread_create(&t[i], NULL, arraysum, (void*)A);
    }
    for (int i = 0; i < 4; i++){
        pthread_join(t[i], NULL);
    }

    printf("%d\n", sum);

    return 0;
}