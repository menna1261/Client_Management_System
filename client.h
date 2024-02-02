#ifndef CLIENT_H
#define CLIENT_H
#include<iostream>
#include"project.h"
#include<ctime>
using namespace std;
class client
{
private:
	string name;
	string phone;
	string address;
	string email;
	time_t added_date;
	int pr_count;
public:
    client();
    int id;
    int pr_size;
    project * projects;
	void add_client();
	void add_project();
	void display();

};


#endif // CLIENT_H
