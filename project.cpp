#include "project.h"
project::project(){}
string project::get_name()
{
	return name;
}
time_t project::get_deadline()
{
	return deadline;
}

bool project::isDeadlinePass()
{
	time_t now = time(0);
	if (deadline >= now)
		return true;
	return false;
}
void project::set_timesheet(){
  cout<<"Set a time sheet for the "<<name<<" : "<<endl;
  tim.set_start_time();
  tim.set_end_time();
  cout<<"the duration is ";
  tim.get_duration();
}

ostream& operator<<(ostream& out, project& c)
{
	out << "Project's name : " << c.name << endl;;
	out << "Deadline : " << c.get_deadline() << endl;
	out << "Project's description : " << c.description << endl;
	return out;
}

istream& operator>>(istream& in, project& c)
{
    int ch;
    time_t formatted;
	cout << "Enter project's name : ";
	in >> c.name;
	cout << "\nEnter project's description : ";
	in >>c. description;
	cout << "\nEnter the deadline : ";
	in>>formatted;
	char* dt = ctime(&formatted);
	formatted = c.deadline;
	return in;
}
