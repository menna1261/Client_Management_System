#include "client.h"
//#include"project.h"
client::client(){
pr_count=0;
pr_size=10;
 projects = new project[pr_size];

}
void client::add_client()
{
    char x;
	added_date = time(0);
	char* dt = ctime(&added_date);
	cout << "Enter client's data : " << endl;
	cout << "Name : ";
	cin >> name;
	cout<<"ID : ";
	cin>>id;
	cout << "\nPhone Number : ";
	cin >> phone;
	cout << "Added Date is : " << dt << endl;
	cout << "Client has been added successfully :) " << endl;
	do{
        add_project();
        cout<<"Do you want to add a project to client's schedule(y/n) ? "<<endl;
        cin>>x;

	}
	while(x=='y');
}

void client::add_project()
{
	cout << "Add a new project : " << endl;
	cin >> projects[++pr_count];
	cout<<"create a time sheet for this project : "<<endl;
	projects[pr_count].set_timesheet();
}
void client::display(){
char* dt = ctime(&added_date);
cout<<"client info : "<<endl;
cout<<"ID : "<<id<<endl;
cout<<"Name : "<<name<<endl;
cout<<"Phone : "<<phone <<endl;
cout<<"Added date : " <<dt<<endl;
cout<<"-------------------------------------------"<<endl;
cout<<"Projects info : "<<endl;
for(int i =1;i<=pr_count;i++){
    cout<<projects[i];
}
}
