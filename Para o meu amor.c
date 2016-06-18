main()
{
	printf ("\n16/02/2016!! Neste dia, eu nem sabia ainda,\n");
	printf ("mas eu estava acabando de conhecer o meu AMOR!\n");
	printf ("Que sem eu perceber, tomou conta de todos os pedacinhos\n");
	printf ("do meu coracao!!\n");
	printf ("E agora vou te contar 10 motivos que me fazem\n");
	printf ("amar voce mais e mais a cada dia que passa!! \n\n");
	
	float num1, resultado;
	int motivos, continuar;
	continuar = 1;
	
	printf ("Digite qualquer numero para continuar:");
	scanf ("%f", &num1);
	
	
		printf ("\n1 motivo \n");
		printf ("2 motivo \n");
		printf ("3 motivo \n");
		printf ("4 motivo \n");
		printf ("5 motivo \n");
		printf ("6 motivo \n");
		printf ("7 motivo \n");
		printf ("8 motivo \n");
		printf ("9 motivo \n");
		printf ("10 motivo \n\n");
		
	while (continuar == 1)
	{
		
		printf ("Comece do 1 ao 10:");
		scanf ("%d", &motivos);
			
		switch (motivos)
		{
			case 1:
				resultado = 1;
			    printf ("\n1 - Quando eu pensei que eu nao tinha o meu par\n");
			    printf ("e estava por ai como quem nao quer nada,\n");
			    printf ("eu encontrei voce!!\n");
			    break;    
			case 2:
				resultado = 2;
				printf ("\n2 - Voce me mostrou o amor de um jeito\n");
				printf ("que nunca havia visto e nem sabia que existia...\n");
				printf ("Me sinto bem vinda, querida, como se tivesse\n");
				printf ("encontrado o meu lugar no mundo!!\n");
				break;
			case 3:
				resultado = 3;
				printf ("\n3 - Me faz sorrir ao acordar, ate a hora que vou dormir,\n");
				printf ("me faz rir de tudo, ri comigo\n");
				printf ("e me faz rir de mim mesma ate quando fico brava\n");
				break;
			case 4:
				resultado = 4;
				printf ("\n4 - Me aceita e me ama como eu sou,\n ");
				printf ("sem mudar em nada, mesmo com os meus defeitos\n");
				printf ("brava, teimosa, implicante, nerd, danadinha, impaciente,\n");
				printf ("Exemplo de whatsapp:\n");
				printf ("Vanessinha diz (Ping meu amor... (2 min depois...))\n");
				printf ("Vanessinha diz(Ti cade vc?:)\n");
				printf ("Vanessinah diz(:O o que houve? moco, volta moco)\n");
				printf ("Vanessinha diz(5 min depois: Oh meu Deus eu fui abandonada!! :( :O :'( )\n");
				printf ("Tiago diz(Moca, eu to aqui, so parei pra respirar um pouco!)\n");
				printf ("Vanessinha diz(Ele apareceu!!... oiii lindo meu :D !!! hahahaha...)\n");
				break;
			case 5:
				resultado = 5;
				printf ("\n5 - Pensamos igualzinho!\n");
				printf ("Me ensina os jogos mais legais,\n");
				printf ("gosta de tudo o que eu gosto,\n");
				printf ("me ensina programacao e dai ao inves de cartao\n");
				printf ("eu faco um programa que nem esse de msg de dia dos namorados haha...\n");
				break;
			case 6:
				resultado = 6;
				printf ("\n6 - Me faz querer ser uma pessoa melhor!\n");
				printf ("Me ensina os pontos onde posso melhorar e \n");
				printf ("como posso melhorar, tendo sempre a paciencia\n");
				printf ("de esperar eu aprender!\n");
				printf ("Ate mesmo matematica :) !\n");
				break;
			case 7:
				resultado = 7;
				printf ("\n7 - Tem o beijo mais doce!\n");
				printf ("O abraco mais aconchegante!\n");
				printf ("Um gostinho de quero mais em voce inteiro!\n");
				break;
			case 8:
				resultado = 8;
				printf ("\n8 - Estou ainda tentando descobrir, como\n");
				printf ("eu sempre vivi sem que voce estivesse comigo :/\n");
				printf ("E ainda nao encontrei resposta pra isso! haha...\n");
				break;
			case 9:
				resultado = 9;
				printf ("\n9 - Sinto que se eu mereci alguem como voce\n");
				printf ("devo ter feito mesmo algo de muito certo\n");
				printf ("nesta vida!\n");
				break;
			case 10:
				resultado = 10;
				printf ("\n10 - EU AMO VOCE! E sei que me ama tambem...\n");
				printf ("Essa certeza me faz sentir uma felicidade que nem sei explicar\n");
				printf ("e esse e o maior e melhor motivo o que cria\n");
				printf ("infinitos outros motivos, para eu querer mais e mais\n");
				printf ("momentos, beijinhos, olhares, toques, felicidade\n");
				printf ("juntinho com voce... Hoje e por todos os dias mais...\n");
				printf ("\nFELIZ PRIMEIRO DIA DOS NAMORADOS MEU AMORZINHO!!!\n");
				printf ("\nDa sua namorada Danadinha e programadora haha... Vanessinha!\n");
				printf ("12/06/2016 Dia dos namorados!!! S2\n");
				
				break;		
			default:
			printf ("Escolhe a opcao certa Danadinho!!!!! =/ ");
			
				break;		
		}
	}

}
