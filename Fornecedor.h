#include "Contato.h"

class Fornecedor : public Contato
{
public:
	void SetIndiceQualidade(int ic);
	int GetIndiceQualidade();
	void MostrarDetalhes();	

private:
	int indiceQualidade;
};
