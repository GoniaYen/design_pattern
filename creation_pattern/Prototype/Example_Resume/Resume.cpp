#include "Resume.h"
#include <iostream>

using namespace std;

Resume::Resume()
{
}
Resume::Resume(string name, string gender, int age)
{
    Name = name;
    Gender = gender;
    Age = age;
}

Resume::Resume(const Resume &rs)

{
    this->Name = rs.Name;
    this->Gender = rs.Gender;
    this->Age = rs.Age;
}
Resume::~Resume()
{
}

void Resume::DisPlay()
{
    cout << " Name: " << Name << " Genger: " << Gender << " Age: " << Age << endl;
}
Resume *Resume::Clone()
{
    return new Resume(*this);
}
void Resume::setName(string name)
{
    this->Name = name;
}