#include "time_system.h"

time_system::time_system()
{
    client_count=0;
    clients = new client[100];
}

time_system::~time_system()
{
    //dtor
}
void time_system::add(){
clients[++client_count].add_client();

}
bool time_system::search(int id){
for(int i=1;i<=client_count;i++){
    if(clients[i].id == id){
        cout<<"FOUND"<<endl;
        clients[i].display();
        return true;
    }
}
cout<<"NOT FOUND"<<endl;
return false;
}
void time_system::display_all(){
for(int i=1;i<=client_count;i++){
    clients[i].display();
}
}
