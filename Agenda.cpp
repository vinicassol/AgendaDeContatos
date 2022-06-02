#include "Agenda.h"

int Agenda::MenuPrincipal()
{
	int op;

	cout << " ===  M E N U  === \n\n";
	cout << "1. Cadastrar Contato \n";
	cout << "2. Consultar Contato\n";
	cout << "3. Lista de Contatos\n";
	cout << "4. Encerrar o Sistema\n";

	cout << "\nContatos na agenda: " << contatos.size() << endl;
	cout << "\n Escolha a opcao desejada: ";
	cin >> op;

	return op;
}

void Agenda::Executar()
{
	int op = 0;
	do
	{
		system("cls");// no Linux (replit) usar "clear"
		op = MenuPrincipal();

		switch (op)
		{
		case 1:
			IncluirContato();
			break;
		case 2:
			ConsultarContato();
			break;
		case 3:
			ListarContatos();
			break;
		case 4:
			cout << "Ateh logo!\n";
			break;
		default:
			cout << "Opcao Invalida!\n";
		}
		system("pause");



	} while (op != 3);

}

void Agenda::IncluirContato()
{
	string nome, endereco, aniver, email, telefone;
	string dataCompra, statusFidelidade;
	int indiceQualidade;
	char tipo;

	cout << "Qual o nome? ";
	cin >> nome;
	cout << "Qual o endereco? ";
	cin >> endereco;
	cout << "Qual aniversario: ";
	cin >> aniver;
	cout << "Qual o e-mail: ";
	cin >> email;
	cout << "Qual o telefone? ";
	cin >> telefone;

	cout << "O contato eh um cliente? (S/N) ";
	cin >> tipo;

	if (tipo == 'S') // se for Contato cliente
	{
		cout << "Data da ultima compra: ";
		cin >> dataCompra;
		cout << "Qual o status de Fidelidade? ";
		cin >> statusFidelidade;
		Cliente contatoCliente;
		contatoCliente.SetNome(nome);
		contatoCliente.SetEndereco(endereco);
		contatoCliente.SetAniversario(aniver);
		contatoCliente.SetEmail(email);
		contatoCliente.SetTelefone(telefone);
		contatoCliente.setDataUltimaCompra(dataCompra);
		contatoCliente.setStatusFidelidade(statusFidelidade);

		contatos.push_back(contatoCliente);
	} 
	else
	{
		cout << "Eh fornecedor: ";
		cin >> tipo;
		if (tipo == 'S') // Contato Fornecedor
		{
			cout << "Informe indice de qualidade: ";
			cin >> indiceQualidade;
			Fornecedor contatoFornecedor;
			contatoFornecedor.SetNome(nome);
			contatoFornecedor.SetEndereco(endereco);
			contatoFornecedor.SetAniversario(aniver);
			contatoFornecedor.SetEmail(email);
			contatoFornecedor.SetTelefone(telefone);
			contatoFornecedor.SetIndiceQualidade(indiceQualidade);
			
			contatos.push_back(contatoFornecedor);

		}
		else // Contato Padrão
		{
			Contato contatoPadrao;
			contatoPadrao.SetNome(nome);
			contatoPadrao.SetEndereco(endereco);
			contatoPadrao.SetAniversario(aniver);
			contatoPadrao.SetEmail(email);
			contatoPadrao.SetTelefone(telefone);

			contatos.push_back(contatoPadrao);
		}
	}
}


void Agenda::ListarContatos()
{
	for (int i = 0; i < contatos.size(); i++)
	{
		contatos[i].MostrarDetalhes();
	}
}

void Agenda::ConsultarContato()
{
	//Perguntar o nome
	//Percorrer o vetor e compar com o nome de busca
	//Quando encontrar, mostrar os detalhes
	//Perguntar se deseja atualizar ou excluir

	
}