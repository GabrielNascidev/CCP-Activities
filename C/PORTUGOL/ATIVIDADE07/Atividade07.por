programa
{
	inclua biblioteca Matematica-->mat
	funcao inicio()
	{
		real reais, taxa, arredonda
		
		escreva("----- BANCOS GABGAB -----")
		escreva("\n\n-Bom dia bro me chamo GabGab,")
		escreva("\nestou aqui para converter os seus reais para dolar!!")
		escreva("\n-Mas antes, preciso de algumas informações:")

		escreva("\n\n-Primeiro, quantos reais você irá converter: R$")
		leia(reais)

		escreva("\n-OK, agora me informe qual é a taxa de câmbio do dolar: R$ ")
		leia(taxa)

		arredonda = mat.arredondar(reais / taxa, 2)
		
		escreva("\n-PROCESSANDO...")
		escreva("\n-Você irá receber $", arredonda, " dolares!!")
		escreva("\n-Obrigado por usar o sistema do GabGab!")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 101; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */