#include <stdio.h>
#include <stdlib.h>

float calcImposto(float salario){
	float imposto=0;
		if(salario >=1903.99 && salario <= 2826.65)
			imposto = salario* (7.5/100);
			else
				if(salario>=2826.66  && salario <= 3751.05)
				imposto = salario* (15/100);
			else
				if(salario >=3751.06 && salario <= 4664.68 )
				imposto = salario* (22.5/100);
			else
				if(salario >4664.68)
				imposto = salario* (27.5/100);
	
	return imposto;				
}
int main (){
	float salario, imposto,result;
	
	printf("Digite o valor do salario: ");
	scanf("%f",&salario);
	
	result=calcImposto(salario);
	printf("Resultado:%.2f ",result);
	return 0;
}
