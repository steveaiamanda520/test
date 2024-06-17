/*文件内容读入*/
/*
#include<iostream>
#include<fstream>        //file I/O support
#include<cstdlib>     //support for exit()
#include<string>
const int SIZE = 60;
int main()
{
	using namespace std;
	char filename[SIZE];
	ifstream inFile;
	cout << "Enter name of data file";
	cin.getline(filename, SIZE);
	inFile.open(filename);

	if (!inFile.is_open())
	{
		cout << "Could not open the file" << filename << endl;
		cout << "Program terminating.\n";
		exit(EXIT_FAILURE);
	}

	
	int count = 0;           //number of items read
	string s = {' '};
	string Sum = {' '};
	inFile >> s;             //get first value 
	while (inFile.good())      //while input good or not at EOF
	{
		cout << s<<endl;
		++count;
		Sum += s;
		inFile >> s;
		

	}
	if (inFile.eof())
		cout << "End of file reached.\n";
	else if (inFile.fail())
		cout << "Input terminated by data mismatch.\n";
	else
		cout << "Input terminated for unknown reason.\n";

	inFile.close();    //finished with the file 
	return 0;

}*/