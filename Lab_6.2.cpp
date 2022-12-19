
#include <iostream>
using namespace std;
int main()
{
	int train;
	cout << "Enter a number of the train: " << endl;
	cin >> train;
	switch (train)
	{
	case 1:
			cout << "This train route: Salwaror - Wankowicza " << endl;
			break;
	case 18:
			cout << "This train route: Czerwone Maki - Krowodrza Gorka" << endl;
			break;
	case 13:
			cout << "This train route: Nowy Biezanow - Bronowice " << endl;
			break;
	case 52:
			cout << "This train route: Czerwone Maki - Piastow " << endl;
			break;
	case 17:
			cout << "This train route: Dworzec Towarowy - Czerwone Maki" << endl;
			break;
	case 8:
			cout << "This train route: Bronowice Male - Borek Falecki " << endl;
			break;
	case 22:
			cout << "This train route: Krzeslawickie - Borek Falecki" << endl;
			break;

		default:
			cout << "This route doesn`t exists" << endl;
			break;
	}
}

