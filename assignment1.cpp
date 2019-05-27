
#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int main()
{
	int total1, total2, total3, total4 = 0, ch, noOfStdnts1, noOfStdnts2, noOfStdnts3, noOfStdnts4;
	float percent;
	while (true) {
		cout << "=================================================\n";
		cout << "Please select the program option, in which you want to enter enrollemnts\n\n";
		cout << "Please enter option 1 for BCS program.\n";
		cout << "Please enter option 2 for BIT program.\n";
		cout << "Please enter option 3 for BBA program.\n";
		cout << "Please enter option 4 for BA program.\n";
		cout << "\n=======================================================================\n";
		cout << "Please Enter program option:\t";
		cin >> ch;

		if (ch >= 1 && ch <= 4) {
			break;
		}
		else {
			cout << "THE PROGRAM OPTION IS INVALID PLEASE TRY AGAIN.";
			cout << "Press any key to continue...";
			_getch();
			system("cls");
		}

	}
	switch (ch) {
	case 1:

		cout << "\nPlease Enter number of students in Year 1 :\t";
		cin >> noOfStdnts1;
		cout << "\nPlease Enter number of students in Year 2 :\t";
		cin >> noOfStdnts2;
		cout << "\nPlease Enter number of students in Year 3 :\t";
		cin >> noOfStdnts3;
		cout << "\nPlease Enter number of students in Year 4 :\t";
		cin >> noOfStdnts4;
		cout << "======================DEPARTMENT OF COMPUTER SCIENCE ================================\n";
		cout << "The number of Students in Year 1 is :\t" << noOfStdnts1;
		cout << "\nThe number of Students in Year 2 is :\t" << noOfStdnts2;
		cout << "\nThe number of Students in Year 3 is :\t" << noOfStdnts3;
		cout << "\nThe number of Students in Year 4 is :\t" << noOfStdnts4;
		total1 = noOfStdnts1 + noOfStdnts2 + noOfStdnts3 + noOfStdnts4;
		percent = (noOfStdnts1*100) / total1;
		cout << "\n\nThe percentage of Students in Year 1 is :\t" << percent << "%";
		percent = (noOfStdnts2 * 100) / total1;
		cout << "\nThe percentage of Students in Year 2 is :\t" << percent<< "%";
		percent = (noOfStdnts3 * 100) / total1;
		cout << "\nThe percentage of Students in Year 3 is :\t" << percent << "%";
		percent = (noOfStdnts4 * 100) / total1;
		cout << "\nThe percentage of Students in Year 4 is :\t" << percent<< "%";
		cout << "\n\nThe total number of students in program is :\t" << total1;

		if (noOfStdnts1 > 100) {
			cout << "\n\nThe number of students enrolled in year 1 is over the limit.";
		}
		if (noOfStdnts2 > 100) {
			cout << "\nThe number of students enrolled in year 2 is over the limit.";
		}
		if (noOfStdnts3 > 100) {
			cout << "\nThe number of students enrolled in year 3 is over the limit.";
		}
		if (noOfStdnts4 > 100) {
			cout << "\n\The number of students enrolled in year 3 is over the limit.";
		}
		break;
	case 2:
		cout << "\nPlease Enter number of students in Year 1 :\t";
		cin >> noOfStdnts1;
		cout << "\nPlease Enter number of students in Year 2 :\t";
		cin >> noOfStdnts2;
		cout << "\nPlease Enter number of students in Year 3 :\t";
		cin >> noOfStdnts3;
		cout << "\nPlease Enter number of students in Year 4 :\t";
		cin >> noOfStdnts4;
		cout << "======================DEPARTMENT OF COMPUTER SCIENCE ================================\n";
		cout << "The number of Students in Year 1 is :\t" << noOfStdnts1;
		cout << "\nThe number of Students in Year 2 is :\t" <<noOfStdnts2;
		cout << "\nThe number of Students in Year 3 is :\t" << noOfStdnts3;
		cout << "\nThe number of Students in Year 4 is :\t" << noOfStdnts4;
		total2 = noOfStdnts1 + noOfStdnts2 + noOfStdnts3 + noOfStdnts4;
		percent = (noOfStdnts1 * 100.0) / total2;
		cout << "\n\nThe percentage of Students in Year 1 is :\t" << percent << "%";
		percent = (noOfStdnts2 * 100.0)/ total2;
		cout << "\nThe percentage of Students in Year 2 is :\t" << percent << "%";
		percent = (noOfStdnts3 * 100.0) / total2;
		cout << "\nThe percentage of Students in Year 3 is :\t" << percent << "%";
		percent = (noOfStdnts4 * 100.0) / total2;
		cout << "\nThe percentage of Students in Year 4 is :\t" << percent << "%";
		cout << "\n\nThe total number of students in program is :\t" << total2;

		if (noOfStdnts1 > 100) {
			cout << "\n\nThe number of students enrolled in year 1 is over the limit.";
		}
		if (noOfStdnts2 > 100) {
			cout << "\nThe number of students enrolled in year 2 is over the limit.";
		}
		if (noOfStdnts3 > 100) {
			cout << "\nThe number of students enrolled in year 3 is over the limit.";
		}
		if (noOfStdnts4 > 100) {
			cout << "\n\The number of students enrolled in year 3 is over the limit.";
		}
		break;
	case 3:
		cout << "\nPlease Enter number of students in Year 1 :\t";
		cin >> noOfStdnts1;
		cout << "\nPlease Enter number of students in Year 2 :\t";
		cin >> noOfStdnts2;
		cout << "\nPlease Enter number of students in Year 3 :\t";
		cin >> noOfStdnts3;
		cout << "\nPlease Enter number of students in Year 4 :\t";
		cin >> noOfStdnts4;
		cout << "======================DEPARTMENT OF BUSINESS ADMINISTRATION ================================\n";
		cout << "The number of Students in Year 1 is :\t" << noOfStdnts1;
		cout << "\nThe number of Students in Year 2 is :\t" << noOfStdnts2;
		cout << "\nThe number of Students in Year 3 is :\t" << noOfStdnts3;
		cout << "\nThe number of Students in Year 4 is :\t" << noOfStdnts4;
		total3 = noOfStdnts1 + noOfStdnts2 + noOfStdnts3 + noOfStdnts4;
		percent = (noOfStdnts1 * 100.0) / total3;
		cout << "\n\nThe percentage of Students in Year 1 is :\t" << percent << "%";
		percent = (noOfStdnts2 * 100.0) / total3;
		cout << "\nThe percentage of Students in Year 2 is :\t" << percent<< "%";
		percent = (noOfStdnts3 * 100.0) / total3;
		cout << "\nThe percentage of Students in Year 3 is :\t" << percent << "%";
		percent = (noOfStdnts4 * 100.0) / total3;
		cout << "\nThe percentage of Students in Year 4 is :\t" << percent<< "%";
		cout << "\n\nThe total number of students in program is :\t" << total3;

		if (noOfStdnts1 > 100) {
			cout << "\n\nThe number of students enrolled in year 1 is over the limit.";
		}
		if (noOfStdnts2 > 100) {
			cout << "\nThe number of students enrolled in year 2 is over the limit.";
		}
		if (noOfStdnts3 > 100) {
			cout << "\nThe number of students enrolled in year 3 is over the limit.";
		}
		if (noOfStdnts4 > 100) {
			cout << "\n\The number of students enrolled in year 3 is over the limit.";
		}
		break;
	case 4:
			cout << "\nPlease Enter number of students in Year 1 :\t";
		cin >> noOfStdnts1;
		cout << "\nPlease Enter number of students in Year 2 :\t";
		cin >> noOfStdnts2;
		cout << "\nPlease Enter number of students in Year 3 :\t";
		cin >> noOfStdnts3;
		cout << "\nPlease Enter number of students in Year 4 :\t";
		cin >> noOfStdnts4;
		cout << "======================DEPARTMENT OF FINE ARTS ================================\n";
			cout << "The number of Students in Year 1 is :\t" << noOfStdnts1;
		cout << "\nThe number of Students in Year 2 is :\t" << noOfStdnts2;
		cout << "\nThe number of Students in Year 3 is :\t" << noOfStdnts3;
		cout << "\nThe number of Students in Year 4 is :\t" << noOfStdnts4;
		total4 = noOfStdnts1 + noOfStdnts2 + noOfStdnts3 + noOfStdnts4;
		percent = (noOfStdnts1 * 100.0) / total4;
		cout << "\n\nThe percentage of Students in Year 1 is :\t" << percent << "%";
		percent = (noOfStdnts2 * 100.0) / total4;
		cout << "\nThe percentage of Students in Year 2 is :\t" << percent<< "%";
		percent = (noOfStdnts3 * 100.0) / total4;
		cout << "\nThe percentage of Students in Year 3 is :\t" << percent << "%";
		percent = (noOfStdnts4 * 100.0) / total4;
		cout << "\nThe percentage of Students in Year 4 is :\t" << percent<< "%";


		cout << "\n\nThe total number of students in program is :\t" << total4;

		if (noOfStdnts1 > 100) {
			cout << "\n\nThe number of students enrolled in year 1 is over the limit.";
		}
		if (noOfStdnts2 > 100) {
			cout << "\nThe number of students enrolled in year 2 is over the limit.";
		}
		if (noOfStdnts3 > 100) {
			cout << "\nThe number of students enrolled in year 3 is over the limit.";
		}
		if (noOfStdnts4 > 100) {
			cout << "\n\The number of students enrolled in year 3 is over the limit.";
		}
		break;

	}



	cout << "\n\n Press any key to continue...";
	_getch();
	return 0;
}
