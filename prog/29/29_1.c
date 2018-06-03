#include <stdio.h>
#include <string.h>
#define n 5

typedef enum{
	ACYP=0, ACYTP, ACYTO, ACYMIV, ACOI
}acy;

typedef enum{
	BOREC=0, DERJINEC, DINAMO, MANOMASTER, COMPRESSOR, ZIL
}zavod;

int main(){
	acy M;
	zavod i;
	char name[10];
	int TABL[n], k=0, Flag=0;
	for(i = BOREC; i<=ZIL; i++){
		printf("Vvedite chislo ot 1 do 5\n");scanf("%d", &M);
		switch(M){
			case 1: TABL[i]=ACYP;break;
			case 2: TABL[i]=ACYTP;break;
			case 3: TABL[i]=ACYTO;break;
			case 4: TABL[i]=ACYMIV;break;
			case 5: TABL[i]=ACOI;break;
			default: printf("\nNedopustimoe znachenie\n");break;}}
	for(M = ACYP; M<=ACOI; M++){
		switch(M){
			case 0: printf("\nACYP ");break;
			case 1: printf("\nACYTP ");break;
			case 2: printf("\nACYTO ");break;
			case 3: printf("\nACYMIV ");break;
			case 4: printf("\nACOI ");break;}
		printf("Изготовил ");
		for(i = BOREC; i<=ZIL; i++){
			if(TABL[i]==M){
				k++;
				switch(i){
					case 0: printf("BOREC ");break;
					case 1: printf("DERJINEC ");break;
					case 2: printf("DINAMO ");break;
					case 3: printf("MANOMASTER ");break;
					case 4: printf("COMPRESSOR ");break;
					case 5: printf("ZIL ");break;}}}
		if(k>1){
				Flag = 1;
				k=0;}
			else k=0;
		}
	if(Flag) printf("\nTrue\n");
	else printf("\nFalse\n");
}