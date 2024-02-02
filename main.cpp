#include <iostream>
#include <unistd.h> // sleep
#include <cstdlib>
#include <windows.h>        // Sleep
#include <cstring>          // string, to_string
#include <bits/stdc++.h>    // stringstream
#include <windows.h>        // SetConsoleTextAttribute
#include "time_system.h"
#include <stdlib.h>
#include<conio.h>

using namespace std;

HANDLE cout_handle = GetStdHandle(STD_OUTPUT_HANDLE);

/** ASSISTANT INLINE FUNCTIONS **/

inline void wait_or_clear(unsigned int sec, bool clear_screen = false)
{
    Sleep(sec*1000);
    if (clear_screen) system("cls");
}

inline void printline(string msg, bool end_line = true, int color_code=15)
{
    SetConsoleTextAttribute(cout_handle, color_code);
    cout <<  msg << (end_line?"\n":"\t");
}

inline void print_try_again()
{
    printline("\n\n\n\aInvalid Choice Try Again!!!!!!!!",1,4);
    wait_or_clear(3, 1);
}

/** MAIN PRINT MENU FUNCTION **/

int get_menu_choise(string menu, int level = 0)
{
    stringstream X(menu);
    string line, padding;
    int i = 1;
    for(int p=0; p<level+1; ++p)
        padding +="\t";

    while (getline(X, line, ','))
        printline(padding + to_string(i++) + ". " + line,1,level+11);

    printline(level?padding+"0. RETURN BACK":padding+"0. EXIT APP",1,12);
    int c;
    printline("ENTER YOUR CHOICE :",false,15);
    cin >> c;
 return c;
}

int main()
{

  time_system systems;
    printline("START APPLICATION ....",1,3);
    wait_or_clear(1,1);
    int c = -1;
    while (c!=0)
    {
        wait_or_clear(0,1);
        printline("\n\nMAIN MENU ....",1,15);
        c = get_menu_choise("ADD CLIENT,SEARCH For CLIENTS,PRINT ALL",0);
        switch(c)
        {
        case 1:
        {

           system("cls");
            printline("\n\nMAIN MENU -> ADD CLIENT ....");
            systems.add();
            system("pause");
        }
        break;
           // Add_users();
        case 2:
        {
            int id;
            system("cls");
            printline("\n\nMAIN MENU -> SEARCH For CLIENTS....");
            cout<<"Enter client's ID : ";
            cin>>id;
            cout<<endl;
            systems.search(id);
            system("pause");
        }
            //search_u();
        break;
        case 3:
        {
            system("cls");
            printline("\n\nMAIN MENU -> PRINT ALL ....");
            systems.display_all();
            system("pause");
        }
            //print_all();
        break;


            //delete_user();
        case 0:
            printline("\n\n\a\t\t\tGoodbye :)......\n\n\n\n\n\n",1,112);
            break;
        default:
            wait_or_clear(3, true);
        }
    }

    return 0;
}
