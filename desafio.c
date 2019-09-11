#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){

char var[3][10] = {"nomes","autores","edição"};
char alph[] = "abcdefghijklmnopqrstuvwz";
char book[4][60] =
	{ "Java How To Program",
	  "Patterns of Enterprise Application Architecture",
	  "Head First Design Patterns",
	  "Internet & World Wide Web: How to Program"
	};

char autor[4][60] = 
	{	"Deitel & Deitel",
		"Martin Fowler",
		"Elisabeth Freeman",
		"Deitel & Deitel"
	};
char edition[4][60] = 
	{	"2007",
		"2002",
		"2004",
		"2007 "
	};
int i,j,m,n,h,p[3][4],prim[4][60],number[4],l,k,u,s,temp,a,b,ano[4];

for(n=0;n<3;n++){
for(h=0;h < 4;h++){
	
	p[n][h] = (h+1);
	if (n==1)
		strcpy(book[h], autor[h]);
	else if (n==2){
		strcpy(book[h], edition[h]);
		temp = atoi(book[h]);
		ano[h] = temp;}
		  }

if(n==0 || n==1){
/*Sequencia de redução de letras maiusculas para minusculas e em sequencia comparação com alfabeto*/
for(m=0;m < 4;m++){

for(i=0;book[m][i] != '\0';i++){

	if (book[m][i] >= 65 && book[m][i] <= 90)
		book[m][i] = book[m][i] + 32;

	for(j=0;alph[j] != '\0';j++){
		if (book[m][i] == 32)
			prim[m][i] = 0;
		if (book[m][i] == alph[j])
			prim[m][i] = j+1;
				    }
			       }
		  }		 
		 }
for(m=0;m < 4;m++){
	if(n==0 || n==1){
		temp = prim[m][l];
		number[m] = temp;}
	if(n==2){
		temp = ano[m];
		number[m] = temp;}
		  }
/*Aqui começa a seuquencia principal de comparação dos valores e alinhamento de forma crescente*/
   for (j = 0; j < 3; j++)
   {
      for (k = (j + 1); k < 4; k++)
      {
	if (number[j] > number[k])
         {
            temp = p[n][j];
            p[n][j] = p[n][k];
            p[n][k] = temp;

            temp = number[j];
            number[j] = number[k];
            number[k] = temp;
         }
/*Regra de desempate para edição e publicação, é seguir a ordem de títulos*/
		if(number[j] == number[k]){
			if(n != 0){
			a = p[n][j];
			b = p[n][k];
			for(u=0;u<4;u++){
			for(s=0;s<4;s++){
				if(p[(n-1)][s] == b && p[(n-1)][u] == a && u>s){
					temp = p[n][j];
					p[n][j] = p[n][k];
					p[n][k] = temp;
									       }
					}
					}
				  } 	   }
      }
   }		}
for(a=0;a<3;a++){
printf("A sequencia  crescente  de %s é: %i, %i, %i, %i\n",var[a],p[a][0],p[a][1],p[a][2],p[a][3]);
printf("A sequencia decrescente de %s é: %i, %i, %i, %i\n\n",var[a],p[a][3],p[a][2],p[a][1],p[a][0]);	}
	}   
