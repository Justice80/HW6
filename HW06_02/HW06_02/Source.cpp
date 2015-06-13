//13.2 Count Characters
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {

	string filename;
	cin >> filename;

	ifstream input(filename.c_str());
	cout << "Counting character: " << endl;
	if (input.fail()) {
		cout << "File does not exist\nExit Program\n";
		return 0;
	}

	int count = 0;
	while (!input.eof()) {
		input.get();
		count++;
	}

	count--;
	input.close();

	cout << "Number of character in the file: " << count << endl;

	system("Pause");

	return 0;
}