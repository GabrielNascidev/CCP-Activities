programa
{
	
	funcao inicio()
	{
		real salario, desconto, total

		escreva("----- RH GABGAB -----")
		escreva("\n\n-Bom dia bro me chamo GabGab,")
		escreva("\nestou aqui para calcular quanto do seu salário você irá receber com os descontos inclusos!!")
		escreva("\n-Mas antes, preciso de algumas informações:")

		escreva("\n\n-Quanto de salário você recebe no mês?: R$")
		leia(salario)

		escreva("\n-OK, agora me informe quanto do seu salário é descontado(imposto, INSS, etc)?: R$")
		leia(desconto)

		total = salario - desconto

		escreva("\n-PROCESSANDO...")
		escreva("\n-O seu salário com descontos fica num total de R$", total ,"!!")
		escreva("\n-Obrigado por usar o sistema do GabGab!")

	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 705; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */