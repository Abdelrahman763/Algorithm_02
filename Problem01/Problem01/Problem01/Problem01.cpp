
#include <iostream>
#include <string>
using namespace std;

void PrintTableHeader()
{
    cout <<endl<< "\n\n\t\t\t" << "Multiplication Table Header" << "\n\n";
    cout << "\t";
    for (int i = 1; i <= 10; i++)
    {
        cout << i << "\t";
    }
    cout <<"\n=========================================================================================\n";
}

string ColumnSpaces(int i)
{
    if (i < 10)
        return"   |";
    else
        return "  |";
}

void PrintMuliplicationTable()
{
    PrintTableHeader();
    for (int i = 1; i <= 10; i++)
    {
        cout <<" " << i << ColumnSpaces(i) << "\t";
        for (int j = 1; j <= 10; j++)
        {
            cout << i * j << "\t";
        }

        cout << endl;
    }
}

int main()
{
    PrintMuliplicationTable();

}

