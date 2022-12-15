/*
NAME : ABDALLAH SALEH
ID   : 20200302
*/


#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	string dayName;
	char group;
	double cost, rate ;
	int minutStart, secoundStart, hourStart, minutEnd , secoundEnd , hourEnd , day, mounth, sum_minut_hour,
		sum_mimut_minut, sum_mimut_secound, totalMinut;
	cout << "please Enter the mode A or B" << endl;
	cin >> group;
	if (group == 'A' || group == 'B') {
		cout << "please  Enter  the hourStart and minutStart and srcoundStart" << endl;
		cin >> hourStart >> minutStart >> secoundStart;
		if (!(hourStart < 0 || hourStart > 23 && minutStart > 59 && secoundStart > 59 || hourEnd > 23 && minutEnd > 59 && secoundEnd > 59)) {
			cout << "please enter the dayName and the day and the mounth " << endl;
			cin >> dayName >> day >> mounth;
			if (!(dayName == "Mon" || dayName == "Tues" || dayName == "Wed" || dayName == "Thurs" || dayName == "Fri" || dayName == "Sat")) {
				if (!(mounth > 12 || mounth < 1)) {
					cout << "please enter the hourEnd and minutEnd and secoundEnd " << endl;//Entering the data from the user
					cin >> hourEnd >> minutEnd >> secoundEnd;
					sum_minut_hour = (hourEnd - hourStart) * 60;
					sum_mimut_secound = (secoundEnd - secoundStart); // calculate time in minutes
					sum_mimut_minut = minutEnd - minutStart;
					if (sum_mimut_secound > 0) {
						sum_mimut_minut = sum_mimut_minut + 1;
						totalMinut = sum_minut_hour + sum_mimut_minut;
					}
					else {
						totalMinut = sum_minut_hour + sum_mimut_minut;
					}

					if (group == 'A') {
						if (hourStart >= 7 && hourStart <= 17 && (dayName == "Sun" || dayName == "Mon" || dayName == "Tues" || dayName == "Wed" || dayName == "Thurs")) {
							if (totalMinut < 15) {
								cost = 0.6;
							}
							else if (totalMinut >= 15) {
								cost = 0.8;
							}
						}
						else if (hourStart < 7 || hourStart >17 && (dayName == "Sun" || dayName == "Mon" || dayName == "Tues" || dayName == "Wed" || dayName == "Thurs")) {
							cost = 0.45;
						}
						else if ((dayName == "Fri" || dayName == "Sat")) {
							cost = 0.25;
						}
					}
					else if (group == 'B') {
						if (hourStart >= 7 && hourStart <= 17 && (dayName == "Sun" || dayName == "Mon" || dayName == "Tues" || dayName == "Wed")) {
							if (totalMinut < 30) {
								cost = 0.6;
							}
							else if (totalMinut >= 30) {
								cost = 0.8;
							}
							else if (hourStart < 7 || hourStart >17 && (dayName == "Sun" || dayName == "Mon" || dayName == "Tues" || dayName == "Wed")) {
								cost = 0.45;
							}
							else if (dayName == "Fri" || dayName == "Thurs" || dayName == "Sat") {
								cost = 0.25;
							}
						}
					} cost += 1;
					rate = totalMinut* cost;
					cout << "Call Information" << endl;
					cout << "Start Time: " << hourStart << ":" << minutStart << ":" << secoundStart << endl;
					cout << "End Time: " << hourEnd << ":" << minutEnd << ":" << secoundEnd << endl;
					cout << "Date: " << dayName << " " << day << " " << mounth << endl;
					cout << "totalminut: " << totalMinut << " minutes" << endl;
					if (group == 'A') {
						cout << "Plan A:" << endl;
						cout << setw(20) << "Call Time" << setw(20) << "Call Day" << setw(20) << " totalMinut" << setw(20) << "Rate" << endl;
						cout << setw(20) << "7:00 am to 5:00 pm" << setw(20) << "Sun:Thurs" << setw(20) << "<15 mins" << setw(20) << "0.6" << endl;
						cout << setw(20) << "7:00 am to 5:00 pm" << setw(20) << "Sun:Thurs" << setw(20) << ">=15 mins" << setw(20) << "0.8" << endl;
						cout << setw(20) << "5:01 pm to 6:59 am" << setw(20) << "Sun:Thurs" << setw(20) << "any" << setw(20) << "0.45" << endl;
						cout << setw(20) << "any" << setw(20) << "Fri:Sat" << setw(20) << "any" << setw(20) << "0.25" << endl;
					}
					else {
						cout << "Plan B:" << endl;
						cout << setw(20) << "Call Time" << setw(20) << "Call Day" << setw(20) << "totalMinut " << setw(20) << "Rate" << endl;
						cout << setw(20) << "7:00 am to 5:00 pm" << setw(20) << "Sun:Wed" << setw(20) << "<30 mins" << setw(20) << "0.6" << endl;
						cout << setw(20) << "7:00 am to 5:00 pm" << setw(20) << "Sun:Wed" << setw(20) << ">=30 mins" << setw(20) << "0.8" << endl;
						cout << setw(20) << "5:01 pm to 6:59 am" << setw(20) << "Sun:Wed" << setw(20) << "any" << setw(20) << "0.45" << endl;
						cout << setw(20) << "any" << setw(20) << "Thurs:Fri-Sat" << setw(20) << "any" << setw(20) << "0.25" << endl;
					}
					cout << "Call Rate: L.E. " << fixed << setprecision(1) << rate << endl;
				}
				else { cout << "error in mounth" << endl; }
			}
			else { cout << "error in dayname" << endl; }
		}
		else { cout << "error in time" << endl; }
	}
	else { cout << "error plan" << endl; }
	system("pause>0");
 return 0;
}
