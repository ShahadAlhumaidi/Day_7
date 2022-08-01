// Example 1 [CHECK AGAIN] :
/*
#include <iostream>
using namespace std ;

class Users {
    int id;

public :
    string name;

    static void sum(int x, int y) {
        cout << x + y ;
    }
};
    int main() {
        Users::sum (5 + 10) ;
    }
*/

// Example 2 (Constructor) :
/*
#include <iostream>
using namespace std;

class Students {
public:
    string firstname;
    string section;
    int id;

    Students(string x, string y, int z) {
        firstname = x;
        section = y;
        id = z;
    }
};


int main() {
    Students sObj1("Shahad", "A", 201925022);
    Students sObj2("Raghad", "B", 201925033);

    cout << sObj1.firstname << " " << sObj1.section << " " << sObj1.id << endl;
    cout << sObj2.firstname << " " << sObj2.section << " " << sObj2.id << endl ;

    return 0;
}
*/

// Example 3 :
/*
#include<iostream>
#include<iomanip>
using namespace std;

class Time
{
private :
    int hour;
    int minute;
    int second;
public :
    //constructor with default value 0
    Time(int h = 0, int m  = 0, int s = 0);
    //setter function
    void setTime(int h, int m, int s);
    //print description of object in hh:mm:ss
    void print();
    //compare two time object
    bool equals(Time);
};


Time :: Time(int h, int m, int s)
{
    hour = h;
    minute = m;
    second = s;
}

void Time :: setTime(int h, int m, int s)
{
    hour = h;
    minute = m;
    second = s;
}
void Time :: print()
{
    cout << setw(2) << setfill('0') << hour << ":"
         << setw(2) << setfill('0') << minute << ":"
         << setw(2) << setfill('0') << second << "\n";
}

bool Time :: equals(Time otherTime)
{
    if(hour == otherTime.hour &&
       minute == otherTime.minute &&
       second == otherTime.second)
        return true;
    else
        return false;
}


int main()
{
    Time t1(10, 50, 59);
    t1.print();  // 10:50:59
    Time t2;  //object created with default value
    t2.print();  // 00:00:00
    t2.setTime(6, 39, 9); //set the new time in object
    t2.print();  // 06:39:09

    if(t1.equals(t2))
        cout << "Two objects are equals\n";
    else
        cout << "Two objects are not equals\n";

    return 0;
}
*/

// Example 4 :
/*
#include<iostream>
#include<iomanip>
using namespace std;

class Clock
{
private :
    int H;
    int M;
    int S;
public :
    //constructor with default value 0
    Clock(int h = 0, int m  = 0, int s = 0);
    //setter function
    void setClock(int h, int m, int s);
    //print description of object in hh:mm:ss
    void print();
    //compare two time object
    bool equals(Clock);
};


Clock :: Clock(int H, int M, int S)
{
    H = H;
    M = M;
    S = S;
}

void Clock ::setClock(int H, int M , int S)
{
    H = H;
    M = M;
    S = S;
}
void Clock :: print()
{
    cout << setw(2) << setfill('0') << H << ":"
         << setw(2) << setfill('0') << M << ":"
         << setw(2) << setfill('0') << S << "\n";
}

bool Clock :: equals(Clock otherTime)
{
    if(H == otherTime.H &&
       M == otherTime.M &&
       S == otherTime.S)
        return true;
    else
        return false;
}


int main()
{
    Clock t1(10, 50, 59);
    t1.print();  // 10:50:59
    Clock t2;  //object created with default value
    t2.print();  // 00:00:00
    t2.setClock(6, 39, 9); //set the new time in object
    t2.print();  // 06:39:09

    if(t1.equals(t2))
        cout << "Two objects are equals\n";
    else
        cout << "Two objects are not equals\n";

    return 0;
}
*/

// Example 5 :
/*
#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    string model;
    int year;
    Car(string x, string y, int z);
};

Car::Car(string x, string y, int z) {
    brand = x;
    model = y;
    year = z;
}

int main() {
    Car carObj1("BMW", "X5", 1999);
    Car carObj2("Ford", "Mustang", 1969);

    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
    return 0;
}
*/

// Example 6 :
/*
#include <iostream>
using namespace std;

class Students {
public:
    string firstname;
    string section;
    static int id;

    Students(string x, string y, int z) {
        firstname = x;
        section = y;
        id = z;
    }
};

int Students :: id = 202025055 ;
int main() {
    Students sObj1("Shahad", "A", 201925022);
    Students sObj2("Raghad", "B", 201925033);

    cout << sObj1.firstname << " " << sObj1.section << " " << sObj1.id << endl;
    cout << sObj2.firstname << " " << sObj2.section << " " << sObj2.id << endl ;


    cout << Students :: id ;
    return 0;
}
*/

// Examole 7 :
/*
#include <iostream>
using namespace std;

class Circle
{
private:
    double radius;     // Radius of a circle
public:
    static int count;
    // Constructor definition
    Circle(double r = 1.0)
    {
        radius = r;
        // Increase every time object is created
        count++;
    }
    double getArea()
    {
        return 3.14 * radius * radius;
    }
};


// Initialize static member of class Circle
int Circle::count = 0;


int main()
{
    Circle c1(3.3);    // Declare object c1
    Circle c2(4.5);    // Declare object c2

    // Print total number of objects.
    cout << "Total objects: " << Circle::count << endl;

    return 0;
}
*/

// Example 8 :

#include <iostream>
using namespace std;

class Rectangle
{

private :

    int length;
    int width;

public:

    void setData(int l, int w)
    {
        length = l;
        width = w;
    }

    int getArea()
    {
        return length * width ;
    }

    friend double getCost(Rectangle);
};

double getCost (Rectangle rect)
{
    double cost;
    cost = rect.length * rect.width * 5;
    return cost;
}

int main ()
{
    Rectangle floor;
    floor.setData(20,3);
    cout << "Expense " << getCost(floor) << endl;
    return 0;
}

// Example 9 :