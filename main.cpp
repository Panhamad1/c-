#include"interact/interact.hpp"
int main(){
    int id,change;
    string name,position;
    while (true){
    cout<<"Input Id: ";cin>>id;
    cout<<"Input Name: ";cin>>name;
    cout<<"Input Position: ";cin>>position;
    Employee e1;
    e1.setId(id);
    e1.setName(name);
    e1.setPosition(position);
    getEmployeeInfo(e1);
    getAllEmployee();
    
    cout<<"Input Id To Change: ";cin>>change;
    updateEmployee(change);
    getAllEmployee();
    }
}
