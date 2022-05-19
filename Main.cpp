#include "Cliente.h"
#include "Fornecedor.h"

int main()
{
	Contato contato;
	Cliente cliente;
	Fornecedor fornecedor;

	contato.SetNome("Vini");
	contato.SetTelefone("(51)99988-7877");
	contato.SetEndereco("Porto Alegre");
	contato.SetAniversario("12/02");
	contato.SetEmail("vinicius.cassol@uniritter.edu.br");

	cliente.SetNome("Lucas");
	cliente.SetTelefone("(51)3223-0989");
	cliente.SetEndereco("Porto Alegre");
	cliente.SetAniversario("20/02");
	cliente.SetEmail("lucas@uniritter.edu.br");
	cliente.setDataUltimaCompra("18/05");
	cliente.setStatusFidelidade("Cliente Fiel");

	fornecedor.SetNome("Gabriella");
	fornecedor.SetTelefone("(51)3021-9898");
	fornecedor.SetEndereco("Porto Alegre");
	fornecedor.SetAniversario("21/11");
	fornecedor.SetEmail("gabriela@uniritter.edu.br");
	fornecedor.SetIndiceQualidade(8);

	cout << "\n\nContato Padrao: \n";
	cout << contato.GetNome() << " - " << contato.GetAniversario() << " - " << contato.GetEndereco() << " - ";
	cout << contato.GetEmail() << " - " << contato.GetTelefone() << endl;

	cout << "\n\nContato Cliente: \n";
	cout << cliente.GetNome() << " - "  << cliente.GetAniversario() << " - " << cliente.GetEndereco() << " - ";
	cout << cliente.GetEmail() << " - " << cliente.GetTelefone() << " - " << cliente.getDataUltimaCompra() << " - ";
	cout << cliente.getStatusFidelidade() << endl;

	cout << "\n\nContato Fornecedor: \n";
	cout << fornecedor.GetNome() << " - "  << fornecedor.GetAniversario() << " - " << fornecedor.GetEndereco() << " - ";
	cout << fornecedor.GetEmail() << " - " << fornecedor.GetTelefone() << " - "  <<fornecedor.GetIndiceQualidade() << endl;
}