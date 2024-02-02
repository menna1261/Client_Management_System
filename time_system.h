#ifndef TIME_SYSTEM_H
#define TIME_SYSTEM_H
#include"client.h"

class time_system
{
    public:
        void add();
        bool search(int id);
        void display_all();
        time_system();
        virtual ~time_system();

    protected:

    private:
        int client_count;
        client * clients;

};

#endif // TIME_SYSTEM_H
