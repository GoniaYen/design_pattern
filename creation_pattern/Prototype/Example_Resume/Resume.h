#ifndef __RESUME_H__
#define __RESUME_H_

#include <string>

using namespace std;
class Resume
{
  private:
    string Name;
    string Gender;
    int Age;
    Resume(const Resume &rs);
    


  protected:
    Resume();

  public:
    Resume(string name, string gender, int age);
    ~Resume();
    void DisPlay();
    Resume *Clone();
    void setName(string name);
};

#endif