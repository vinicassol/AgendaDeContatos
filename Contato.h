#include <iostream>
#include <string>
using namespace std;

#ifndef CONTATO_H
#define CONTATO_H

class Contato
{
public:
	void SetNome(string nome);
	void SetEndereco(string endereco);
	void SetTelefone(string telefone);
	void SetAniversario(string aniversario);
	void SetEmail(string email);
	string GetNome();
	string GetEndereco();
	string GetTelefone();
	string GetAniversario();
	string GetEmail();

	void MostrarDetalhes();

protected:
	string nome;
	string endereco;
	string telefone;
	string aniversario;
	string email;
};

#endif // !CONTATO_H