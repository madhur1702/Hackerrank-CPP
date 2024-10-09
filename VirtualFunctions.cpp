#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Person
{
public:
    string name; 
    int age; 

    virtual void getdata()
    {
        cin >> this->name;
        cin >> this->age;
    }
    
    virtual void putdata()
    {
        cout << this->name << " " << this->age << " ";
    }
};

class Professor : public Person
{
    int publications;
    int cur_id;
    static int id;  
public:
    Professor() {
        cur_id = ++id; 
    }

    void getdata() override
    {
        cin >> this->name;
        cin >> this->age;
        cin >> this->publications;
    }
    
    void putdata() override
    {
        cout << this->name << " " << this->age << " " << this->publications << " " << this->cur_id << endl;
    }
};

int Professor::id = 0;

class Student : public Person
{
    int marks[6];
    int cur_id;
    static int id;  
public:
    Student() {
        cur_id = ++id;  
    }

    void getdata() override
    {
        cin >> this->name;
        cin >> this->age;
        for (int i = 0; i < 6; i++)
        {
            cin >> this->marks[i];
        }
    }

    void putdata() override
    {
        cout << this->name << " " << this->age << " ";
        int sum = 0;
        for (int i = 0; i < 6; i++)
        {
            sum += this->marks[i];
        }
        cout << sum << " " << this->cur_id << endl;
    }
};

int Student::id = 0; 

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
