#include <iostream>
#include <cmath>
using namespace std;

int main(){
	string NdI;
	float LPA;
	float VPA;
	float VDA;
	cout << "Vamos analisar se compensa comprar as ações da impresa: \nQual o nome da impresa?(Em sigla)\n";
	cin >> NdI;
	cout << "(Acesse o site https://statusinvest.com.br/) \nQual é o valor do LPA ?\n";
	cin >> LPA;
	cout << "Qual é o VPA? \n";
	cin >> VPA;
	cout << "Qual é o valor da cota?\n";
	cin >> VDA;
	float VJ = sqrt(22.5* LPA* VPA);
	cout<<"Dados da impresa: \nNome(sigla): " << NdI <<"\nVPA: "<< VPA <<"\nLPA: "<< LPA <<"\nValor da cota: " << VDA <<"\nValor Justo: " << VJ <<"\n\n";
	if(VDA > VJ){
		cout<<"Na impresa "<< NdI <<", não está compensando investir agora, portanto, está boa para vender!";
	}else{
		cout<<"A impresa "<< NdI <<", está compensando comprar, entretanto, está numa situação ruim para vender!";
	}
}
