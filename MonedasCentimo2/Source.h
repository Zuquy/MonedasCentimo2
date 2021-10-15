#include <vector>
#include <cmath>
#include <iostream>

using namespace std;
class Source
{
	private:
		vector<int> monedas{200, 100, 50, 20, 10, 5, 2, 1 };
		vector<string> nombreMonedas{ "2 Euros", "1 Euro", "50 centimos", "20 Centimos", "10 centimos", "5 Centimos", "2 Centimos", "1 Centimo" };
		int dinero;
	public:
		Source(int);
		void organizarDinero();
};
Source::Source(int _dinero) {
	dinero = _dinero;
}
void Source::organizarDinero() {

	int i = 0;
	int longSize = monedas.size();
	int monedasRes = 0;
	cout << "Se requiere \n";
	while (i < longSize)
	{
		monedasRes = trunc(dinero / monedas[i]);
		dinero = dinero - (monedasRes * monedas[i]);
		cout<< monedasRes<< " de " << nombreMonedas[i]<<"\n";
		i = i + 1;
	}
}

