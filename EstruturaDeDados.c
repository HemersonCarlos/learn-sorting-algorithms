#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#define min

// Prototipando funções
void binarySearch( int vetorOrdenado[], int tamanhoInformado );
void bubbleSort();
void selectionSort();
void insertionSort();
void mergeSort();
void quickSort();
void timSorting();
void insertionSorting();

main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int numeroInformado = 0;
	
	printf("Estruturas de dados\n");
	printf("\n1 - Algoritmo da bolha. (Bubble Sort)");
	printf("\n2 - Algoritmo de seleção. (Selection Sort)");
	printf("\n3 - Algoritmo de inserção. (Insertion Sort)");
	printf("\n4 - Algoritmo de ordenação por mistura. (Merge Sort)");
	printf("\n5 - Algoritmo de ordenação rápida. (Quick Sort)");
	printf("\n6 - Algoritmo de ordenação híbrido. (TimSort)");
	printf("\n\nEscolha a opção desejada: ");
	scanf("%d", &numeroInformado);

	
	switch(numeroInformado){
		
		case 1:
			printf("\n");
			system("pause");
			system("cls||clear");
			bubbleSort();
		break;
		
		case 2:
			printf("\n");
			system("pause");
			system("cls||clear");
			selectionSort();
		break;
		
		case 3:
			printf("\n");
			system("pause");
			system("cls||clear");
			insertionSort();
		break;
		
		case 4:
			printf("\n");
			system("pause");
			system("cls||clear");
			mergeSort();
		break;
		
		case 5:
			printf("\n");
			system("pause");
			system("cls||clear");
			quickSort();
		break;
		
		case 6:
			printf("\n");
			system("pause");
			system("cls||clear");
			timSorting();
		break;
		
		default:
			printf("\n");
			system("cls||clear");
			printf("Opção incorreta.\n\n");
			system("pause\n\n");
			system("cls||clear");
			main();
		break;
	}
}

//--------------------------------------------
// Funções 
//--------------------------------------------

void bubbleSort(){
	
	int numeroInformado, contador = 0, contadorNumero1, contadorNumero2, armazenaNumeroTemporario = 0, numeroDigitadoBuscaBinaria;
	double tempoDuracaoProcesso;
	
	printf("Algoritmo da bolha. (Bubble Sort)\n\n");
	printf("Escolha os números abaixo para definir o tamanho da estrutura: \n");
	printf("De -> 100\n");
	printf("De -> 1000\n");
	printf("De -> 10000\n");
	printf("De -> 100000\n");
	printf("De -> 1000000\n");
	printf("\nDigite o tamanho desejado: ");
	scanf("%d", &numeroInformado);
	
	system("cls||clear");
	printf("O número digitado foi -> %d", numeroInformado);
	
	int tamanhoVetor = numeroInformado;
	int vetorBublleSort[tamanhoVetor];
	
	printf("\n");
	
	printf("\nO vetor desorganizado: \n\n");
	
	printf("Vetor = { ");
	for(contador = 0; contador < numeroInformado; contador++){
		vetorBublleSort[contador] = rand() % numeroInformado + 1;
		
		if(contador == numeroInformado - 1){
			printf("%d", vetorBublleSort[contador]);	
		} else {
			printf("%d, ", vetorBublleSort[contador]);
		}
	}
	printf(" }");
	
	clock_t marcandoTempo;
	// Iniciando a marcação do tempo...
	marcandoTempo = clock();
	
	for(contadorNumero1 = 0; contadorNumero1 < numeroInformado; contadorNumero1++){
		for(contadorNumero2 = 0; contadorNumero2 < numeroInformado - 1 - contadorNumero1; contadorNumero2++){
			if( vetorBublleSort[contadorNumero2] > vetorBublleSort[contadorNumero2 + 1] ){
				armazenaNumeroTemporario = 0;
				armazenaNumeroTemporario = vetorBublleSort[contadorNumero2];
				vetorBublleSort[contadorNumero2] = vetorBublleSort[contadorNumero2 + 1];
				vetorBublleSort[contadorNumero2 + 1] = armazenaNumeroTemporario;
			}
		}
	}
	
	// Finalizando a marcação do tempo...
	marcandoTempo = clock();
	
	printf("\n\n---------------------------------------\n\n");
	
	printf("O vetor organizado: \n\n");
	
	printf("Vetor = { ");
	for(contador = 0; contador < numeroInformado; contador++){
		if(contador == numeroInformado - 1){
			printf("%d", vetorBublleSort[contador]);	
		} else {
			printf("%d, ", vetorBublleSort[contador]);
		}
	}
	printf(" }");
	
	printf("\n\n");
	
	tempoDuracaoProcesso = ( (double) marcandoTempo) / CLOCKS_PER_SEC ;
	printf("Algoritmo da bolha - tempo %.1f segundos.\n\n", tempoDuracaoProcesso);

	system("pause");	
	system("cls||clear");
	
	numeroDigitadoBuscaBinaria = numeroInformado;
	
	printf("Deseja volta pra onde: ");
	printf("\n1 - Algoritmo da bolha. (Bubble Sort).");
	printf("\n2 - Deseja buscar algum número dentro do vetor ordenado. (Search binary).");
	printf("\n3 - Menu inicial.");
	printf("\n0 - Sair (Exit).");
	printf("\n\nEscolha a opção desejada: ");
	scanf("%d", &numeroInformado);
	
	switch(numeroInformado){
		case 1: 
			printf("\n");
			system("pause");
			system("cls||clear");
			bubbleSort();
		break;
		
		case 2:
			printf("\n");
			system("pause");
			system("cls||clear");
			binarySearch( vetorBublleSort, numeroDigitadoBuscaBinaria );
		break; 
		
		case 3: 
			printf("\n");
			system("pause");
			system("cls||clear");
			main();
		break;
		
		case 0:
			printf("\n");
			system("pause");
			system("cls||clear");
			printf("Saindo...\n");
		break;
		
	}
}

//--------------------------------------------

void selectionSort(){
	
	int numeroInformado, contador = 0, contadorNumero1, contadorNumero2, armazenaNumeroTemporario = 0, numeroDigitadoBuscaBinaria;
	double tempoDuracaoProcesso;
	
	printf("Algoritmo de seleção. (Selection Sort)\n\n");
	printf("Escolha os números abaixo para definir o tamanho da estrutura: \n");
	printf("De -> 100\n");
	printf("De -> 1000\n");
	printf("De -> 10000\n");
	printf("De -> 100000\n");
	printf("De -> 1000000\n");
	printf("\nDigite o tamanho desejado: ");
	scanf("%d", &numeroInformado);
	
	system("cls||clear");
	printf("O número digitado foi -> %d", numeroInformado);
	
	int tamanhoVetor = numeroInformado;
	int vetorSelectionSort[tamanhoVetor];
	
	printf("\n");
	
	printf("\nO vetor desorganizado: \n\n");
	
	printf("Vetor = { ");
	for(contador = 0; contador < numeroInformado; contador++){
		vetorSelectionSort[contador] = rand() % numeroInformado + 1;
		
		if(contador == numeroInformado - 1){
			printf("%d", vetorSelectionSort[contador]);	
		} else {
			printf("%d, ", vetorSelectionSort[contador]);
		}
	}
	printf(" }");
	
	clock_t marcandoTempo;
	// Iniciando a marcação do tempo...
	marcandoTempo = clock();
	
	for ( contadorNumero1 = 0; contadorNumero1 < numeroInformado - 1; contadorNumero1++ ) {
		
		int numeroMenorArmazenado;
		numeroMenorArmazenado = contadorNumero1;
		
		for( contadorNumero2 = contadorNumero1 + 1; contadorNumero2 < numeroInformado; contadorNumero2++ ) {
			
			if( vetorSelectionSort[numeroMenorArmazenado] > vetorSelectionSort[contadorNumero2] ){
				numeroMenorArmazenado = contadorNumero2;
			}
			
			if( contadorNumero1 != numeroMenorArmazenado ){
				armazenaNumeroTemporario = vetorSelectionSort[contadorNumero1];
				vetorSelectionSort[contadorNumero1] = vetorSelectionSort[numeroMenorArmazenado];
				vetorSelectionSort[numeroMenorArmazenado] = armazenaNumeroTemporario;
			}	
		}
	}
	
	// Finalizando a marcação do tempo...
	marcandoTempo = clock();
	
	printf("\n\n---------------------------------------\n\n");
	
	printf("O vetor organizado: \n\n");
	
	printf("Vetor = { ");
	for(contador = 0; contador < numeroInformado; contador++){
		if(contador == numeroInformado - 1){
			printf("%d", vetorSelectionSort[contador]);	
		} else {
			printf("%d, ", vetorSelectionSort[contador]);
		}
	}
	printf(" }");
	
	printf("\n\n");
	
	tempoDuracaoProcesso = ( (double) marcandoTempo) / CLOCKS_PER_SEC ;
	printf("Algoritmo de seleção - tempo %.1f segundos.\n\n", tempoDuracaoProcesso);

	system("pause");	
	system("cls||clear");
	
	numeroDigitadoBuscaBinaria = numeroInformado;
	
	printf("Deseja volta pra onde: ");
	printf("\n1 - Algoritmo de seleção. (Selection Sort).");
	printf("\n2 - Deseja buscar algum número dentro do vetor ordenado. (Search binary).");
	printf("\n3 - Menu inicial.");
	printf("\n0 - Sair (Exit).");
	printf("\n\nEscolha a opção desejada: ");
	scanf("%d", &numeroInformado);
	
	switch(numeroInformado){
		case 1: 
			printf("\n");
			system("pause");
			system("cls||clear");
			selectionSort();
		break;
		
		case 2:
			printf("\n");
			system("pause");
			system("cls||clear");
			binarySearch( vetorSelectionSort, numeroDigitadoBuscaBinaria );
		break; 
		
		case 3: 
			printf("\n");
			system("pause");
			system("cls||clear");
			main();
		break;
		
		case 0:
			printf("\n");
			system("pause");
			system("cls||clear");
			printf("Saindo...\n");
		break;
		
	}
}

//--------------------------------------------

void insertionSort(){
	
	int numeroInformado, contador = 0, contadorNumero1, contadorNumero2, armazenaNumeroTemporario = 0, numeroDigitadoBuscaBinaria;
	double tempoDuracaoProcesso;
	
	printf("Algoritmo de inserção. (Insertion Sort)\n\n");
	printf("Escolha os números abaixo para definir o tamanho da estrutura: \n");
	printf("De -> 100\n");
	printf("De -> 1000\n");
	printf("De -> 10000\n");
	printf("De -> 100000\n");
	printf("De -> 1000000\n");
	printf("\nDigite o tamanho desejado: ");
	scanf("%d", &numeroInformado);
	
	system("cls||clear");
	printf("O número digitado foi -> %d", numeroInformado);
	
	int tamanhoVetor = numeroInformado;
	int vetorInsertionSort[tamanhoVetor];
	
	printf("\n");
	
	printf("\nO vetor desorganizado: \n\n");
	
	printf("Vetor = { ");
	for(contador = 0; contador < numeroInformado; contador++){
		vetorInsertionSort[contador] = rand() % numeroInformado + 1;
		
		if(contador == numeroInformado - 1){
			printf("%d", vetorInsertionSort[contador]);	
		} else {
			printf("%d, ", vetorInsertionSort[contador]);
		}
	}
	printf(" }");
	
	clock_t marcandoTempo;
	// Iniciando a marcação do tempo...
	marcandoTempo = clock();
	
	for( contadorNumero1 = 1; contadorNumero1 < numeroInformado; contadorNumero1++ ){
		armazenaNumeroTemporario = vetorInsertionSort[contadorNumero1];
		contadorNumero2 = contadorNumero1 - 1;
		
		while( ( contadorNumero2 >= 0 ) && ( armazenaNumeroTemporario < vetorInsertionSort[contadorNumero2] ) ){
			
			vetorInsertionSort[contadorNumero2 + 1] = vetorInsertionSort[contadorNumero2];
			contadorNumero2--;
		}
		
		vetorInsertionSort[contadorNumero2 + 1] = armazenaNumeroTemporario;
	}
	
	// Finalizando a marcação do tempo...
	marcandoTempo = clock();
	
	printf("\n\n---------------------------------------\n\n");
	
	printf("O vetor organizado: \n\n");
	
	printf("Vetor = { ");
	for(contador = 0; contador < numeroInformado; contador++){
		if(contador == numeroInformado - 1){
			printf("%d", vetorInsertionSort[contador]);	
		} else {
			printf("%d, ", vetorInsertionSort[contador]);
		}
	}
	printf(" }");
	
	printf("\n\n");
	
	tempoDuracaoProcesso = ( (double) marcandoTempo) / CLOCKS_PER_SEC ;
	printf("Algoritmo de inserção - tempo %.1f segundos.\n\n", tempoDuracaoProcesso);

	system("pause");	
	system("cls||clear");
	
	numeroDigitadoBuscaBinaria = numeroInformado;
	
	printf("Deseja volta pra onde: ");
	printf("\n1 - Algoritmo de inserção. (Insertion Sort).");
	printf("\n2 - Deseja buscar algum número dentro do vetor ordenado. (Search binary).");
	printf("\n3 - Menu inicial.");
	printf("\n0 - Sair (Exit).");
	printf("\n\nEscolha a opção desejada: ");
	scanf("%d", &numeroInformado);
	
	switch(numeroInformado){
		case 1: 
			printf("\n");
			system("pause");
			system("cls||clear");
			insertionSort();
		break;
		
		case 2:
			printf("\n");
			system("pause");
			system("cls||clear");
			binarySearch( vetorInsertionSort, numeroDigitadoBuscaBinaria );
		break; 
		
		case 3: 
			printf("\n");
			system("pause");
			system("cls||clear");
			main();
		break;
		
		case 0:
			printf("\n");
			system("pause");
			system("cls||clear");
			printf("Saindo...\n");
		break;
		
	}
}
//--------------------------------------------

//--------------------------------------------
// Inicio do mergeSort
//--------------------------------------------

void mesclarVetorMergeSort(int vetorInformado[], int inicioInformado, int pontoMedioVetorMergeSort, int finalInformado){
	
    int primeiraParteVetorMergeSort = inicioInformado;
    int segundaParteVetorMergeSort = pontoMedioVetorMergeSort + 1;
    int vetorTemporario[finalInformado];
    int contador = 0;

    for(contador = inicioInformado; contador <= finalInformado; contador++)
        vetorTemporario[contador] = vetorInformado[contador];

    for(contador = inicioInformado; contador <= finalInformado; contador++)
    {
        if(primeiraParteVetorMergeSort > pontoMedioVetorMergeSort){
        	
            vetorInformado[contador] = vetorTemporario[segundaParteVetorMergeSort];
    
            segundaParteVetorMergeSort++;
        }
        
		else if(segundaParteVetorMergeSort > finalInformado){
			
            vetorInformado[contador] = vetorTemporario[primeiraParteVetorMergeSort];
            
            primeiraParteVetorMergeSort++;
        }
		
		else if(vetorTemporario[primeiraParteVetorMergeSort] < vetorTemporario[segundaParteVetorMergeSort]){
			
            vetorInformado[contador] = vetorTemporario[primeiraParteVetorMergeSort];
            
            primeiraParteVetorMergeSort++;
        }
		
		else{
			
            vetorInformado[contador] = vetorTemporario[segundaParteVetorMergeSort];
            
            segundaParteVetorMergeSort++;
        }
    }
}

void processamentoMergeSort(int vetorInformado[], int inicioInformado, int finalInformado){
	
    if(finalInformado <= inicioInformado){
    	return;
	}
	
    int pontoMedioVetorMergeSort = inicioInformado + (finalInformado - inicioInformado) / 2;
    processamentoMergeSort(vetorInformado, inicioInformado, pontoMedioVetorMergeSort);
    processamentoMergeSort(vetorInformado, pontoMedioVetorMergeSort + 1, finalInformado);
    mesclarVetorMergeSort(vetorInformado, inicioInformado, pontoMedioVetorMergeSort, finalInformado);
}

//--------------------------------------------

void mergeSort(){
	
	int numeroInformado, contador = 0, contadorNumero1, contadorNumero2, armazenaNumeroTemporario = 0, numeroDigitadoBuscaBinaria;
	double tempoDuracaoProcesso;
	
	printf("Algoritmo de ordenação por mistura. (Merge Sort)\n\n");
	printf("Escolha os números abaixo para definir o tamanho da estrutura: \n");
	printf("De -> 100\n");
	printf("De -> 1000\n");
	printf("De -> 10000\n");
	printf("De -> 100000\n");
	printf("De -> 1000000\n");
	printf("\nDigite o tamanho desejado: ");
	scanf("%d", &numeroInformado);
	
	system("cls||clear");
	printf("O número digitado foi -> %d", numeroInformado);
	
	int tamanhoVetor = numeroInformado;
	int vetorMergeSort[tamanhoVetor];
	
	printf("\n");
	
	printf("\nO vetor desorganizado: \n\n");
	
	printf("Vetor = { ");
	for(contador = 0; contador < numeroInformado; contador++){
		vetorMergeSort[contador] = rand() % numeroInformado + 1;
		
		if(contador == numeroInformado - 1){
			printf("%d", vetorMergeSort[contador]);	
		} else {
			printf("%d, ", vetorMergeSort[contador]);
		}
	}
	printf(" }");
	
	clock_t marcandoTempo;
	// Iniciando a marcação do tempo...
	marcandoTempo = clock();
	
	processamentoMergeSort(vetorMergeSort, 0, numeroInformado - 1);
	
	// Finalizando a marcação do tempo...
	marcandoTempo = clock();
	
	printf("\n\n---------------------------------------\n\n");
	
	printf("O vetor organizado: \n\n");
	
	printf("Vetor = { ");
	for(contador = 0; contador < numeroInformado; contador++){
		if(contador == numeroInformado - 1){
			printf("%d", vetorMergeSort[contador]);	
		} else {
			printf("%d, ", vetorMergeSort[contador]);
		}
	}
	printf(" }");
	
	printf("\n\n");
	
	tempoDuracaoProcesso = ( (double) marcandoTempo) / CLOCKS_PER_SEC ;
	printf("Algoritmo de ordenação por mistura - tempo %.1f segundos.\n\n", tempoDuracaoProcesso);

	system("pause");	
	system("cls||clear");
	
	numeroDigitadoBuscaBinaria = numeroInformado;
	
	printf("Deseja volta pra onde: ");
	printf("\n1 - Algoritmo de ordenação por mistura. (Merge Sort).");
	printf("\n2 - Deseja buscar algum número dentro do vetor ordenado. (Search binary).");
	printf("\n3 - Menu inicial.");
	printf("\n0 - Sair (Exit).");
	printf("\n\nEscolha a opção desejada: ");
	scanf("%d", &numeroInformado);
	
	switch(numeroInformado){
		case 1: 
			printf("\n");
			system("pause");
			system("cls||clear");
			mergeSort();
		break;
		
		case 2:
			printf("\n");
			system("pause");
			system("cls||clear");
			binarySearch( vetorMergeSort, numeroDigitadoBuscaBinaria );
		break; 
		
		case 3: 
			printf("\n");
			system("pause");
			system("cls||clear");
			main();
		break;
		
		case 0:
			printf("\n");
			system("pause");
			system("cls||clear");
			printf("Saindo...\n");
		break;
		
	}
}

//--------------------------------------------

//--------------------------------------------
// Inicio quickSort
//--------------------------------------------

int dividirVetorQuickSort( int vetorInfomado[], int inicioInformado, int finalInformado ) {
	
	int numeroInicioVetorQuickSort = inicioInformado + 1;
	int numeroFinalVetorQuickSort = finalInformado;
	int pivoVetorQuickSort = vetorInfomado[inicioInformado];
	int armazenamentoTemporario;
	
	while( numeroInicioVetorQuickSort <= numeroFinalVetorQuickSort ){
		
		if( vetorInfomado[numeroInicioVetorQuickSort] <= pivoVetorQuickSort ){
			numeroInicioVetorQuickSort++;
		} else if( vetorInfomado[numeroFinalVetorQuickSort] > pivoVetorQuickSort ){
			numeroFinalVetorQuickSort--;
		} else if( numeroInicioVetorQuickSort <= numeroFinalVetorQuickSort ){
			
			armazenamentoTemporario = vetorInfomado[numeroInicioVetorQuickSort];
			vetorInfomado[numeroInicioVetorQuickSort] = vetorInfomado[numeroFinalVetorQuickSort];
			vetorInfomado[numeroFinalVetorQuickSort] = armazenamentoTemporario;
			
			numeroInicioVetorQuickSort++;
			numeroFinalVetorQuickSort--;
			
		}	
	}
	
	armazenamentoTemporario = vetorInfomado[inicioInformado];
	vetorInfomado[inicioInformado] = vetorInfomado[numeroFinalVetorQuickSort];
	vetorInfomado[numeroFinalVetorQuickSort] = armazenamentoTemporario;
	
	return numeroFinalVetorQuickSort;
}

void processamentoQuickSort( int vetorInformado[], int inicioInformado, int finalInformado ){
	
	int pivoVetorQuickSort;
	
	if( inicioInformado < finalInformado ){
		
		pivoVetorQuickSort = dividirVetorQuickSort( vetorInformado, inicioInformado, finalInformado );
		processamentoQuickSort( vetorInformado, inicioInformado, pivoVetorQuickSort - 1 );
		processamentoQuickSort( vetorInformado, pivoVetorQuickSort + 1, finalInformado );
		
	}
}

//--------------------------------------------
void quickSort(){
	
	int numeroInformado, contador = 0, contadorNumero1, contadorNumero2, armazenaNumeroTemporario = 0, numeroDigitadoBuscaBinaria;
	double tempoDuracaoProcesso;
	
	printf("Algoritmo de ordenação rápida. (Quick Sort)\n\n");
	printf("Escolha os números abaixo para definir o tamanho da estrutura: \n");
	printf("De -> 100\n");
	printf("De -> 1000\n");
	printf("De -> 10000\n");
	printf("De -> 100000\n");
	printf("De -> 1000000\n");
	printf("\nDigite o tamanho desejado: ");
	scanf("%d", &numeroInformado);
	
	system("cls||clear");
	printf("O número digitado foi -> %d", numeroInformado);
	
	int tamanhoVetor = numeroInformado;
	int vetorQuickSort[tamanhoVetor];
	
	printf("\n");
	
	printf("\nO vetor desorganizado: \n\n");
	
	printf("Vetor = { ");
	for(contador = 0; contador < numeroInformado; contador++){
		vetorQuickSort[contador] = rand() % numeroInformado + 1;
		
		if(contador == numeroInformado - 1){
			printf("%d", vetorQuickSort[contador]);	
		} else {
			printf("%d, ", vetorQuickSort[contador]);
		}
	}
	printf(" }");
	
	clock_t marcandoTempo;
	// Iniciando a marcação do tempo...
	marcandoTempo = clock();
	
	// Função que inicia o processamento da organização quickSort
	processamentoQuickSort(vetorQuickSort, 0, numeroInformado - 1);
	
	// Finalizando a marcação do tempo...
	marcandoTempo = clock();
	
	printf("\n\n---------------------------------------\n\n");
	
	printf("O vetor organizado: \n\n");
	
	printf("Vetor = { ");
	for(contador = 0; contador < numeroInformado; contador++){
		if(contador == numeroInformado - 1){
			printf("%d", vetorQuickSort[contador]);	
		} else {
			printf("%d, ", vetorQuickSort[contador]);
		}
	}
	printf(" }");
	
	printf("\n\n");
	
	tempoDuracaoProcesso = ( (double) marcandoTempo) / CLOCKS_PER_SEC ;
	printf("Algoritmo de ordenação rápida - tempo %.1f segundos.\n\n", tempoDuracaoProcesso);

	system("pause");	
	system("cls||clear");
	
	numeroDigitadoBuscaBinaria = numeroInformado;
	
	printf("Deseja volta pra onde: ");
	printf("\n1 - Algoritmo de ordenação rápida. (Quick Sort).");
	printf("\n2 - Deseja buscar algum número dentro do vetor ordenado. (Search binary).");
	printf("\n3 - Menu inicial.");
	printf("\n0 - Sair (Exit).");
	printf("\n\nEscolha a opção desejada: ");
	scanf("%d", &numeroInformado);
	
	switch(numeroInformado){
		case 1: 
			printf("\n");
			system("pause");
			system("cls||clear");
			quickSort();
		break;
		
		case 2:
			printf("\n");
			system("pause");
			system("cls||clear");
			binarySearch( vetorQuickSort, numeroDigitadoBuscaBinaria );
		break; 
		
		case 3: 
			printf("\n");
			system("pause");
			system("cls||clear");
			main();
		break;
		
		case 0:
			printf("\n");
			system("pause");
			system("cls||clear");
			printf("Saindo...\n");
		break;
		
	}
}

//--------------------------------------------

//--------------------------------------------
// Inicio do timSort
// -------------------------------------------

//--------------------------------------------
// processamento do insertionSort
void insertionSorting( int vetorInformado[], int inicioInformado, int finalInformado){
	
	int contadorNumero1 = 0;
		
	for( contadorNumero1 = inicioInformado + 1; contadorNumero1 <= finalInformado; contadorNumero1++ ){
		
		int armazenaNumeroTemporario = vetorInformado[contadorNumero1];
		int contadorNumero2 = contadorNumero1 - 1;
		
		while( vetorInformado[contadorNumero2] > armazenaNumeroTemporario && contadorNumero2 >= inicioInformado ){
			
			vetorInformado[contadorNumero2 + 1] = vetorInformado[contadorNumero2];
			contadorNumero2--;
		}
		
		vetorInformado[contadorNumero2 + 1] = armazenaNumeroTemporario;
	}
	
}
//--------------------------------------------

//--------------------------------------------
// processamento do timSort
void timSort( int vetorInformado[], int tamanhoInformado, int inicioInformado, int finalInformado ){
	
	int RUN = 32;
	int contador = 0;
	int contadorNumero1 = 0;
	int contadorNumero2 = 0;
	
	for( contador = 0; contador < tamanhoInformado; contador+=RUN ){
		
		insertionSorting( vetorInformado, contador, min((contador + 31), (tamanhoInformado - 1)));	
	}
	
	for( contadorNumero1 = RUN; contadorNumero1 < tamanhoInformado; contadorNumero1 = ( 2 * contadorNumero1 ) ){
		
		for( contadorNumero2 = 0; contadorNumero2 < tamanhoInformado; contadorNumero2 += ( 2 * contadorNumero1 )  ){
			
			int pontoMedioVetor = contadorNumero2 + contadorNumero1 - 1;
			int direitaVetor = min( ( contadorNumero2 + 2 * contadorNumero1 - 1 ), ( tamanhoInformado - 1 ) );
			
			processamentoMergeSort( vetorInformado, inicioInformado, finalInformado );
		}	
	}
}
//--------------------------------------------

//--------------------------------------------
void timSorting(){
	
	int numeroInformado, contador = 0, contadorNumero1, contadorNumero2, armazenaNumeroTemporario = 0, numeroDigitadoBuscaBinaria;
	double tempoDuracaoProcesso;
	
	printf("Algoritmo de ordenação híbrido. (TimSort)\n\n");
	printf("Escolha os números abaixo para definir o tamanho da estrutura: \n");
	printf("De -> 100\n");
	printf("De -> 1000\n");
	printf("De -> 10000\n");
	printf("De -> 100000\n");
	printf("De -> 1000000\n");
	printf("\nDigite o tamanho desejado: ");
	scanf("%d", &numeroInformado);
	
	system("cls||clear");
	printf("O número digitado foi -> %d", numeroInformado);
	
	int tamanhoVetor = numeroInformado;
	int vetorTimSort[tamanhoVetor];
	
	printf("\n");
	
	printf("\nO vetor desorganizado: \n\n");
	
	printf("Vetor = { ");
	for(contador = 0; contador < numeroInformado; contador++){
		vetorTimSort[contador] = rand() % numeroInformado + 1;
		
		if(contador == numeroInformado - 1){
			printf("%d", vetorTimSort[contador]);	
		} else {
			printf("%d, ", vetorTimSort[contador]);
		}
	}
	printf(" }");
	
	clock_t marcandoTempo;
	// Iniciando a marcação do tempo...
	marcandoTempo = clock();
	
	// Função que inicia o processamento da organização timSort
	timSort( vetorTimSort, numeroInformado, 0, numeroInformado - 1 );
	
	// Finalizando a marcação do tempo...
	marcandoTempo = clock();
	
	printf("\n\n---------------------------------------\n\n");
	
	printf("O vetor organizado: \n\n");
	
	printf("Vetor = { ");
	for(contador = 0; contador < numeroInformado; contador++){
		if(contador == numeroInformado - 1){
			printf("%d", vetorTimSort[contador]);	
		} else {
			printf("%d, ", vetorTimSort[contador]);
		}
	}
	printf(" }");
	
	printf("\n\n");
	
	tempoDuracaoProcesso = ( (double) marcandoTempo) / CLOCKS_PER_SEC ;
	printf("Algoritmo de ordenação híbrido - tempo %.1f segundos.\n\n", tempoDuracaoProcesso);

	system("pause");	
	system("cls||clear");
	
	numeroDigitadoBuscaBinaria = numeroInformado;
	
	printf("Deseja volta pra onde: ");
	printf("\n1 - Algoritmo de ordenação híbrido. (TimSort).");
	printf("\n2 - Deseja buscar algum número dentro do vetor ordenado. (Search binary).");
	printf("\n3 - Menu inicial.");
	printf("\n0 - Sair (Exit).");
	printf("\n\nEscolha a opção desejada: ");
	scanf("%d", &numeroInformado);
	
	switch(numeroInformado){
		case 1: 
			printf("\n");
			system("pause");
			system("cls||clear");
			timSorting();
		break;
		
		case 2:
			printf("\n");
			system("pause");
			system("cls||clear");
			binarySearch( vetorTimSort, numeroDigitadoBuscaBinaria );
		break; 
		
		case 3: 
			printf("\n");
			system("pause");
			system("cls||clear");
			main();
		break;
		
		case 0:
			printf("\n");
			system("pause");
			system("cls||clear");
			printf("Saindo...\n");
		break;	
	}
}
//--------------------------------------------

//--------------------------------------------
// processamento da busca binária que so pode ser executada com o array ordenado

void binarySearch( int vetorOrdenado[], int tamanhoInformado ){
	
	int contador = 0, numeroDigitado = 0;
	
	system("cls||clear");
	printf("Executando uma busca binária no array ordenado.\n");
	
	printf("O vetor organizado: \n\n");
	
	printf("Vetor = { ");
	for( contador = 0; contador < tamanhoInformado; contador++ ){
		if(contador == tamanhoInformado - 1){
			printf("%d", vetorOrdenado[contador]);	
		} else {
			printf("%d, ", vetorOrdenado[contador]);
		}
	}
	printf(" }");
	
	printf("\n\n");
	
	printf("Digite o valor que deseja buscar: ");
	scanf("%d", &numeroDigitado);
	
	// Executando a busca binária
	numberSearch( vetorOrdenado, numeroDigitado, tamanhoInformado );
}

// procurando o número desejado no vetor
int numberSearch( int vetorOrdenado[], int numeroDigitado, int tamanhoInformado ){
	
	int posicaoInicialVetor, posicaoFinalVetor, posicaoDesejada;
	posicaoInicialVetor = 0;
	posicaoFinalVetor = tamanhoInformado - 1;
	
	while( posicaoInicialVetor <= posicaoFinalVetor ){
		
		posicaoDesejada = ( posicaoInicialVetor + posicaoFinalVetor ) / 2;
		
		if( numeroDigitado == vetorOrdenado[posicaoDesejada] ){
			return printf("\n\nO valor %d, está na posicao: %d do array.\n\n", vetorOrdenado[posicaoDesejada], posicaoDesejada);
		} else if( numeroDigitado < vetorOrdenado[posicaoDesejada] ){
			posicaoFinalVetor = posicaoDesejada - 1;
		} else {
			posicaoInicialVetor = posicaoDesejada + 1;
		}
	}
	
	return printf("\n\nO valor procurado, não foi encontrado.\n\n"); 	
}

//--------------------------------------------


