// Chapter 5, Programming Challenge 17: Sales Bar Chart
/*
Assignment-1. Write a program that asks the user to enter today’s 
sales for five stores. The program should then display a bar graph 
comparing each store’s sales. Create each bar in the bar graph by 
displaying a row of asterisks.

Each asterisk should represent $100 of sales. Here is an example of the program’s output:

Enter today's sales for store 1: 1000 [Enter]

Enter today's sales for store 2: 1200 [Enter]

Enter today's sales for store 3: 1800 [Enter]

Enter today's sales for store 4: 800 [Enter]

Enter today's sales for store 5: 1900 [Enter]

SALES BAR CHART

(Each * = $100)

Store 1: **********

Store 2: ************

Store 3: ******************

Store 4: ********

Store 5: *******************



*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int store1, store2, store3, store4, store5;
    
    cout << "Sales Bar Chart" << endl;

    cout << "Enter today's sales for store 1:" ;
    cin >> store1;

    cout << "Enter today's sales for store 2:" ;
    cin >> store2;

    cout << "Enter today's sales for store 3:" ;
    cin >> store3;

    cout << "Enter today's sales for store 4:" ;
    cin >> store4;

    cout << "Enter today's sales for store 5:" ;
    cin >> store5;

    cout << "SALES BAR CHART" << endl;
    cout << "(Each * = $100)" << endl;   
    
    
    cout << "Store 1:";
    for (int n = 1; n <= (store1/100); n++)
    {
        cout << "*"; 
    }
    cout << endl;

    cout << "Store 2:";
    for (int n = 1; n <= (store2/100); n++)
    {
        cout << "*"; 
    }
    cout << endl;

    cout << "Store 3:";
    for (int n = 1; n <= (store3/100); n++)
    {
        cout << "*"; 
    }
    cout << endl;

    cout << "Store 4:";
    for (int n = 1; n <= (store4/100); n++)
    {
        cout << "*"; 
    }
    cout << endl;

    cout << "Store 5:";
    for (int n = 1; n <= (store5/100); n++)
    {
        cout << "*"; 
    }
    cout << endl;

return 0;
}
