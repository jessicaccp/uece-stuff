// O problema do produtor-consumidor com uma condição de corrida fatal

// Problema da solução abaixo:
// Suponha que o buffer está vazio e o consumidor acabou de receber o valor de
// count. No entanto, acontece a troca de contexto e o produtor acaba de inserir
// um item no buffer, incrementar count e enviar um sinal para que o consumidor
// acorde. Porém, o consumidor ainda não está logicamente dormindo, o que faz
// com que o sinal seja perdido. Quando o consumidor volta a executar, ele
// compara o valor de count que tinha anteriormente e dorme. Quando o produtor
// voltar a executar, produzirá itens até encher o buffer e também dormirá.
// Dessa forma, ambos produtor e consumidor dormirão para sempre.

#define N 100	// tamanho do buffer
int count = 0;	// numero de itens no buffer

// produtor
void producer() {
	int item;
	
	while (TRUE) {
		item = produce_item();	// produz item
		if (count == N)			// se o buffer estiver cheio, produtor dorme
			sleep();
		insert_item(item);		// adiciona item no buffer
		count += 1;					// incrementa o contador do buffer
		if (count == 1)			// se o buffer estava vazio, acorda consumidor
			wakeup(consumer);
	}
}

// consumidor
void consumer() {
	int item;
	
	while (TRUE) {
		if (count == 0)			// se buffer estiver vazio, consumidor dorme
			sleep();
		item = remove_item();	// retira item do buffer
		count -= 1;					// decrementa o contador do buffer
		if (count == N - 1)		// se o buffer estava cheio, acorda produtor
			wakeup(producer);
		consume_item(item);		// consome item
	}
}