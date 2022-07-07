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
	int idade;
	float valor,res,total;
	
	printf("Digite idade: ");
	scanf("%d",&idade);
	printf("Digite o valor: ");
	scanf("%f",&valor);
	res=descontoIdade(idade,valor);
	total=valor - res;
	printf("\nTotal a pagar:%.2f",total);
}
