programa
{
	
	funcao inicio()
	{
		inteiro qnt=1
		real preco=0, precoTotal

		escreva("Dígite a quantidade de pen-drive(s): ")
		leia(qnt)
		
			se (qnt == 1){
				escreva("\nO preço é U$15,00 por unidade")								
			}//fim se
				senao se (qnt >=2 e qnt <=4){
				
					escreva("\nEntre 2 até 4 pen-drives,o preço sai à U$ 13.50 por unidade : ")
					precoTotal = preco+ ( 13.5 * qnt)
					escreva("preco total: ", precoTotal)
			}//fim senao se
				senao se (qnt >=5 e qnt <=10){
					
					escreva("\nEntre 5 até 10 pen-drives,o preço sai à U$ 11.30 por unidade :")
					precoTotal = preco +( 11.3 * qnt)
					escreva("preco total: ", precoTotal)
			}//fim senao se
				senao se (qnt >= 11){
					
					escreva("\nAcima de 11 pen-drives,o preço sai à U$ 9.10 por unidade :")
					precoTotal = preco + (9.1 * qnt)
					escreva("preco total: ", precoTotal)
			}//fim senao	
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 857; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */
