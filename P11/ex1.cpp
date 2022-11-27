#include <iostream>
#include "Person.h"

using namespace std;

class Student : public Person{
    public:
        Student(int id, const string& name, const string& course);
        const string& course() const;
        string to_string() const override{return Person::to_string() + '/' + course();}
    private:
        string course_;
};

Student::Student(int id, const string& name, const string& course):Person(id,name){
    course_ = course;
}

const string& Student::course() const{
    return course_;
}

class ErasmusStudent : public Student{
    public:
        ErasmusStudent(int id, const string& name, const string& course, const string& country);
        const string& country() const;
        string to_string() const override{return Student::to_string() + '/' + country();}
    
    private:
        string country_;
};

ErasmusStudent::ErasmusStudent(int id, const string& name, const string& course, const string& country):Student(id,name, course){
    country_ = country;
}

const string& ErasmusStudent::country() const{
    return country_;
}