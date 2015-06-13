//13.1 Create a text file
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <fstream>

using namespace std;

int main() {

	ofstream output;
	output.open("Exercise13_1.txt");
	cout << "Create a text file: " << endl;
	srand(time(NULL));
	for (int i = 0; i < 100; i++) {
		output << rand() % 100 << " ";
	}
	output.close();

	return 0;
}