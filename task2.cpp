/*
NAME : ABDALLAH SALEH
ID   : 20200302
*/


#include<cmath>
#include <iostream>
using namespace std;
int main()
{
	int x1, y1,x2,y2;
	float r,result;
	cout << "enter coordinates of the center of circle" << endl;//(x1,y1)
	cin >> x1 >> y1;
	cout << "enter the radius of the circle" << endl;//r
	cin >> r;
	cout << " enter coordinates of the point" << endl;//(x2,y2)
	cin >> x2 >> y2;
	result =sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));

	if (result -r  == 0 || result -r >=0 ) {
            cout << "on the circle" << endl;

	}
	if (result > r+0.01) {
		cout << "outside the circle" << endl;
	}
	else if (result < r) {
		cout << "inside the circle" << endl;

	}


	system("pause > 0");
	return 0;
}
