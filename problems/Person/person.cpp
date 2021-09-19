#include<iostream>
#include<string>

class Person 
{
  //TODO: declare data members - uid, name, year of birth, gender
  private:
    int uid, mm, yy;
    std:: string name, gender;
  public:
  //TODO: default constructor
  Person(){

  }
  Person(int id, std:: string str, int m, int y){
    uid = id;
    name = str;
    mm = m;
    yy = y;
  }
  //TODO: parameterized constructor
  //TODO: member function to compute age of the person, let's call it as computeAge
    int age=0;;
    int computeAge(){
      if (mm >= 6){
        age = 2019 - yy;
      }else{
        age = 2019 - yy + 1;
      }
      return age;
    }
  //TODO: member function to check if qualified for driving license as per criteria
  bool isEligible()
  {
      if (age > 18) return true;
      return false;
  }
  //TODO: member function to compute insurance amount as per the formula
  int computeInsurance()
  {
      int insurance = 5000 + (age/10) * 1000;
      return insurance;
  }
  // Do not modify this function
  void display() {
    std::cout << uid << "," << name << "," << computeAge() << "\n";
  }
};

// Note: Don't add any other cin,cout statement which will impact test cases.
// Also don't change main function, focus class implementation only
int main() {
  int res;
  int uid;
  std::string name;
  int mm;
  int yy;
  std::cin >> uid >> name >> mm >> yy;
  Person p1(uid,name,mm,yy);
  res = p1.computeAge();
  std::cout << res << "\n";
  if(p1.isEligible())
    std::cout << "yes\n";
  else
    std::cout << "no\n";
  std::cout << p1.computeInsurance() << "\n";
  p1.display();
  return 0;
}
