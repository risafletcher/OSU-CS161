/******************************************************************************* 
** Author:       Risa Fletcher
** Date:         07/08/19
** Description:  Asks the user for a filename, reads in the name of the file
**               then tries to open it. If the file can be opened, the program
**               should read the list of ints in the file, which will have one
**               int per line. The program will then add the ints together and
**               output the sum to a sum.txt file.
*******************************************************************************/ 

#include <iostream>
#include <fstream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::string;

int main()
{
    // get filename
    string fileName;
    cout << "Please enter your filename." << endl;
    cin >> fileName;

    // open file
    ifstream inputFile(fileName);

    // if file can be opened, read ints from file
    if (inputFile)
    {
        int sum = 0,
            number;
            
        // loop through numbers, add them to the sum
        while (inputFile >> number)
            sum += number;

        // close input file
        inputFile.close();

        // output sum to a sum.txt file
        ofstream outputFile("sum.txt");
        outputFile << sum;
        outputFile.close();     // close output file

        cout << "result written to sum.txt" << endl;
    } 
    else
    {
        cout << "could not access file" << endl;
    }

    return 0;
}