#include<stdio.h>

int mesa[5][5] = {0,2,3,8,9,7,4,5,6,1,2,3,4,5,6,1,2,1,2,3,5,7,8,9,0};
float precos[5] = {2.00, 1.50, 1.50, 2.80, 0.50};


void precoparcial(int numero){
	int i=0;
	for(i=0;i<5;i++){
		
	printf("\n quantidade %d valor = R$%.2f = R$%.2f",mesa[i][numero],precos[i],mesa[i][numero]*precos[i]);
	
	}
	
	
}

float precototalmesa(int numero){
	int i=0;
	float valor = 0;
	for(i=0;i<5;i++){
		
	
	valor = valor + mesa[i][numero]*precos[i];	
}

printf("\n valor total = R$%.2f",valor);
return valor;
}

void exibir(){
	int i = 0;
	int j = 0;
	for(i = 0;i<5;i++){
		for(j=0;j<5;j++){
			printf("\t%d",mesa[i][j]);
		}
		printf("\n");
	}
}

void zerar(int numero){
	
	int i=0;
	for(i=0;i<5;i++){
		mesa[i][numero] = 0;
}
}

void consumo(int numero, int quantidade, int produto){
	
	mesa[produto - 1][numero - 1] = mesa[produto - 1][numero - 1] + quantidade;
}

void faturamento( ){
	float totalganho = 0;
	int i = 0;
	for(i=0;i<5;i++){
	
	totalganho = totalganho + precototalmesa(0);
}
	printf("\n faturamento = R$%.2f",totalganho);
	
	
	
	
	
} 

void leitura(){
	int i,j;
	
	for(i=0;i<5;i++){
	
	   for(j=0;j<5;j++){
	   	printf("\n leitura da matriz de consumo = [%d][%d]",i,j);
	   	scanf("%d",&mesa[i][j]);
	   }
}
	   for(i=0;i<5;i++){
	   	 printf("\n leitura vetor de precos = [%f]",i);
	   	 scanf("%f",&precos[i]);
	   }
	   }
	   

	








main(){
	

int opcao = 0;
int numero = 0;
int produto = 0;
int quantidade = 0;

while(opcao!=6){
	
	printf("\n 1 - encerrar uma mesa");
	printf("\n 2 - introduzir novo consumo");
	printf("\n 3 - faturamento do bar");
	printf("\n 4 - leitura da matriz de consumo e vetor de precos");
	printf("\n 5 - exibir tudo");
	printf("\n 6 - sair");
	scanf("%d",&opcao);
	switch(opcao){
		
		case 1: printf("\n escolha a mesa(1/2/3/4/5):");
		        scanf("%d",&numero);
		        exibir();
		        precoparcial(numero - 1);
		        precototalmesa(numero - 1);
		        printf("\n");
		        zerar(numero - 1);
		        exibir();
		        break;
		        
		case 2: printf("\n qual a mesa:(1 - 5)");
		        scanf("%d",&numero);
		        
		        printf("\n 1 - refrigerante");
		        printf("\n 2 - coxinha");
		        printf("\n 3 - sorvete");
		        printf("\n 4 - cerveja");
		        printf("\n 5 - pinga");
				
				printf("\n qual o produto:(1 - 5)");
				scanf("%d",&numero);
				
				printf("\n qual a quantidade?");
				scanf("%d",&quantidade);
				
				printf("\n");
				
				consumo(numero,produto,quantidade);
				
	
				exibir();
					
		        
		        break;
		
		case 3: faturamento();
		        break;
		
	 	case 4: leitura();
	 	        break;
		
		case 5: exibir();
		        break;
	}
	
	
	
	
	
}

}
