// Solução de Peterson
// Solução de Peterson para realizar a exclusão mútua

// Problema da solução abaixo:
// O algoritmo implementa exclusão mútua desde que o teste para que um processo
// acesse a região crítica seja atômico. No código, ao checar a condição do
// loop, se executa mais de uma instrução, possibilitando que, quando o
// processador fizer a troca de contexto para outro processo que tenha interesse
// na região crítica, ele possa acessá-la.

#define FALSE	0
#define TRUE	1
#define N		2	// número de processos

// salva de qual processo é a vez
int turn;
// todos os valores iniciam em zero
int interested[N];

void enter_region(int process) {
	int other;	// numero do outro processo
	
	// se atual = 0, outro = 1; se atual = 1, outro = 0
	other = 1 - process;
	
	// processo atual tem interesse em entrar na região
	interested[process] = TRUE;
	
	// a vez é a do processo atual
	turn = process;
	
	// se a vez for a do processo atual e o outro processo estiver interessado
	// também, processo atual espera
	while (turn == process && interested[other] == TRUE);
}

void leave_region(int process) {
	// ao sair da região, processo atual diz que não tem mais interesse
	interested[process] = FALSE;
}