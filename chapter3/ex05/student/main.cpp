#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    // ask for file
    string fileName;
    cout << "Input file name: ";
    cin >> fileName;

    // open files
    ifstream inputFile;
    inputFile.open(fileName);

    ofstream outputFile;
    outputFile.open("Ch3_Ex5Output.dat");

    // parse data
    string fn1, fn2, fn3;
    string ln1, ln2, ln3;
    double s1, s2, s3;
    double i1, i2, i3;

    inputFile >> fn1;
    inputFile >> ln1;
    inputFile >> s1;
    inputFile >> i1;
    inputFile >> fn2;
    inputFile >> ln2;
    inputFile >> s2;
    inputFile >> i2;
    inputFile >> fn3;
    inputFile >> ln3;
    inputFile >> s3;
    inputFile >> i3;

    // write to output file
    outputFile << ln1 << " " << fn1 << " " << fixed << setprecision(2) << s1 * (double(1) + (i1 / double(100))) << '\n';
    outputFile << ln2 << " " << fn2 << " " << fixed << setprecision(2) << s2 * (double(1) + (i2 / double(100))) << '\n';
    outputFile << ln3 << " " << fn3 << " " << fixed << setprecision(2) << s3 * (double(1) + (i3 / double(100)));

    // close files
    inputFile.close();
    outputFile.close();

    return 0;
}
