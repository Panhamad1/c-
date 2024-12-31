#include"../storage/data.hpp"

void getAllEmployee(){
    for(Employee i : employeeInfo){
        cout <<"Employee Id: "<<i.getId()<<endl;
        cout <<"Employee Name: "<<i.getName()<<endl;
        cout <<"Employee Position: "<<i.getPosition()<<endl;
    }
}
Employee getEmployeeInfo(Employee p){
    employeeInfo.push_back(p);
    return p;
}
void updateEmployee(int id){
    string newName,newPosition;
    for(Employee &x : employeeInfo){
        if (x.getId() == id){
            cout<<"Input New Name: ";cin>>newName;
            x.setName(newName);
            cout<<"Input New Position: ";cin>>newPosition;
            x.setPosition(newPosition);
            cout<<"Update Successfully"<<endl;
        }
    }
}