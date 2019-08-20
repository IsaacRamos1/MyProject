#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <locale.h>

void frontEnd () {
	
	printf("=================================================================\n");
	printf("========================___________==============================\n");
	printf("=======================|           |=============================\n");
	printf("=======================|  *PUSHEEN |=========(o-o)===============\n"); // alterado e atualizado!!!! Consegui dessa vez
	printf("=======================|  *PUSHEEN |=========(o-o)===============\n");
	printf("=======================|    QUIZ*  |=============================\n");
	printf("=======================|___________|=============================\n");
	printf("================== WHITCH PUSHEEN ARE YOU? ======================\n");
	printf("=================================================================\n");
	printf("=================================================================\n");
	printf("created by Isaac Ramos===========================================\n");
	return;
}

void Cor(){
	char comando[9] = "color ";
	char cores[2];
	//comando de regionalização
	setlocale(LC_ALL, "Portuguese");
	//titulo do programa
	SetConsoleTitle("Cores com system");
	
	printf("Tabela de cores:\n\n");
	printf("\t0 - Preto\t8 - Cinza\n");
	printf("\t1 - Azul\t9 - Azul Claro\n");
	printf("\t2 - Verde\tA - Verde Claro\n");
	printf("\t3 - Verde Água\t8 - Verde Água Claro\n");
	printf("\t4 - Vermelho\tC - Vermelho Claro\n");
	printf("\t5 - Roxo\tD - Lilás\n");
	printf("\t6 - Amarelo\tE - Amarelo Claro\n");
	printf("\t7 - Branco\tF - Branco Brilhante\n");
	
	printf("\n\nCor de Fundo: ");
	scanf("%c", &cores[0]);
	getchar();
	
	printf("Cor do texto: ");
	scanf("%c", &cores[1]);
	
	strcat(comando, cores);
	system(comando);
}

void gotoxy(int x, int y){
  COORD coord;
  coord.X = x;
  coord.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main (){
	char resp[5], x, y, I;
	int i, a,b;
	a = 550;
	
	Cor();
	system("cls");
	
	frontEnd();
	
	printf("                    PRESS Y TO START!       ");
	scanf("%s", &I);
	
	if(I == 'Y'|| I == 'y'){
	
	system("cls");
	
	printf("\n1.It's snack time! What will you eat?\n a.Toast\n b.Cotton Candy\n c.Rainbow Cookie\n d.Vegetables\n"); //pergunta 1
	scanf("%s", &resp[0]);
	
	if(resp[0] == 'a' || resp[0] == 'b' || resp[0] == 'c' || resp[0] == 'd'){
		
	printf("\n2.How would you describe yourself?\n a.Beautiful\n b.Strange\n c.Funny\n d.Shy\n"); // pergunta 2
	scanf("%s", &resp[1]);
	}
	else{ printf("resposta nao compativel!");
		return 0;
	}
	
	if(resp[1] == 'a' || resp[1] == 'b' || resp[1] == 'c' || resp[1] == 'd'){  
	
	printf("\n3.You have the day off, what will you do with it?\n a.Take a walk outside\n b.Get your hair done\n c.Spend all day at home in your PJs\n d.Help others\n"); //pergunta 3
	scanf("%s", &resp[2]);
	}
	else{ printf("resposta nao compativel");
		return 0;
	}
	
	if(resp[2] == 'a' || resp[2] == 'b' || resp[2] == 'c' || resp[2] == 'd'){
		
	printf("\n4.Which color do you prefer?\n a.Purple\n b.Yellow\n c.Pink\n d.Red\n\n"); //pergunta 4
	scanf("%s", &resp[3]);
	}	
	else{ printf("resposta nao encontrada");
		return 0;
	}
	if(resp[3] == 'a' || resp[3] == 'b' || resp[3] == 'c' || resp[3] == 'd'){
	srand(time(NULL));
	
	x = rand()%5;
	system("cls");
	Sleep(300);
	
	if(x == 0){
	for(i=0; i < 10; i++){
    	gotoxy(3,7);
    	printf(" NORMAL PUSHEEN ( 'o') ");
    	Sleep(a);
    	system("cls");
	
    	gotoxy(8,7);
    	printf(" NORMAL PUSHEEN ( 'o') ");
    	Sleep(a);
    	system("cls");
}
}
	if(x == 1){
	  for(i=0; i < 10; i++){
    	gotoxy(3,7);
    	printf(" PUSHEENOSSAURUS 3c3(>o <) ");
    	Sleep(a);
    	system("cls");
	
    	gotoxy(8,7);
    	printf(" PUSHEENOSSAURUS 3c3(>o <) ");
    	Sleep(a);
    	system("cls");
}
}
	if(x == 2){
	
		//printf("             *#^-^*# PUSHEENICORN\n");
		for(i=0; i < 10; i++){
    	gotoxy(3,7);
    	printf(" *#^-^*# PUSHEENICORN ");
    	Sleep(a);
    	system("cls");
	
    	gotoxy(8,7);
    	printf("  PUSHEENICORN *#^-^*# ");
    	Sleep(a);
    	system("cls");
}
}
	if(x == 3){
		//printf("          sS(^o^)Ss PUSHEEN MERMAID\n");
		for(i=0; i < 10; i++){
    	gotoxy(3,7);
    	printf(" sS(^o^)Ss PUSHEEN MERMAID ");
    	Sleep(a);
    	system("cls");
	
    	gotoxy(8,7);
    	printf("  PUSHEEN MERMAID sS(^o^)Ss ");
    	Sleep(a);
    	system("cls");
}		
}
	if(x == 4){
		//printf("           (^>o<^) DRAGONPUSHEEN\n");
		for(i=0; i < 10; i++){
    	gotoxy(3,7);
    	printf(" (^>o<^) DRAGONPUSHEEN ");
    	Sleep(a);
    	system("cls");
	
    	gotoxy(8,7);
    	printf("  DRAGONPUSHEEN (^>o<^) ");
    	Sleep(a);
    	system("cls");
}
	}
}
else{
	printf("resposta nao encontrada");
	return 0;
}
}
else{ 
	return 0;
}
	
system("PAUSE");
return 0;

}

