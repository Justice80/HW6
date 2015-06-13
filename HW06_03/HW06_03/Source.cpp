//13.5 Baby Name Popularity Ranking 
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {

	int year;
	char ch;
	string name, bname, gname, filename, rank, bscore, gscore;
	cout << "Enter the year: ";
	cin >> year;

	switch (year) {
	case 2001:filename = "Babynamerankings2001.txt";
		break;
	case 2002:filename = "Babynamerankings2002.txt";
		break;
	case 2003:filename = "Babynamerankings2003.txt";
		break;
	case 2004:filename = "Babynamerankings2004.txt";
		break;
	case 2005:filename = "Babynamerankings2005.txt";
		break;
	case 2006:filename = "Babynamerankings2006.txt";
		break;
	case 2007:filename = "Babynamerankings2007.txt";
		break;
	case 2008:filename = "Babynamerankings2008.txt";
		break;
	case 2009:filename = "Babynamerankings2009.txt";
		break;
	case 2010:filename = "Babynamerankings2010.txt";
		break;
	default:
		cout << "Entry year not available!\n";
		return 0;
	}

	cout << "Enter the gender: ";
	cin >> ch;
	cout << "Enter the name: ";
	cin >> name;

	ifstream input(filename.c_str());

	if (input.fail()) {
		cout << filename << " file does not exist.\nExit Program\n";
		return 0;
	}

	if (!input.eof()) {
		while (!input.eof()) {
			input >> rank >> bname >> bscore >> gname >> gscore;
			if (ch == 'M' || ch == 'm'){
				if (name == bname){
					cout << name << " is ranked #" << rank << " in year" << year;
					return 0;
				}
			}
			else if (ch == 'F' || ch == 'f') {
				if (name == gname){
					cout << name << " is ranked #" << rank << " in year " << year << endl;
					return 0;
				}
			}
		}
	}

	input.close();
	system("Pause");

	return 0;
}