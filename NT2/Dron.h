#include <iostream>
#include <chrono>
#include <thread>
#include <cstdlib>
#include <ctime>
using namespace std;

class Dron
{
private:
	int Cam = 2;
	const int Blades = 4;
	const double Blade²wing = 9.5;
	const double WidthDron = 25.9;
	const int HeightDron = 8;
	const double LongDron = 34.9;
	const double ZeroYCoordinates = 0;
	const double ZeroXCoordinates = 0;
	const double ZeroZCoordinates = 0;
	const double ZeroWeight = 1.2;
	string Power;
	int Charge = 100;
	double BladeAngleY = 0.0;
	double BladeAngleX = 0.0;
	string BladeRotationFrequency_AC;
	string BladeRotationFrequency_BD;
	double YÑoordinates = 0;
	double ZCoordinates = 0;
	double XCoordinates = 0;
	string Payload;
public:

	void GetYCoordinates()
	{
		cout << "Y-Coordinates = " << YÑoordinates;
	}
	void GetZCoordinates()
	{
		cout << "Z-Coordinates = " << ZCoordinates;
	}
	void GetXCoordinates()
	{
		cout << "X-Coordinates = " << ZCoordinates;
	}

	void GetCam()
	{
		cout << "I have " << Cam << " Cam";
	}
	void GetBlades()
	{
		cout << "I have " << Blades << " Blades";
	}
	void GetBlade²wing()
	{
		cout << "I have " << Blade²wing << " Blade²wing";
	}
	void GetWidthDron()
	{
		cout << "I have " << WidthDron << "sm WidthDron";
	}
	void GetHeightDron()
	{
		cout << "I have " << HeightDron << "sm HeightDron";
	}
	void GetLongDron()
	{
		cout << "I have " << LongDron << "sm LongDron";
	}
	void GetZeroWeight()
	{
		cout << "I have " << ZeroWeight << " kg " << "ZeroWeight";
	}
	void GetCharge()
	{
		cout << "I have " << Charge <<" % "<< "Charge";
	}
	
	void SetBladeAngleY(double Y)
	{
		BladeAngleY = Y;
	}
	void SetBladeAngleX(double X)
	{
		BladeAngleX = X;
	}
	void SetYÑoordinates(double Y)
	{
		YÑoordinates += Y;
	}
	void SetXÑoordinates(double X)
	{
		XCoordinates += X;
	}
	void SetZÑoordinates(double Z)
	{
		ZCoordinates += Z;
	}
	void SetCharge()
	{
		Charge -= 5;
	}
	void GetCheckingBlades()
	{
		if (Blades == 4)
		{
			cout << "\033[32mThe blades system check was successful!\033[0m";
		}
		else
		{
			cout << "Dock blades!";
		}
	}
	void GetCheckingCam()
	{
		if (Cam = 2)
		{
			cout << "\033[32mThe Cam system check was successful!\033[0m";
		}
		else
		{
			cout << "Dock Cam!";
		}
	}
	void GetCheckingControl()
	{
	StartY:
		int Y;
		cout << endl << "Enter '8' for checking Y() coordinate control" << endl;
		cin >> Y;
		if (Y == 8)
		{
			SetBladeAngleY(0);
			cout << "BladeAngleX-Y = " << BladeAngleY << " degrees" << endl;
			SetYÑoordinates(1);
			cout << "Y Coordinate = " << YÑoordinates << endl;
			string Z;
		StartW:
			cout << endl << "Enter 'w' or 's' for checking Z() coordinate control" << endl;
			cin >> Z;
			if (Z == "w")
			{
				SetBladeAngleY(15);
				cout << "BladeAngleY = " << BladeAngleY << " degrees" << endl;
				SetZÑoordinates(1);
				cout << "Y Coordinate = " << ZCoordinates << endl;
				SetZÑoordinates(-1);
				SetBladeAngleY(0);
				cout << "BladeAngleY = " << BladeAngleY << " degrees" << endl;
			}
			else if (Z == "s")
			{
				SetBladeAngleY(-15);
				cout << "BladeAngleY = " << BladeAngleY << " degrees" << endl;
				SetZÑoordinates(-1);
				cout << "Z Coordinate = " << ZCoordinates << endl;
				SetZÑoordinates(1);
				SetBladeAngleY(0);
				cout << "BladeAngleY = " << BladeAngleY << " degrees" << endl;
			}
			else
			{
				cout << "Try again!" << endl;
				goto StartW;
			}
			string X;
		StartA:
			cout << endl << "Enter 'a' or 'd' for checking X() coordinate control" << endl;
			cin >> X;
			if (X == "a")
			{
				SetBladeAngleX(-15);
				cout << "BladeAngleX = " << BladeAngleX << " degrees" << endl;
				SetXÑoordinates(-1);
				cout << "X Coordinate = " << XCoordinates << endl;
				SetXÑoordinates(1);
				SetBladeAngleX(0);
				cout << "BladeAngleX = " << BladeAngleX << " degrees" << endl;
			}
			else if (X == "d")
			{
				SetBladeAngleX(15);
				cout << "BladeAngleX = " << BladeAngleX << " degrees" << endl;
				SetXÑoordinates(1);
				cout << "X Coordinate = " << XCoordinates << endl;
				SetXÑoordinates(-1);
				SetBladeAngleX(0);
				cout << "BladeAngleX = " << BladeAngleX << " degrees" << endl;
			}
			else
			{
				cout << "Try again!" << endl;
				goto StartA;
			}
			Start2:
			cout << "Enter '2' for the end of the test!" << endl;
			while (YÑoordinates != 0)
			{
				cin >> Y;
				if (Y == 2)
				{
					SetBladeAngleY(0);
					cout << "BladeAngleX-Y = " << BladeAngleY << " degrees" << endl;
					SetYÑoordinates(-1);
					cout << "Y Coordinate = " << YÑoordinates << endl;
				}
				else if (Y == 8)
				{
					SetBladeAngleY(0);
					cout << "BladeAngleX-Y = " << BladeAngleY << " degrees" << endl;
					SetYÑoordinates(1);
					cout << "Y Coordinate = " << YÑoordinates << endl;
					goto Start2;
				}
			}
		}
		else
		{
			cout << "Try again!";
			goto StartY;
		}
		cout << "\033[32mThe control system check was successful!\033[0m";
	}
	void SetPower(int P)
	{
		if (P == 1)
		{
			cout << "\033[32mPower - on\033[0m" << endl;
			cout << "Start check blades system" << endl;
			this_thread::sleep_for(chrono::seconds(2));
			GetCheckingBlades();
			cout << endl << "Start check cam system" << endl;
			this_thread::sleep_for(chrono::seconds(2));
			GetCheckingCam();
			GetCheckingControl();
			cout << endl;
			system("cls");
			START:
			int i = 15;
			cout << endl;
			PayLoadGrenade();
			string Ready;
			cout << endl;
			cout << "Are you ready begin?(yes/no)";
			cin >> Ready;
			if (Ready == "yes" && "Yes" && "YES")
			{
				letSStart();
			}
			else {
				do
				{
					this_thread::sleep_for(chrono::seconds(i));
					SetCharge();
					i--;
					if (i == 0)
					{
						cout << "Charge = " << Charge << endl << "\033[31mLow charge!!!\033[0m" << endl << "\033[32mAutopilot enabled!\033[0m";
					}
					else
					{
						goto START;
					}

				} while (i != 0);
			}
		}
		else
		{
			cout << "\033[31mPower - off\033[0m";
		}
	}
	void PayLoadGrenade()
	{
		int G;
		cout << "What type of grenade to install ?\n 1 - anti-tank\n 2 - anti - personnel\n 3 - incendiary\n 4 - smoke\n 5 - lighting\n 6 - gas"<<endl;
		cin >> G;
		switch (G)
		{
		case 1:
			cout << "\033[32mGrenade of anti - tank type is installed\033[0m";
			break;
		case 2:
			cout << "\033[32mGrenade of anti - personne type is installed\033[0m";
			break;
		case 3:
			cout << "\033[32mGrenade of incendiary type is installed\033[0m";
			break;
		case 4:
			cout << "\033[32mGrenade of smoke type is installed\033[0m";
			break;
		case 5:
			cout << "\033[32mGrenade of lighting type is installed\033[0m";
			break;
		case 6:
			cout << "\033[32mGrenade of gas type is installed\033[0m";
			break;
		default:
			break;
		}

	}
	void letSStart()
	{
		double ETCZ;
		double ETCX;
		double ETCY;
		cout << "Enter enemy target coordinates(Z'0.0' X'0.0' Y'0.0;):" << endl;
		cin >> ETCZ;
		cout << endl;
		cin >> ETCX;
		cout << endl;
		cin >> ETCY;
		system("cls");
		cout << "Drone heading towards the target!"<<endl;
		this_thread::sleep_for(chrono::seconds(5));
		SetYÑoordinates(ETCY);
		cout << "The drone has reached the set altitude!"<<endl;
		this_thread::sleep_for(chrono::seconds(4));
		cout << "The drone moves to the specified target coordinates!"<<endl;
		this_thread::sleep_for(chrono::seconds(4));
		SetZÑoordinates(ETCZ);
		SetXÑoordinates(ETCX);
		cout << "Drone in position ready to hit the target!"<< endl;
		GetYCoordinates();
		cout << endl;
		GetZCoordinates();
		cout << endl;
		GetXCoordinates();
		this_thread::sleep_for(chrono::seconds(3));
		srand(static_cast<unsigned int>(time(nullptr)));
		int randomValue = rand();
		if(randomValue%2==0)
		{
			cout << "Target hit!";
		}
		else
		{
			cout <<endl<< "Target not hit.";
		}
		cout << endl;
		cout << "Charge = " << "15 % " << endl << "\033[31mLow charge!!!\033[0m" << endl << "\033[32mAutopilot enabled!\033[0m";
		this_thread::sleep_for(chrono::seconds(6));
		SetYÑoordinates(-ETCY);
		SetZÑoordinates(-ETCZ);
		SetXÑoordinates(-ETCX);
		cout << endl;
		cout << "Drone at zero coordinates!" << endl;
		GetYCoordinates();
		cout << endl;
		GetZCoordinates();
		cout << endl;
		GetXCoordinates();
		cout << endl;
		cout << "\033[31mPower - off\033[0m";
	}
};
