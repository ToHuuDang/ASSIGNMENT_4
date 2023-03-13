#include<iostream>

using namespace std;

class Car{
    private:
    int yearModel;
    string Make;
    int Speed;

    public:
    Car(int yearmodel, string make){
        this -> yearModel = yearmodel;
        this -> Make = make;
        this -> Speed = 0;
    }

    string getMake(){
        return this -> Make;
    }

    int geyYearModel(){
        return this -> yearModel;
    }

    int getSpeed(){
        return this -> Speed;
    }

    void setMake(string make){
        this -> Make = make;
    }

    void setYearModel(int yearmodel){
        this -> yearModel = yearmodel;
    }

    void accelerate(){
        this -> Speed += 5;
    }

    void brake(){
        this -> Speed -= 5;
    }
};

int main(int argc, char const *argv[])
{
    Car c1(1998, "ToYoTa");
    for (int i = 0; i < 5; i++)
    {
        
    }
    
    return 0;
}
