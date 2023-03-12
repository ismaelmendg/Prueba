
#include <stdio.h>
int var;
struct Astros{
    char nombre[20];
    char tipo[20];
    float dt;
    char descripcion[50];
};
typedef struct Astros Astro;

int main()
{   int i,total=2;
    Astro ss[15]={{"sol","estrella",123.45,"astro rey"},\
                  {"mercurio","planeta",234.2,"planeta más cálido"}
        
                 };
    
    while(1)
    {
        for(i=0;i<total;i++)
        {
            printf("%i) %s\n",i+1,ss[i].nombre);
        }
    printf("%i) Agregar\n",i+1);
    printf("%i) Salir\n",i+2);
    
    scanf("%i", &var);
    
        if(var == (i+2))
        {
            break;
        }
        else if(var<total)
        {   
            printf("%s es %s y esta a %f de la tierra, se conoce como:%s\n", ss[var-1].nombre,\
            ss[var-1].tipo, ss[var-1].dt, ss[var-1].descripcion);
        }
        
    }
    return 0;
}
