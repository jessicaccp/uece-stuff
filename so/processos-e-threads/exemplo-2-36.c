// Problema produtor-consumidor com troca de mensagens

#define N 100							// capacidade do buffer

void producer() {
	int item;
	message m;							// buffer
	
	while (TRUE) {
		item = produce_item();		// produz item
		receive(consumer, &m);		// espera que chegue uma mensagem vazia
		build_message(&m, item);	// monta uma mensagem
		send(consumer, &m);			// envia item para consumidor
	}
}

void consumer() {
	int item, i;
	message m;
	
	for (i = 0; i < N; i += 1)
		send(producer, &m);			// envia N mensagens vazias
	
	while (TRUE) {
		receive(producer, &m);		// recebe mensagem contendo item
		item = extract_item(&m);	// extrai item da mensagem
		send(producer, &m);			// envia mensagem vazia como resposta
		consume_item(item);			// consome item
	}
}