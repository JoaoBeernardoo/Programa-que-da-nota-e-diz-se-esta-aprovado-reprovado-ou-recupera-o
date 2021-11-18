#include <stdio.h>

main(){
	int nota1, nota2, nota3, media;
	printf("COLOQUE SUA PRIMEIRA NOTA ");
	scanf("%d", &nota1);
	printf("COLOQUE SUA SEGUNDA NOTA ");
	scanf("%d", &nota2);
	printf("COLOQUE SUA TERCEIRA NOTA ");
	scanf("%d", &nota3);
	media=(nota1+nota2+nota3)/3;
	printf(" SUA MEDIA EH, %d", media);
	
	if(media<5){
		printf(" VOCE ESTA REPROVADO");
	}
	else{
		if(media<7){ 
		printf(" VOCE ESTA DE RECUPERACAO");
        
		}
		else{
			printf(" VOCE ESTA APROVADO");
		}
		}
	
}
