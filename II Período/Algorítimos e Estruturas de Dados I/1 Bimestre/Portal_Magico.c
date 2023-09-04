#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

// Portais Mágicos que emitem Cristais Bituca (B$)

int PortalMagico(int saque) {
	
	int cristais[7] = {200.00, 100.00, 70.00, 50.00, 20.00, 10.00, 5.00};
	// vermelho = 0, azul = 1, amarelo = 2, verde = 3, preto = 4, branco = 5, rosa = 6
	int sobrou = saque;
	
	int cristal_vermelho, cristal_azul, cristal_amarelo, cristal_verde, cristal_preto, cristal_branco, cristal_rosa;
	int i = 0;
	//  posiçăo, contador
	
	do {
	    switch(i) {
	        case 0:
	            cristal_vermelho = sobrou / cristais[i];
	            sobrou = sobrou % cristais[i];
	            i++;
	        case 1:
	            cristal_azul = sobrou / cristais[i];
	            sobrou = sobrou % cristais[i];
	            i++;
	        case 2:
	            cristal_amarelo = sobrou / cristais[i];
	            sobrou = sobrou % cristais[i];
	            i++;
	        case 3:
	             cristal_verde = sobrou / cristais[i];
	             sobrou = sobrou % cristais[i];
	             i++;
	        case 4:
	            cristal_preto = sobrou / cristais[i];
	            sobrou = sobrou % cristais[i];
	            i++;
	        case 5:
	            cristal_branco = sobrou / cristais[i];
	            sobrou = sobrou % cristais[i];
	            i++;
	        case 6:
	            cristal_rosa = sobrou / cristais[i];
	            sobrou = sobrou % cristais[i];
	            i++;      
	    }
	    
	    printf("Vocę sacou B$ %d e recebeu: \n", saque);
	    printf("\n %d cristais vermelhos", cristal_vermelho);
	    printf("\n %d cristais azuis", cristal_azul);
	    printf("\n %d cristais amarelos", cristal_amarelo);
	    printf("\n %d cristais verdes", cristal_verde);
	    printf("\n %d cristais pretos", cristal_preto);
	    printf("\n %d cristais brancos", cristal_branco);
	    printf("\n %d cristais rosa", cristal_rosa);
	    
	} while (sobrou != 0);
	
}

void main() {
	
	int saque;
	
	printf("|| Portal Mágico de Cristais Bituca ||");
	fflush(stdin);
	printf("\n\nInsira quantos B$ deseja sacar: ");
	scanf("%d", &saque);
	
	PortalMagico(saque);
	
}
