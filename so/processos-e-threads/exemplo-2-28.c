// O problema do produtor-consumidor usando semáforos

#define N 100				// tamanho do buffer
typedef int semaphore;	// cria um novo tipo para os semáforos
semaphore mutex = 1;		// controla o acesso à região crítica
semaphore empty = N;		// conta espaços vazios no buffer
semaphore full = 0;		// conta espaços preenchidos no buffer

// produtor
void producer() {
	int item;
	
	while (TRUE) {
		item = produce_item();	// produz item
		down(&empty);				// um espaço vazio a menos
		down(&mutex);				// entra na região crítica
		insert_item(item);		// insere item no buffer
		up(&mutex);					// sai da região crítica
		up(&full);					// um espaço preenchido a mais
	}
}

// consumidor
void consumer() {
	int item;
	
	while (TRUE) {
		down(&full);				// um espaço preenchido a menos
		down(&mutex);				// entra na região crítica
		item = remove_item();	// remove item do buffer
		up(&mutex);					// sai da região crítica
		up(&empty);					// um espaço vazio a mais
		consume_item(item);		// consome item
	}
}