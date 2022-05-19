#include "Contato.h"

void Contato::SetNome(string nome)
{
	this->nome = nome;
}
void Contato::SetEndereco(string endereco)
{
	this->endereco = endereco;
}
void Contato::SetTelefone(string telefone)
{
	this->telefone = telefone;
}
void Contato::SetAniversario(string aniversario)
{
	this->aniversario = aniversario;
}
void Contato::SetEmail(string email)
{
	this->email = email;
}

string Contato::GetNome()
{
	return nome;
}
string Contato::GetEndereco()
{
	return endereco;
}
string Contato::GetTelefone()
{
	return telefone;
}
string Contato::GetAniversario()
{
	return aniversario;
}
string Contato::GetEmail()
{
	return email;
}