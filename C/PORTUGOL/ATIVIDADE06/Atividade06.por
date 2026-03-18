programa
{
	
	funcao inicio()
	{
		cadeia nome
		logico presenca
		
		escreva("----- EVENTOS GABGAB -----")
		escreva("\n\n-Bom dia bro me chamo GabGab,")
		escreva("\nestou aqui para saber se você irá ou não comparecer no evento!!")
		escreva("\n-Mas antes, preciso de algumas informações:")

		escreva("\n\n-Primeiro, qual o seu nome?: ")
		leia(nome)

		escreva("\n-OK, é verdade que você irá comparecer no evento(verdadeiro ou falso)?: ")
		leia(presenca)

		escreva("\n-PROCESSANDO...")
		se(presenca){
			escreva("\n-UHUUU que bom que você irá comparecer ",nome,". Irei ficar esperando por você!!")
			escreva("\n-Obrigado por usar o sistema do GabGab!")
		}senao{
			escreva("\n-POXAA que pena que você não poderá comparecer no evento ",nome,", mas tudo bem , tenha um bom dia!!")
			escreva("\n-Obrigado por usar o sistema do GabGab!")
		}


	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 852; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */