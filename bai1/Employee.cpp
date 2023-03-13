#include<iostream>

using namespace std;

class Employee{
    private:
    string Name;
    int IdNumber;
    string Department;
    string Position;

    public:
 
    Employee(string name, int idNumber, string department, string position){
        this -> Name = name;
        this -> IdNumber = idNumber;
        this -> Department = department;
        this -> Position = position;
    }

    Employee(string name, int idNumber){
        this -> Name = name;
        this -> IdNumber = idNumber;
        this -> Department = "";
        this -> Position = "";
    }

    Employee(){
        this -> Name = "";
        this -> IdNumber = 0;
        this -> Department = "";
        this -> Position = "";
    }

    string getName(){
        return this -> Name;
    }

    int getIdNumber(){
        return this -> IdNumber;
    }

    string getDepartment(){
        return this -> Department;
    }

    string getPosition(){
        return this -> Position;
    }

    void setName(string name){
        this -> Name = name;
    }

    void setIdNumber(int idNumber){
        this -> IdNumber = idNumber;
    }

    void setDepartment(string department){
        this -> Department = department;
    }

    void setPosition(string department){
        this -> Department = department;
    }

    void display(){
        cout << this -> Name << " - " << this -> IdNumber << " - " << this -> Department << " - " << this -> Position << endl;
    }
};

int main(int argc, char const *argv[])
{
    Employee em1("Susan Meyert", 47899, "Accountinh", "Vice President");
    Employee em2("Mark Jones ", 39199);
    Employee em3;

    em1.display();
    em2.display();
    em3.display();
    return 0;
}
