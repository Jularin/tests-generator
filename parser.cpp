#include <iostream>  
#include <math.h>
#include "ctime"
#include <iomanip>
#include <string.h>
#include <fstream>
#include <sstream>
#include <vector>



vector<int> split(const string& s, char delimiter) {
	vector<int> tokens;
	string token;
	istringstream tokenStream(s);
	while (getline(tokenStream, token, delimiter)) {
		tokens.push_back(stoi(token));
	}
	return tokens;
}

string absolutePathToInputFile = ""; // absolute path to file
string process_data() {
	ifstream file(inputNameFile);
	string result = "";
	string line;

	while (getline(file, line)) {
		// create structure here
		vector<int> intValues = split(line, ' '); // splitting by delimiter and creating vector with int values
		result = to_string(intValues.size()) + ","; // amount of elements. "," - delimiter
		double startTime = clock();
		// here is executing tests
		double endTime = clock();
		cout << result << to_string(endTime - startTime) + "\n"; // output elements count and test complition time
	}
	file.close();
	return result;
}

int main()
{
	process_data();
	return 0;
}