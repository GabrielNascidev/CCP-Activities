programa
{
	
	funcao inicio()
	{
		real preco, litrosUsados, KMviagem, KMcarro, custoTotal
		
		escreva("----- GPS GABGAB -----")
		escreva("\n\n-Bom dia mano me chamo GabGab,")
		escreva("\nestou aqui para calcular o custo total de combustível durante sua viagem!!")
		escreva("\n-Mas antes, preciso de algumas informações:")

		escreva("\n\n-Quantos KM você irá percorrer durante sua viagem?: ")
		leia(KMviagem)

		escreva("\n-OK, agora me informe o consumo do seu carro(em Km/L) : ")
		leia(KMcarro)

		escreva("\n-OK, agora me informe o valor da gasolina: R$")
		leia(preco)

		litrosUsados = KMviagem / KMcarro
		custoTotal = litrosUsados * preco

		escreva("\n-PROCESSANDO...")
		escreva("\n-Nessa viagem você irá gastar um total de R$", custoTotal," em gasolina!!")
		escreva("\n-Obrigado por usar o sistema do GabGab!")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 95; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */