#include "Contato.h"

//cliente herda de contato
class Cliente : public Contato
{

public:
	void setDataUltimaCompra(string _dataUltimaCompra);
	void setStatusFidelidade(string _statusFidelidade);
	string getDataUltimaCompra();
	string getStatusFidelidade();
	void MostrarDetalhes();

private:
	string dataUltimaCompra;
	string statusFidelidade;
};



