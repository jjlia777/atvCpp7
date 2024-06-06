#include <iostream>
#include <locale>

using namespace std;

// EXERCÍCIO 1

//int salario(int horas, int valor) {
//    return horas * valor;
//}
//
//int main() {
//    locale::global(locale("pt_BR.UTF-8"));
//
//    int number, horas, valor;
//    cout << "Qual seu número na empresa?: ";
//    cin >> number;
//    cout << "Digite as horas trabalhadas no mês: ";
//    cin >> horas;
//    cout << "Quanto você ganha por hora?: ";
//    cin >> valor;
//    int resposta = salario(horas, valor);
//    cout << "O salário do funcionário " << number << " é de " << resposta << endl;
//}

// EXERCICIO 2

//int totalPagar (int quant1, int quant2, int valor1, int valor2 ) {
//	return (quant1 * valor1) + (quant2 * valor2);
//}
//	
//int main() {
//	locale::global(locale("pt_BR.UTF-8"));
//	
//	int quant1, quant2, valor1, valor2;
//
//	cout << "Qual a QUANTIDADE do produto 1?: ";
//	cin >> quant1;
//	cout << "Qual o VALOR do produto 1?: ";
//	cin >> valor1;
//
//	cout << "Qual a QUANTIDADE do produto 2?: ";
//	cin >> quant2;
//	cout << "Qual o VALOR do produto 2?: ";
//	cin >> valor2;
//
//	int resposta = totalPagar(quant1, quant2, valor1, valor2);
//	cout << "O total a ser pago é de R$ " << resposta << endl;
//}


// EXERCICIO 3

//int main() {
//    locale::global(locale("pt_BR.UTF-8"));
//
//    double A, B, C;
//    const double PI = 3.14159;
//
//    cout << "Digite o valor de A: ";
//    cin >> A;
//    cout << "Digite o valor de B: ";
//    cin >> B;
//    cout << "Digite o valor de C: ";
//    cin >> C;
//
//    // Área do triângulo retângulo
//    double areaTriangulo = A * C / 2.0;
//    cout << "A área do triângulo retângulo é: " << areaTriangulo << endl;
//
//    // Área do círculo
//    double areaCirculo = PI * C * C;
//    cout << "A área do círculo é: " << areaCirculo << endl;
//
//    // Área do trapézio
//    double areaTrapezio = (A + B) / 2.0 * C;
//    cout << "A área do trapézio é: " << areaTrapezio << endl;
//
//    // Área do quadrado
//    double areaQuadrado = B * B;
//    cout << "A área do quadrado é: " << areaQuadrado << endl;
//
//    // Área do retângulo
//    double areaRetangulo = A * B;
//    cout << "A área do retângulo é: " << areaRetangulo << endl;
//
//    return 0;
//}
