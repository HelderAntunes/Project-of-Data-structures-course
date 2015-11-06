/*
 * Contacto.h
 * Author: Helder Antunes
 */

#ifndef SRC_CONTACTO_H_
#define SRC_CONTACTO_H_

#include "Anuncio.h"
#include <string>
#include <iostream>



/**@class Contacto
 * @brief contact between two persons
 */
class Contacto {
private:
	Utilizador* anunciante;    /**< pointer to advertiser */
	Utilizador* pessoaInt;    /**< pointer to interested person */
	Anuncio* anuncio;		/**< pointer to add */
	string mensagem;    /**< message of interested person to advertiser */
	string numTel_pessoaInt;  /**< phone number of interested person */
	bool concretizado;   /**< reveals if trade is concretized */
	float montanteNegociado;  /** money negotiated */
	Data dataNegociada;   /** data of negotiation */
public:
	Contacto(Utilizador* anunciante,Utilizador* pessoaInt,Anuncio* anuncio,
			string mensagem, string numTel_pessoaInt);
	void setAnuncioPtr_toNull();
	Anuncio* getAnuncio();
	Utilizador* getAnunciante();
	Utilizador* getPessoaInteressada();
	string getMensagem();
	string getNumTel_PessoaInt();
	float getMontanteNegociado();
	Data getDataNegociada();
	void setAnunciantePtr_toNull();
	void setPessoaInteressadaPtr_toNull();
	void concretizaNegocio(int montanteNegociado, Data data);
	bool negocioEstaConcretizado();
	void imprimeContacto();
	void imprimeNegocioConcretizado();
	virtual ~Contacto();
};


#endif /* SRC_CONTACTO_H_ */