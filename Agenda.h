/*
* Implementar a classe agenda.
* Esta classe deve ter o menu:
*	1. Cadastrar Contato
*		- Para cadastrar contato, solicitar o tipo de contato a ser criado (Padrao, Cliente, Fornecedor)
*		  e as infos para cadastro

	2. Consultar Contato: Traz os detalhes do contato e possibilita editar/excluir
		-> Atualizar
		-> Excluir

*	3. Listar Contatos
*		-> Listar Todos (Quando escolher todos, deve apresentar apenas os dados basicos (nome, email, telefone, endereco, aniver))
		-> Listar Contatos de Clientes
		-> Listar Contatos de Fornecedores
		-> Listar Contatos Padrão

	4. Encerrar o sistema

*	-> Atualizar o main, para usar a classe agenda.
*	-> É elegante, que no main, tenhamos a criaçao do objeto agenda, e a chamada para um metodo agenda.Executar();
*/

#include "Cliente.h"
#include "Fornecedor.h"
#include <vector>

class Agenda
{
public:
	void Executar();
	//void Finalizar();

private:
	void ConsultarContato();
	void IncluirContato();
	void ListarContatos();
	int MenuPrincipal();
	vector<Contato> contatos;
};