#ifndef TIMESHEET_H
#define TIMESHEET_H
#include<ctime>
class timesheet
{
public:
    timesheet();
    void set_start_time();
    void set_end_time();
    void get_duration();
    virtual ~timesheet();

protected:

private:
   // struct starttime{};
    int start_hour;
    int start_min;
    int end_hour;
    int end_min;


};

#endif // TIMESHEET_H
