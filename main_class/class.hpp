#include<iostream>
#include<vector>
using namespace std;

class Employee {
    private:
        int id;
        string name;
        string position;
    public:
        void setId(int id){
            this->id = id;
        }
        int getId(){
            return this->id;
        }
        void setName(string name){
            this->name = name;
        }
        string getName(){
            return this->name;
        }
        void setPosition(string position){
            this->position = position;
        }
        string getPosition(){
            return this->position;
        }
       
        Employee(){}
};