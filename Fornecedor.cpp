#include "Fornecedor.h"

void Fornecedor::SetIndiceQualidade(int ic)
{
	indiceQualidade = ic;
}
int Fornecedor::GetIndiceQualidade()
{
	return indiceQualidade;
}

void Fornecedor::MostrarDetalhes()
{
	Contato::MostrarDetalhes();
	cout << "Indice de qualidade: " << indiceQualidade << endl;
}