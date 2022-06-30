#include <stdio.h>
#include <stdlib.h>

float calcImposto(float salario){
	float imposto=0;
		if(salario >=1903.99 && salario <= 2826.65)
			imposto = salario* (7.5/100);
			else
				if(salario>=2826.66  && salario <= 3751.05)
				imposto = salario* (15.0/100);
			else
				if(salario >=3751.06 && salario <= 4664.68 )
				imposto = salario* (22.50/100);
			else
				if(salario >4664.68)
				imposto = salario* (27.50/100);
	
	return imposto;				
}
int main (){
	float salario, result,imposto[100],soma=0;
	int indice,qtdFunci;
	
	printf("Digite a quantidade de funcionarios: ");
	scanf("%d",&qtdFunci);
	
	for(indice=0;indice<qtdFunci;indice++){
		printf("Digite o valor do salario: ");
		scanf("%f",&salario);		
		result=calcImposto(salario);
		printf("Resultado:%.2f\n",result);
		imposto[indice]= result;
	}//fim for
	printf("----- RELATORIO DE IMPOSTOS -----\n");
	for(indice=0;indice<qtdFunci;indice++){
		printf("%2.f | ",imposto[indice]);
		soma+=imposto[indice];
	}//fim for
		printf("\n Soma dos impostos:%f ",soma);
	return 0;
	
	
}
