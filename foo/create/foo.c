#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
void * thread_func(void *arg) {
    int n = (int)arg;
    int i;
    for(i=0; i<n; ++i) {
        printf("loop %d: xxxx\n", i);
    }
    return NULL;
}
int main() {
    pthread_t thread;
    printf("threads created!\n");
    pthread_create(&thread, NULL, thread_func, (void*)10);
    pthread_join(thread, NULL);
    return 0;
}
