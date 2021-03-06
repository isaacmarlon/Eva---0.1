#include "Calibracao.h"

Calibracao::Calibracao() {
	estiverCalibrando = true;
	minimoEsq2 = 9999;
	minimoEsq = 9999;
	minimoDir = 9999;
	minimoDir2 = 9999;
}

void Calibracao::run(){
	menuCalibracao();
}

void Calibracao::menuCalibracao(){
	char escolha = ' ';
	while (estiverCalibrando) {
		Serial.println("[--+ MENU CALIBRACAO +--]");
		Serial.println();
		Serial.println("O QUE DESEJAS SENHOR?");
		Serial.println();
		Serial.println("[B] MINIMO BRANCO.");
		Serial.println("[P] MAXIMO PRETO.");
		Serial.println("[S] SAIR.");
		esperarParaLer();
		escolha = Serial.read();

		switch (escolha) {
			case 'B':
				minimoBranco();
				break;
			case 'P':
			 	maximoPreto();
			 	break;
			case 'S':
				estiverCalibrando = false;
		}
	}
}

/*
void Calibracao::minimoBranco(){
	char escolha = ' ';
	while (1){
		Serial.println("CALIBRAR MINIMO BRANCO: ");
		Serial.println();
		Serial.println("POSICIONES OS SENSORES NO BRANCO!");
		Serial.println();
		Serial.println("INSIRA QUALQUER COISA PARA PEGAR OS VALORES");
		Serial.println("[S] VOLTAR");
		Serial.println();
		Serial.print("R = ");
		esperarParaLer();
		escolha = Serial.read();
		
		if (escolha == 'S') menuCalibracao();
		else calculeMinimo(robo.lerSensorLinhaEsq2(),robo.lerSensorLinhaEsq(),robo.lerSensorLinhaDir(),robo.lerSensorLinhaDir2);
	}
}
*/

void Calibracao::maximoPreto(){}

void Calibracao::calculeMinimo(int valorEsq2,int valorEsq,int valorDir,int valorDir2){
	if (valorEsq2 < minimoEsq2) {
		minimoEsq2 = valorEsq2;
	}
	if (valorEsq < minimoEsq) {
		minimoEsq = valorEsq;
	}
	if (valorDir < minimoDir) {
		minimoDir = valorDir;
	}
	if (valorDir2 < minimoDir2) {
		minimoDir2 = valorDir2;
	}
}


void Calibracao::esperarParaLer(){
	while(!Serial.available()){}
}


