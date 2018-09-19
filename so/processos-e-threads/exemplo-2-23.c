// Alternância explícita
// Uma solução proposta para o problema da região crítica

// Problema para a solução abaixo:
// Chavear a vez de acesso à região crítica não é a melhor solução quando um
// processo é muito mais lento que o outro.

// Antes do processo 0 deixar a região crítica, ele diz que a vez agora é do
// processo 1 e executa em sua região não crítica, enquanto o processo 1 recebe
// acesso e executa na região crítica. Antes de deixar a região crítica, o
// processo 1 diz que é a vez do processo 0 executar na região crítica e então o
// processo 1 executa na sua região não crítica. Mas e se o processo 1 acabar a
// execução na região não crítica, quiser acessar a região crítica, mas o
// processo 0 ainda estiver ocupado com sua região não crítica?

// processo 0
while (TRUE) {
	while (turn != 0);		// enquanto não for sua vez, processo 0 espera
	critical_region();		// entra na região crítica
	turn = 1;					// passa a vez para o processo 1
	noncritical_region(); 	// sai da região crítica
}

// processo 1
while (TRUE) {
	while (turn != 1);		// enquanto não for sua vez, processo 1 espera
	critical_region();		// entra na região crítica
	turn = 0;					// passa a vez para o processo 0
	noncritical_region();	// sai da região crítica
}