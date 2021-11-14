#include<stdio.h>
#include <stdlib.h>

//C limpa tudo
//CE limpa valor atual

int main()

{
   float numb, numb2, resultado;
   char operacao;
   int valor = '=', C = 'c';
   int loop = 0;
   
   inicio1:
   
   scanf("%f",&numb);
    
   while(loop == 0)
   
{

	inicio:
	
   scanf("%s",&operacao);
   
    if(operacao == valor){
    printf("%.2f", resultado);
    return 0;}
	
	else if(operacao == C){
    system("cls");
    goto inicio1;}
    
   scanf("%f",&numb2);
   
   if(numb2 == C){
    system("cls");
    goto inicio1;}
    
    switch(operacao)
    
{
    
    case '+':
    resultado = (numb + numb2);
    printf(" = %.2f \n",resultado);
    break;

    case '-':
    resultado = (numb - numb2);
    printf(" = %.2f \n",resultado);
    break;

	case '*':
    resultado= (numb * numb2);
    printf(" = %.2f \n",resultado);
    break;

    case '/':
    resultado = (numb / numb2);
    printf(" = %.2f \n",resultado);
    break;

    default:
    printf("Operacao invalida \n");
	break;
	
    numb = resultado;
    
    goto inicio;

}

}

return 0;

}
