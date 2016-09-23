#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float presupuesto,traumatologia,ginecologia,pediatria;
	int continuar;
	system("cls");
	fflush(stdin);
	system("color F2");
	do{
		printf("\t\t\t\t\tPresupuesto de un Hospital\t\t\t\t\t");
		printf("\n\n\t\tIngrese monto presupuestal: ");
		scanf("%f",&presupuesto);
		ginecologia=(presupuesto*40)/100;
		traumatologia=(presupuesto*30)/100;
		pediatria=(presupuesto*30)/100;
		printf("\n\t\tLa cantidad de dinero para Ginecolog%ca es: %.2f",141,ginecologia);
		printf("\n\t\tLa cantidad de dinero para Traumatolog%ca es: %.2f",141,traumatologia);
		printf("\n\t\tLa cantidad de dinero para Pediatr%ca es: %.2f",141,pediatria);
		printf("\n\n\t\Introduce (0) para volver a iniciar: ");
		scanf("%d",&continuar);
		system("cls");
	}
	while(continuar==0);
	printf("\t\t\t\t\tPresupuesto de un Hospital\t\t\t\t\t");
	printf("\n\n\n\t\t\t\t\t---Do Sv%cdan%cya---",141,141);
	
	return 0;
}
