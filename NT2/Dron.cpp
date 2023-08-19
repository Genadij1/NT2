#include "Dron.h"
int main()
{
	string runs;
	int P;
	Dron h;
	cout << "Hello I am Dron!\nIf you want to run me enter - 1\nIf you want know about me enter - 2" << endl;
	cin >> P;
	switch (P)
	{
	case 1:
		h.SetPower(P);
		break;
	case 2:
		h.GetCharge();
		cout << endl;
		h.GetHeightDron();
		cout << endl;
		h.GetBlades();
		cout << endl;
		h.GetCam();
		cout << endl;
		h.GetLongDron();
		cout << endl;
		h.GetWidthDron();
		cout << endl;
		h.GetZeroWeight();
		cout << endl;
		cout << "Run?(yes/no)";
		cin >> runs;
		if (runs == "yes"&&"Yes")
		{
			h.SetPower(1);
		}
		else
		{
			h.SetPower(0);
		}
		break;
	default:
		cout << "Try again!";
		break;
	}
	system("pause>nul");
	return 0;
}