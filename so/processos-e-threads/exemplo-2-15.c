// Um exemplo de programa usando threads

#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

// número de threads que serão criadas
#define NUMBER_OF_THREADS 10

// exibe identificador da thread e sai
void *print_hello_world(void *tid) {
	printf("Hello world, welcome from thread %d\n", tid);
	pthread_exit(NULL);
}

int main(int argc, char *argv[]) {
	// array com identificadores das threads
	pthread_t threads[NUMBER_OF_THREADS];
	
	int status, i;
	
	// para cada thread
	for (i = 0; i < NUMBER_OF_THREADS; i += 1) {
		printf("Main method. Creating thread %d\n", i);
		
		// cria thread e executa função na qual ela se identifica
		status = pthread_create(&threads[i], NULL, print_hello_world, (void *)i);
		
		// se criação falhar, sai do programa
		if (status != 0) {
			printf("Oops. pthread_create returned error code %d\n", status);
			exit(-1);
		}
	}
	
	// termina sem erros
	exit(NULL);
}