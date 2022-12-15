/*
NAME : ABDALLAH SALEH
ID   : 20200302
*/


#include <iostream>
using namespace std;
#include <string>
#include<iomanip>
#include<math.h>
int main()
{
	float T, V,x;
	cout << "please enter the temperature in degree celsius" << endl;
	cin >> T;//enter value T
	cout << "please enter the wind speed in kilometer per houre" << endl;
	cin >> V;//enter value V
	if (T>=-50 && T<=5 && V >= 4)  {


			x = 13.12 + 0.6215 * T - 11.37 * pow(V, 0.16) + 0.3965 * T * pow(V, 0.16);//function
			cout << setprecision(4)<< x << endl;//output

	}
	else
	{
		cout << "error" << endl;
	}

system("pause>0");
return 0;


}
