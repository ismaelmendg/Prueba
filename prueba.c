//Hola mundo
#include <stdio.h>
#include <string.h>

int Nprimo(int primo)
{
    int i = 0;
    //int valor[];
    for(i=2; i<primo; i++)
    {
        if(primo % i == 0)
        {
            printf("\nNo primo \n");
            return 0;
        }
        else
        {
            //printf("No primo\n");
        }
    }
    printf("\nPrimo\n"); 
}

int Cprimo(int primo)
{
    int i = 0, x = 0, temp = 0;

    for(i = 1; i<=primo; i++)
    {
        for(x=2; x<i; x++)
        {
            if(i % x == 0)
            {
                temp = i;                
                break;//No primo
            }
        }
        if(temp == i)
        {

        }
        else
        {
        printf("Primo: %i\n", i);    
        }
    }     
}

/*char *Incadena(char cadena)
{
    int x = 0;
    int longitud = strlen(cadena);
    char *invertida[longitud];

    for(int i = 0; i<= longitud; i++)
    { 
      invertida[x-1] = cadena[i];  
      x--;
    }

    return invertida;
}*/

unsigned char bfnToUpperCase (unsigned char bChar)
{

        if((bChar >= 'a') && (bChar<='z'))
        {
            bChar = bChar - 32;
            //printf("entro\n");
        }else{}
        
    return bChar;
}

unsigned char bfnToLowerCase (unsigned char bChar)
{
        if((bChar >= 'A') && (bChar<='Z'))
        {
            bChar = bChar + 32;
            //printf("entro\n");
        }else{}
        
    return bChar;
}

unsigned char bfnIsPrint (unsigned char bChar)
{
    if(bChar >= 32 && bChar <= 126)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

unsigned char bfnIsHex (unsigned char bChar)
{
    if((bChar>='1'&& bChar<='9')||(bChar>='A'&& bChar<='F'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

unsigned short wfnStrLen (unsigned char* bpString)
{
    int cont = 0;
    while(*bpString != '\0')
    {
        bpString++;
        cont++;
    }

    return cont;
}

unsigned char bfnShiftLeft (unsigned char bData, unsigned char bShift)
{
    if(bShift < 9)
    {
        bData = bData << bShift;
        return bData;
    }
    else
    {
        printf("Error\n");
    }
}

unsigned char bfnShiftRight (unsigned char bData, unsigned char bShift)
{
    if(bShift < 9)
    {
        bData = bData >> bShift; 
    }
    else
    {
        printf("Erro\n");
    }
}

void vfnMemCpy (unsigned char* bpSource, unsigned char* bpDest, unsigned short wSize)
{
    while(*bpSource != '\0')
    {
        *bpSource = *bpDest;
        bpSource++;
        bpDest++;
    }
}

void vfnMemSet(unsigned char* bpDest, unsigned char bByteToFill, unsigned short wSize)
{
    int i = 0;
    while(i <= wSize)
    {
        *bpDest = bByteToFill;
        bpDest++;
        i++;
    }
}

int main()
{
    char cad[] = "Hola";
    unsigned char destino[] = "jeje";
    char min, max;
    int func3, func4, strlen;

    //min = bfnToUpperCase('c');
    //printf("%c\n", min);
    //max = bfnToLowerCase('C');
    //printf("%c\n", max);
    //Cprimo(21);
    //Nprimo(21);
    //func3 = bfnIsPrint('5');
    //printf("%i\n", func4);
    //func4 = bfnIsHex('5');
    //printf("%i", func4);
    //strlen = wfnStrLen(cad);
    //printf("%i", strlen);
    vfnMemSet(destino, '5', 2);
    printf("Dest = %s\n", destino);

}

int filtro(int pot){

	int i, PotFilter;
		for(i=Filtro-1; i>0; i--){
			arreglo[i] = arreglo[i-1];
			}
			arreglo[0] = pot;
			PotFilter = 0;

		for(i=Filtro-1; i>=0; i--){
			PotFilter = PotFilter + arreglo[i];
			}
	pot = PotFilter / Filtro;
	return pot;
}