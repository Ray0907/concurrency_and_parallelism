#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

// Subprocess
void *child(void *data) {
	char *str = (char*) data; // Get data.
	for(int i =0; i< 7; ++i) {
		printf("%s\n", str);
		sleep(1); // print char per second;
	}
	pthread_exit(NULL); // Leave subprocess
}
// gcc pthread.c -lpthread
int main() {
	pthread_t t;
	pthread_create(&t, NULL, child, "Child"); //Create subprocess

	// Main process
	for(int i =0; i < 7; ++i) {
		printf("Master\n");
		sleep(1); // print char per second;
	}
	pthread_join(t, NULL); // Waiting for subprocess finished.
	return 0;
}