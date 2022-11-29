#include <stdio.h>
#include <math.h>

void area()
{
	
	int a, L;
	printf("Escribe la longitud del lado del cuadrado: ");
    scanf("%d", &L);
    a = (L*L);
    printf("El area del cuadrado: %d", a);
    
}

void perimetro()
{
	
	int p, l;
	printf("Escribe la longitud del lado del cuadrado: ");
	scanf("%d", &l);
	p = (4*l);
	printf("El perimetro del cuadrado: %d", p);
	
}

int main ()
{
        char opc;
        printf("\na) Area de un cuadrado: ");
        printf("\nb) Perimetro de un cuadrado; ");
        printf("\nElige una opcion: ");
        scanf("%c", &opc);
		
        
		switch(opc)
        {
                case 'a': area();
                        break;

                case 'b': perimetro();
                        break;

        }
        return 0;
}
