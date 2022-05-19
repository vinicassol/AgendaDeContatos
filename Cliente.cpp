#include "Cliente.h"

void Cliente::setDataUltimaCompra(string _dataUltimaCompra)
{
	dataUltimaCompra = _dataUltimaCompra;
}
void Cliente::setStatusFidelidade(string _statusFidelidade)
{
	statusFidelidade = _statusFidelidade;
}

string Cliente::getDataUltimaCompra()
{
	return dataUltimaCompra;
}
string Cliente::getStatusFidelidade()
{
	return statusFidelidade;
}