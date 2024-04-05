#include <iostream>
#include <fstream>

using std::cout;
using std::string;
using std::ifstream;

string Read_From_File(string file_location, string filename)
{
	string storedData, c; // Create string to hold output data
	ifstream MyReadFile((file_location+=filename)); // Read from the file
	while (getline(MyReadFile, storedData))	// Use while loop together with getline() to read the file line by line
		c += storedData; // Output the data from the file
	MyReadFile.close(); // Close the file
	return c;
} // Sucessfully compiled on the 20/01/2022 12:30:53 PM __-__ Edited on 26/01/22 03:30PM

string Read_From_File(string file)// Same Location for program or concatenated string of location and filename
{
	string storedData, c; // Create string to hold output data
	ifstream MyReadFile(file); // Read from the file
	while (getline(MyReadFile, storedData))	// Use while loop together with getline() to read the file line by line
		c += storedData; // Output the data from the file
	MyReadFile.close(); // Close the file
	return c;
} // Sucessfully compiled on the 20/01/2022 12:30:53 PM __-__ Edited on 26/01/22 03:30PM


int main(int argc, char const *argv[])
{
	string fl, fn, r;
	fl = "include/", fn = "data.txt";
	r = Read_From_File(fl, fn);
	// r = Read_From_File(fn);
	cout << r << "\n\n";

	return 0;
}

