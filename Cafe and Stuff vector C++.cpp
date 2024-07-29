#include <iostream>
#include <vector>

using namespace std;

class Cafe{
    
    string NameCafe;
    string Company;
    string Country;
    string Street;
    
    public:
    
    void setNameCafe(string NameCafe)
    {
        this->NameCafe = NameCafe;
    }

    string getNameCafe()
    {
        return NameCafe;
    }
    
    void setCompany(string Company){
        this->Company = Company;
    }
    
    string getCompany(){
        return Company;
    }
    
    void setCountry(string Country){
        this->Country = Country;
    }
    
    string getCountry(){
        return Country;
    }
    
    void setStreet(string Street){
        this->Street = Street;
    }
    
    string getStreet(){
        return Street;
    }

};

class Human {
    string Name;
    string LastName;
    string Sex;
    int Age;
    
    public:
    
    void print()
    {
        cout << Name << " " << LastName << " " << Sex << " " << Age << endl;
    }
    
    Human(string p_name, string p_lastname, string p_sex, int p_age)
    {
        Name = p_name;
        LastName = p_lastname;
        Sex = p_sex;
        Age = p_age;
    }
    
    Human()
    {
        
    }
    
    
    void setName(string Name)
    {
        this->Name = Name;
    }

    string getName()
    {
        return Name;
    }
    
    void setLastName(string LastName)
    {
        this->LastName = LastName;
    }
    
    string getLastName()
    {
        return LastName;
    }
    
    void setSex(string Sex)
    {
        this->Sex = Sex;
    }
    
    string getSex()
    {
        return Sex;
    }
    
    void setAge(int Age)
    {
        this->Age = Age;
    }
    
    int getAge()
    {
        return Age;
    }

};

int main()
{
    Cafe cafe;
    cafe.setNameCafe("Name: MacDonalds");
    cafe.setCompany("Company: American");
    cafe.setCountry("Country: America");
    cafe.setStreet("Street: West Vest 28.");
    
    cout << cafe.getNameCafe() << endl;
    cout << cafe.getCompany() << endl;;
    cout << cafe.getStreet() << endl;
    cout << cafe.getCountry() << endl;
    
    cout << endl;
    
    vector <Human> humans;
    
    int count;
    cout << "Сколько людей хотите добавить сотрудников?: ";
    cin >> count;
    
    for(int i = 0; i < count; i++){
        Human human;
        string name;
        cout << "Введите имя сотрудника: ";
        cin >> name;
        human.setName(name);
        string lastname;
        cout << "Введите фамилию сотрудника: ";
        cin >> lastname;
        human.setLastName(lastname);
        string sex;
        cout << "Введите пол сотрудника: ";
        cin >> sex;
        human.setSex(sex);
        int age;
        cout << "Введите возраст сотрудника: ";
        cin >> age;
        human.setAge(age);
        humans.push_back(human);
    }
    
    for(int i = 0; i < count; i++){
        cout << humans[i].getName() <<  endl;
        cout << humans[i].getLastName() << endl;
        cout << humans[i].getSex() << endl;
        cout << humans[i].getAge() << endl;
    }
    return 0;
}



