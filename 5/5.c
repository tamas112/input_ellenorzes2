#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 128

int getline(char s[],int lim);




void main(void){
	char c;
	int j,i,hossz;
	char szoveg[MAX];
	char s[MAX];

	/*
	//s="Alma"; helyett
	strcpy(s,"Alma");
	printf("A megadott szoveg:  '%s'\n",s);

	hossz = strlen(s);  //sztring copy hossz
	printf("%d a hossza\n",hossz);

	if (strcmp(s,"Alma")== 0){ //Ha a ket szoveg megegyezik, rendez�sre is haszn�lhat�: negat�v sz�mot ad ha egyik sz�veg a nagyobb, pozit�vat ha a m�sik
		printf("A ket szo megegyezik.");
	}

	if (strstr(s,"lm") != NULL){
		printf("s-ben szerepel az \"lm\" szo\n");
	}
	*/


	printf("Kerem a szoveget, kitorlom belole a szamokat: ");
	hossz =getline(s,MAX);

	for (i=0;i<hossz;i++){
		if (isdigit(s[i])){
			for (j=i;j<hossz;j++){
				s[j]=s[j+1];
			}
			hossz--;
			i--;
		}
	}

	printf("A torles utani szoveg:  '%s'\n",s);
	
	getchar();
}

int getline(char s[],int lim)
{
	int i,c;
	for(i=0; i<lim && (c=getchar())!=EOF && c!='\n'; ++i) s[i]=c;
	s[i]='\0';
	while(c!=EOF && c!='\n') c=getchar();
	return i;
}