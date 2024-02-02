#include "timesheet.h"
#include<iostream>
using namespace std;
timesheet::timesheet()
{
    //ctor
}

timesheet::~timesheet()
{
    //dtor
}
void timesheet::set_start_time(){
char c;
 cout<<"Enter starting date (hours:minutes) : ";
 cin>>start_hour>>c>>start_min;

}
void timesheet::set_end_time(){
    char c;
 cout<<"Enter starting date (hours:minutes) : ";
 cin>>end_hour>>c>>end_min;

}
void timesheet::get_duration(){
    cout<<end_hour-start_hour<<"hours and "<<end_min-start_min<<"minutes"<<endl;

}
