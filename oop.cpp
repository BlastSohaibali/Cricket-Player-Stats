#include<iostream>
#include <iomanip> 
using namespace std;

class cricketer {
public:
    string name;
    int runs;
    float avg;
    string debutYear;

    void print();

    cricketer(string n, int r, float a, string d) {
        name = n;
        runs = r;
        avg = a;
        debutYear = d;
    }
};

void cricketer::print() {
    cout << setw(15) << name 
         << setw(10) << runs 
         << setw(10) << avg 
         << setw(10) << debutYear << endl;
}

int main() {
	
	 cout << setw(15) << "Name" 
         << setw(10) << "Runs" 
         << setw(10) << "Avg" 
         << setw(10) << "Debut" << endl;
    cout << "--------------------------------------------" << endl;
    
    cricketer p1("Babar Azam", 9700, 55.0, "2015");
    cricketer p2("Fakhar Zaman", 4200, 45.5, "2017");
    cricketer p3("Mohammad Rizwan", 6100, 47.2, "2015");
    cricketer p4("Shaheen Afridi", 500, 11.0, "2018");
    cricketer p5("Shadab Khan", 1500, 25.4, "2017");
    cricketer p6("Imam-ul-Haq", 3900, 48.6, "2017");
    cricketer p7("Haris Rauf", 300, 10.0, "2020");
    cricketer p8("Hasan Ali", 800, 18.6, "2016");
    cricketer p9("Naseem Shah", 250, 12.5, "2019");
    cricketer p10("Mohammad Amir", 950, 13.4, "2009");
    cricketer p11("Sarfraz Ahmed", 5200, 34.5, "2007");

   
    p1.print();
    p2.print();
    p3.print();
    p4.print();
    p5.print();
    p6.print();
    p7.print();
    p8.print();
    p9.print();
    p10.print();
    p11.print();

    return 0;
}

