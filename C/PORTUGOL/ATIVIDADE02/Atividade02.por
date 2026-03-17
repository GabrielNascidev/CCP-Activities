programa
{
	inclua biblioteca Matematica-->mat
	funcao inicio()
	{
	
		real valor, arredonda
		inteiro pessoas
	
		escreva("----- RESTAURANTE DO GABGAB -----")
		escreva("\n\n-Bom dia meu amigo me chamo GabGab,")
		escreva("\nestou aqui para ajudar a dividir a conta igualmente para todos!!")
		escreva("\n-Mas antes, preciso de algumas informações:")
		
		escreva("\n\n-Quanto deu o valor total da conta?: R$")
		leia(valor)

		escreva("\n-OK, agora me informe quantas pessoas estão com você: ")
		leia(pessoas)

		escreva("\n-PROCESSANDO...")

		se(pessoas <= 0){
			escreva("\n-Erro: número de pessoas inválido!")
		}senao{
			arredonda = mat.arredondar(valor / pessoas , 2)
			escreva("\n-Cada pessoa presente nesta mesa irá pagar o valor de R$", arredonda,"!!")
			escreva("\n-Obrigado por usar o sistema do GabGab!")
		}

		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 640; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */