programa
{
	
	funcao inicio()
	{ 
		real qntKm= 0, precoDia=120, precoTotal=0, qntDia, precoKm= 0.08

		escreva ("Digite a quantidade de dias alugados: ")
		leia(qntDia)
		escreva ("Digite a quantidade de Km percorrido: ")
		leia(qntKm)

		qntDia = qntDia* precoDia
		precoTotal = qntDia + (qntKm * precoKm)
		escreva("O valor Total do aluguel ficou em: ", precoTotal)
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 344; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */