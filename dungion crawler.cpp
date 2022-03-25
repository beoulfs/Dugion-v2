import Module;
import Monuments;
#include <iostream>

using namespace std;

int tbl_cmd;
int d20_retuen;
int loop = 0;
int choice = 0;

void Tbl1(int loop, int choice) {
	cout << "to prodice press 1, to leave the dungion press 2 \n";
	cin >> choice;
	if (choice == 1) {
		progression();
		choice = 0;
		Tbl1(loop, choice);
	}
}

void Tbl2(int loop, int choice) {
	cout << "to prodice press 1, to leave the dungion press 2 \n";
	cin >> choice;
	if (choice == 1) {
		prog2();
		choice = 0;
		Tbl2(loop, choice);
	}
}

int main()
{
	cout << "select rolling tabel \n";
	cout << "table 1 = 1\n";
	cout << "table 2 = 2\n";
	cout << "tabel 3 = 2\n";
	cout << "monument tabel = 4 \n";
	cin >> tbl_cmd;

	if (tbl_cmd == 1) {
		Tbl1(loop, choice);
	}
	else if (tbl_cmd==2) {
		Tbl2(loop, choice);
	}
	else if (tbl_cmd == 4) {
		monuments();
	}
		
	}