#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;

int main()
{
    // Displaying the election system header
    cout << endl;
    cout << "Firozpur Lok Sabha Election System 2024" << endl;
    cout << endl;

    // Displaying the list of candidates
    cout << "1. JAGDEEP SINGH KAKA BRAR (AAP)" << endl;
    cout << "2. SHER SINGH GHUBAYA (INC)" << endl;
    cout << "3. NARDEV SINGH BOBBY MANN (SAD)" << endl;
    cout << "4. GURMIT SINGH SODHI (BJP)" << endl;
    cout << "5. NOTA" << endl;

    // Variables to store user input and vote counts
    int INPUT_BY_VOTERS;
    static int COUNT_FOR_APP = 0;
    static int COUNT_FOR_INC = 0;
    static int COUNT_FOR_SAD = 0;
    static int COUNT_FOR_BJP = 0;
    static int COUNT_FOR_NOTA = 0;

    // Opening a file to write election results
    ofstream output;
    output.open("Firozpur_Lok_Sabha_Election_2024_Results.txt");
    output << "General Election to Parliamentary Constituencies: Trends & Results June-2024" << endl;
    output << "Parliamentary Constituency 10 - Firozpur (Punjab)" << endl;
    output << endl;

    // Loop to collect votes from 30 voters
    for (int i = 1; i <= 30; i++)
    {
        cout << endl;
        cout << "Enter Your Vote (1-5) :- ";
        cin >> INPUT_BY_VOTERS;

        // Checking the validity of the vote
        if (INPUT_BY_VOTERS < 1 || INPUT_BY_VOTERS > 5)
        {
            cout << "Invalid Vote" << endl;
        }
        // Counting votes for each candidate and NOTA
        else if (INPUT_BY_VOTERS == 1)
        {
            cout << "Vote For JAGDEEP SINGH KAKA BRAR (AAP)" << endl;
            COUNT_FOR_APP += 1;
        }
        else if (INPUT_BY_VOTERS == 2)
        {
            cout << "Vote For SHER SINGH GHUBAYA (INC)" << endl;
            COUNT_FOR_INC += 1;
        }
        else if (INPUT_BY_VOTERS == 3)
        {
            cout << "Vote for NARDEV SINGH BOBBY MANN (SAD)" << endl;
            COUNT_FOR_SAD += 1;
        }
        else if (INPUT_BY_VOTERS == 4)
        {
            cout << "Vote for GURMIT SINGH SODHI (BJP)" << endl;
            COUNT_FOR_BJP += 1;
        }
        else if (INPUT_BY_VOTERS == 5)
        {
            cout << "Vote for NOTA" << endl;
            COUNT_FOR_NOTA += 1;
        }
    }

    // Displaying the separator line
    cout << endl;
    for (int i = 0; i < 80; i++)
    {
        cout << "*";
    }
    cout << endl;

    // Displaying the header for results
    cout << "General Election to Parliamentary Constituencies: Trends & Results June-2024" << endl;
    cout << "Parliamentary Constituency 10 - Firozpur (Punjab)" << endl;
    cout << endl;

    // Determining and displaying the winner
    if (COUNT_FOR_APP > COUNT_FOR_INC && COUNT_FOR_APP > COUNT_FOR_SAD && COUNT_FOR_APP > COUNT_FOR_BJP && COUNT_FOR_APP > COUNT_FOR_NOTA)
    {
        cout << "WON (" << COUNT_FOR_APP << ")--> JAGDEEP SINGH KAKA BRAR (AAP)" << endl;
        output << "WON (" << COUNT_FOR_APP << ")--> JAGDEEP SINGH KAKA BRAR (AAP)" << endl;
    }
    else if (COUNT_FOR_INC > COUNT_FOR_APP && COUNT_FOR_INC > COUNT_FOR_SAD && COUNT_FOR_INC > COUNT_FOR_BJP && COUNT_FOR_INC > COUNT_FOR_NOTA)
    {
        cout << "WON (" << COUNT_FOR_INC << ")--> SHER SINGH GHUBAYA (INC)" << endl;
        output << "WON (" << COUNT_FOR_INC << ")--> SHER SINGH GHUBAYA (INC)" << endl;
    }
    else if (COUNT_FOR_SAD > COUNT_FOR_APP && COUNT_FOR_SAD > COUNT_FOR_INC && COUNT_FOR_SAD > COUNT_FOR_BJP && COUNT_FOR_SAD > COUNT_FOR_NOTA)
    {
        cout << "WON (" << COUNT_FOR_SAD << ")--> NARDEV SINGH BOBBY MANN (SAD)" << endl;
        output << "WON (" << COUNT_FOR_SAD << ")--> NARDEV SINGH BOBBY MANN (SAD)" << endl;
    }
    else if (COUNT_FOR_BJP > COUNT_FOR_APP && COUNT_FOR_BJP > COUNT_FOR_INC && COUNT_FOR_BJP > COUNT_FOR_SAD && COUNT_FOR_BJP > COUNT_FOR_NOTA)
    {
        cout << "WON (" << COUNT_FOR_BJP << ")--> GURMIT SINGH SODHI (BJP)" << endl;
        output << "WON (" << COUNT_FOR_BJP << ")--> GURMIT SINGH SODHI (BJP)" << endl;
    }
    else
    {
        cout << "WON (" << COUNT_FOR_NOTA << ")--> NOTA" << endl;
        output << "WON (" << COUNT_FOR_NOTA << ")--> NOTA" << endl;
    }
getchar();
    // Outputting the losers
    if (COUNT_FOR_APP < COUNT_FOR_INC || COUNT_FOR_APP < COUNT_FOR_SAD || COUNT_FOR_APP < COUNT_FOR_BJP || COUNT_FOR_APP < COUNT_FOR_NOTA)
    {
        output << "LOST (" << COUNT_FOR_APP << ")--> JAGDEEP SINGH KAKA BRAR (AAP)" << endl;
    }
    else if (COUNT_FOR_INC < COUNT_FOR_APP || COUNT_FOR_INC < COUNT_FOR_SAD || COUNT_FOR_INC < COUNT_FOR_BJP || COUNT_FOR_INC < COUNT_FOR_NOTA)
    {
        output << "LOST (" << COUNT_FOR_INC << ")--> SHER SINGH GHUBAYA (INC)" << endl;
    }
    if (COUNT_FOR_SAD < COUNT_FOR_APP || COUNT_FOR_SAD < COUNT_FOR_INC || COUNT_FOR_SAD < COUNT_FOR_BJP || COUNT_FOR_SAD < COUNT_FOR_NOTA)
    {
        output << "LOST (" << COUNT_FOR_SAD << ")--> NARDEV SINGH BOBBY MANN (SAD)" << endl;
    }
    if (COUNT_FOR_BJP < COUNT_FOR_APP || COUNT_FOR_BJP < COUNT_FOR_INC || COUNT_FOR_BJP < COUNT_FOR_SAD || COUNT_FOR_BJP < COUNT_FOR_NOTA)
    {
        output << "LOST (" << COUNT_FOR_BJP << ")--> GURMIT SINGH SODHI (BJP)" << endl;
    }
    if (COUNT_FOR_NOTA < COUNT_FOR_APP || COUNT_FOR_NOTA < COUNT_FOR_BJP || COUNT_FOR_NOTA < COUNT_FOR_INC || COUNT_FOR_NOTA < COUNT_FOR_SAD)
    {
        output << setw(6) << "(" << COUNT_FOR_NOTA << ")--> NOTA" << endl;
    }

    // Informing the user that the results file has been generated
    cout << endl;
    cout << "The Firozpur_Lok_Sabha_Election_2024_Results.txt file has been successfully generated." << endl;
    output.close();

    getch();
    return 0;
}
