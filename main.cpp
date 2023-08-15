#include <iostream>

/* Q13 */

using namespace std;

int main(int argc, char** argv) {
	
	double valorHora, horasTrabalhadas;
	double impostoDeRenda;
	double inss;
	double sindicato;
	double salarioBruto, salario;
	
	cout << "Digite quanto ganha por hora trabalhada:";
	
	cin >> valorHora;
	
	cout << "Digite a quantidade de horas trabalhadas:";
	
	cin >> horasTrabalhadas;
	
	salarioBruto = valorHora * horasTrabalhadas;
	
	impostoDeRenda = salarioBruto * 0.11;
	inss = salarioBruto * 0.08;
	sindicato = salarioBruto * 0.05;
	
	salario = salarioBruto - impostoDeRenda - inss - sindicato;
	
	cout << "Salario total:" << salario << endl;
	system("pause");
	return 0;
}
