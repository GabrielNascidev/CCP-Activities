programa
{
	
	funcao inicio()
	{

		inteiro pessoas, sanduba, pao, presun, queijo, total

		escreva("----- FESTA DE ANIVERSÁRIO DO GABRIEL -----")
		escreva("\n\nLista de comidas e bebidas:")
		escreva("\n[1] - SANDUICHES  [2] - PIZZAS")
		escreva("\n[3] - COCA-COLA   [4] - SUCOS")
		
		escreva("\n\nQuantas pessoas irão participar da festa?: ")
		leia(pessoas)

		sanduba = pessoas

		escreva("\nVocê precisará de um total de " , sanduba, " sanduiches para essa festa!!")
		escreva("\n\nCADA SANDUICHE É COMPOSTO POR:")
		escreva("\n2 fatias de pão")
		escreva("\n1 fatia de presunto")
		escreva("\n1 queijo")

		pao = sanduba * 2
		presun = sanduba * 1
		queijo = sanduba * 1
		
		escreva("\n\nLOGO VOCÊ IRÁ PRECISAR DE UM TOTAL DE:")
		escreva("\n", pao , " fatias de pão!")
		escreva("\n", presun , " fatias de presunto!")
		escreva("\n", queijo , " queijos!")

		total = pao + presun + queijo
		escreva("\n\nTOTAL DE INGREDIENTES: "  , total)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 953; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */