# Calculadora Turbo

Programa que realiza o cálculo com 4 operações básicas

Instale o Dev C++;
Sistema Operacional: Windows 10;
Desenvolvido em C
Autor: Matheus Alexsander da Cruz
Data: 14/11/2021

O sistema possui as seguintes bibliotecas:

#include<stdio.h>
#include <stdlib.h>

O sistema possui as seguintes variáveis declaradas:

int main()

{
   float numb, numb2, resultado;
   char operacao;
   int valor = '=', C = 'c';
   int loop = 0;
   
O sistema possui um ponto de salto:

inicio1:

O sistema possui a entrada do primeio valor da operação:

scanf("%f",&numb);

Após a entrada do primeiro valor, é inserido no programa a função while para realizar o cálculo contínuo:

 while(loop == 0)
   
{

É inserido outro ponto de salto:

inicio:

O sistema possui a entrada de valor para a operação matemática:

scanf("%s",&operacao);

Após a entrada de valor da operação, é inserida a função if e else if para os botões '=' e 'C'.

    if(operacao == valor){
    printf("%.2f", resultado);
    return 0;}
	
	else if(operacao == C){
    system("cls");
    goto inicio1;}
 
O sistema possui a entrada do segundo valor da operação:

scanf("%f",&numb2);
   
   if(numb2 == C){
    system("cls");
    goto inicio1;}
    
O sistema possui a função switch case para as operações básicas de matemática:

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

O sistema possui a função return 0 para congelar a tela ao final do programa.

}

return 0;

}
