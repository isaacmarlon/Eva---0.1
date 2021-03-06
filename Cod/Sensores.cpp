#include "Sensores.h"

//~~~~~~~~~~~~~~~~~~~~~~~~~ SONAR ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//

bool Sensores::sonarViuObstaculo(int DISTANCIA_OBSTACULO) {
	return (robo.lerSensorSonarFrontal() <= DISTANCIA_OBSTACULO);
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
//~~~~~~~~~~~~~~~~~~~~~~~~~ CASOS ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//

//------------------------------------------------------------------
// Caso "Todos" ----------------------------------------------------
bool Sensores::branco_branco_branco_branco() {
	return(
		maisEsqViuBranco() &&
		esqViuBranco() &&
		dirViuBranco() &&
		maisDirViuBranco()
	);
}

bool Sensores::preto_preto_preto_preto() {
	return(
		maisEsqViuPreto() &&
		esqViuPreto() &&
		dirViuPreto() &&
		maisDirViuPreto()
	);
}

//------------------------------------------------------------------
// Caso "Internos" -------------------------------------------------
bool Sensores::branco_preto_branco_branco() {
	return(
		maisEsqViuBranco() &&
		esqViuPreto() &&
		dirViuBranco() &&
		maisDirViuBranco()
	);
}

bool Sensores::branco_branco_preto_branco() {
	return(
		maisEsqViuBranco() &&
		esqViuBranco() &&
		dirViuPreto() &&
		maisDirViuBranco()
	);
}

//------------------------------------------------------------------
// Caso "Externos" -------------------------------------------------
bool Sensores::preto_branco_branco_branco() {
	return(
		maisEsqViuPreto() &&
		maisEsqViuPreto() &&
		maisEsqViuPreto() &&
		maisEsqViuPreto() &&
		esqViuBranco() &&
		dirViuBranco() &&
		maisDirViuBranco()
	);
}

bool Sensores::branco_branco_branco_preto() {
	return(
		maisEsqViuBranco() &&
		esqViuBranco() &&
		dirViuBranco() &&
		maisDirViuPreto()
	);
}

//------------------------------------------------------------------
// Caso "Duplo" ----------------------------------------------------
bool Sensores::preto_preto_branco_branco() {
	return(
		maisEsqViuPreto() &&
		esqViuPreto() &&
		dirViuBranco() &&
		maisDirViuBranco()
	);
}

bool Sensores::branco_branco_preto_preto() {
	return(
		maisEsqViuBranco() &&
		esqViuBranco() &&
		dirViuPreto() &&
		maisDirViuPreto()
	);
}

//--------------------------------------------------------------------
// Caso "Triplo" -----------------------------------------------------
bool Sensores::preto_preto_preto_branco() {
	return(
		maisEsqViuPreto() &&
		esqViuPreto() &&
		dirViuPreto() &&
		maisDirViuBranco()
	);
}

bool Sensores::branco_preto_preto_preto() {
	return(
		maisEsqViuBranco() &&
		esqViuPreto() &&
		dirViuPreto() &&
		maisDirViuPreto()
	);
}

//--------------------------------------------------------------------
// Caso "Alternados" -------------------------------------------------
bool Sensores::preto_branco_preto_branco() {
	return(
		maisEsqViuPreto() &&
		esqViuBranco() &&
		dirViuPreto() &&
		maisDirViuBranco()
	);
}

bool Sensores::branco_preto_branco_preto() {
	return(
		maisEsqViuBranco() &&
		esqViuPreto() &&
		dirViuBranco() &&
		maisDirViuPreto()
	);
}

//--------------------------------------------------------------------
// Caso "Internos brancos" -------------------------------------------
bool Sensores::preto_preto_branco_preto() {
	return(
		maisEsqViuPreto() &&
		esqViuPreto() &&
		dirViuBranco() &&
		maisDirViuPreto()
	);
}

bool Sensores::preto_branco_preto_preto() {
	return(
		maisEsqViuPreto() &&
		esqViuBranco() &&
		dirViuPreto() &&
		maisDirViuPreto()
	);
}

//-------------------------------------------------------------------
// Caso "Duplo preto" -----------------------------------------------
bool Sensores::branco_preto_preto_branco() {
	return(
		maisEsqViuBranco() &&
		esqViuPreto() &&
		dirViuPreto() &&
		maisDirViuBranco()
	);
}

bool Sensores::preto_branco_branco_preto() {
	return(
		maisEsqViuPreto() &&
		esqViuBranco() &&
		dirViuBranco() &&
		maisDirViuPreto()
	);
}


//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
//~~~~~~~~~~~~~~~~~~~~~~~~~ INDIVIDUAIS ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//

bool Sensores::maisEsqViuBranco() {
	return (robo.lerSensorLinhaEsq2() > 38.5);  
}

bool Sensores::maisEsqViuPreto() {
	return (robo.lerSensorLinhaEsq2() < 38.5);  
}

bool Sensores::esqViuBranco() {
	return (robo.lerSensorLinhaEsq() > 34);  
}

bool Sensores::esqViuPreto() {
	return (robo.lerSensorLinhaEsq() < 34);  
}

bool Sensores::dirViuBranco() {
	return (robo.lerSensorLinhaDir() > 43);  	
}

bool Sensores::dirViuPreto() {
	return (robo.lerSensorLinhaDir() < 43);  		
}

bool Sensores::maisDirViuBranco() {
	return (robo.lerSensorLinhaDir2() > 54);  	
}   

bool Sensores::maisDirViuPreto() {
	return (robo.lerSensorLinhaDir2() < 54);  
} 
