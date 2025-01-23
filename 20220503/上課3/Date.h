#ifndef DATE_H
#define DATE_H
class Date
{
public:
    Date(int year, int month, int day)
    {
        this->year = year;
        this->month = month;
        this->day = day;
    }

    

private:
    int year;
    int month;
    int day;
    
friend class AccessDate;
};

#endif
