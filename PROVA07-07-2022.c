#include <stdio.h>
int descontoIdade(int idade, float valor){
	float desconto;
	desconto = valor*(idade/100.00); 
	if(idade >=50)
		desconto = valor* 0.50;
		else 
			desconto = valor*(idade/100.00);
	return desconto;
}
int main(){
	float res, valor,total,venda[100],soma=0;
	int idade,op, cont=0,i;
	
	do{
		printf("**SISTEMAS DE VENDAS OTICAS EXPRESS**\n");
		printf("1-Realizar vendas\n");
		printf("2-Mostrar vendas\n");
		printf("3-Filtrar vendas\n");
		printf("0-Sair\n");
		scanf("%d",&op);	
	switch(op){
		case 1:			
			printf("Realizar venda\n ");
			printf("Digite idade: ");
			scanf("%d",&idade);
			printf("Digite o valor: ");
			scanf("%f",&valor);
			res=descontoIdade(idade,valor);
			total= valor- res;
			printf("Total a pagar:%.2f",total );
			venda[cont]= total;
			cont++;
		break;
	
		case 2:
			
			for(i=0; i<cont;i++){
				printf("%f | ",venda[i]);
				soma+=venda[i];
			}
			printf("Total de vendas: %.2f",soma);

			break;
	}
	}while(op!=0);
		
		printf("PROGRAMA FINALIZADO\n");
		return 0;

}

	
