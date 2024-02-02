#ifndef PROJECT_H
#define PROJECT_H
#pragma once
#include<iostream>
#include<ctime>
#include"timesheet.h"
using namespace std;
class project
{
private:
	string name;
	time_t deadline;
	string description;
public:
	project();
	timesheet tim;
	void set_timesheet();
	void set_name();
	string get_name();
	void set_deadline();
	time_t get_deadline();
	bool isDeadlinePass();
	friend ostream& operator << (ostream& out, project& c);
	friend istream& operator >> (istream& in, project& c);
};


#endif // PROJECT_H
