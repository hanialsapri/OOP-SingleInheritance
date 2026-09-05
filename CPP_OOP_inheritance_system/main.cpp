
#include<iostream>
#include<string>
using namespace std;

class clsPerson
{

private:
	string _Name;
	string _LastName;
	int _Age;
	string _Addess;
	string _Phone_Namber;
	string _Email;
	int _Id;
	static int counter;
public:



	clsPerson(string Name, string LastName, int Age
		, string Addess, string phone,
		string Email, int Id)
	{
		_Name = Name;
		_LastName = LastName;
		_Age = Age;
		_Addess = Addess;
		_Phone_Namber = phone;
		_Id = Id;
		_Email = Email;
		counter++;
	}
	void setName(string Name)
	{
		_Name = Name;
	}
	string getName()
	{
		return _Name;
	}
	void setLastName(string LastName)
	{
		_LastName = LastName;
	}
	string getLastName()
	{
		return _LastName;
	}
	void setId(int Id)
	{
		_Id = Id;
	}
	int getId()
	{
		return _Id;
	}
	void setEmail(string Email)
	{
		_Email = Email;
	}
	string getEmail()
	{
		return _Email;
	}
	
	void setAddris(string Addess)
	{
		_Addess = Addess;
	}
	string getAddris()
	{
		return _Addess;
	}
	void setAge(int Age)
	{
		if(Age>15)
		_Age = Age;
	}
	int getAge()
	{
		return _Age;
	}
	void setPhone(string Phone_number)
	{
		_Phone_Namber = Phone_number;
	}
	string getPhone()
	{
		return _Phone_Namber;
	}

	void Print()
	{

		cout << "Name :" << _Name << endl;
		cout << "LastName :" << _LastName << endl;
		cout << "Age :" << _Age << endl;
		cout << "Addris :" << _Addess << endl;
		cout << "Phone :" << _Phone_Namber << endl;
		cout << "Id	:" << _Id << endl;
		cout << "Email :" << _Email << endl;


	}

	void setPhone(string n, string m)
	{
		cout << "---------------------------------\n";
		cout << "your phone :" << _Phone_Namber << endl;
		cout << "yor: " << n << endl;
		cout << "hlo : " << m << endl;
		cout << "-----------------------------------\n";
	}
	void setEmail(string n, string m)
	{
		cout << "your Email :" << _Email << endl;
		cout << "idn: " << n << endl;
		cout << "hlo : " << m << endl;

	}


};
class  clsEmploye : public clsPerson
{
	float  _Salary;
	string  _Department;
	string _Title;
public:
	clsEmploye(string Name, string LastName,int Age, 
		string Addess,
		string phone, string Email, int Id
		, string Department, string Title, float Salary)
		:clsPerson(Name, LastName, Age, Addess, phone, Email, Id)
	{
		_Salary = Salary;
		_Department = Department;
		_Title = Title;
	}
	void setAge(float salary)
	{
		if(salary>0)
		_Salary = salary;
	}
	float getSalary()
	{
		return _Salary;
	}

	void setTitle(string Title)
	{
		_Title = Title;
	}
	string getTitle()
	{
		return _Title;
	}
	void setDepartment(string Department)
	{
		_Department = Department;
	}
	string getDepartment()
	{
		return _Department;
	}

	void Print()
	{
		cout << "***************************************************\n";
		clsPerson::Print(); //ÈåÐí ÇáØÑíÞå Çæ ÈØÑíÞÉ ÇáÇæÝÑ áæÏíäÌ
		
		cout << "Department :" << getDepartment() << endl;
		cout << "Title      :" << getTitle() << endl;
		cout << "Salary    :" << getSalary() << endl;
		cout << "***************************************************\n";

	}
};
class clsDeveloper :public clsEmploye
{
private:
	string _MainProgrammingLanguage;
public:

	clsDeveloper(string Name, string LastName, int Age, string Addris, string phone, string Email,
		int Id, string Department, string Title, float Salary
		, string MainProgrammingLanguage)
		:clsEmploye(Name, LastName, Age, Addris, phone, Email,
			Id, Department, Title, Salary)
	{
		_MainProgrammingLanguage = MainProgrammingLanguage;

	}
	void setMainProgrammingLanguage(string MainProgrammingLanguage)
	{
		_MainProgrammingLanguage = MainProgrammingLanguage;
	}
	string getMainProgrammingLanguage()
	{
		return _MainProgrammingLanguage;

	}
	void Print()
	{
		cout << "***************************************************\n";
		clsPerson::Print();	 //ÈåÐí ÇáØÑíÞå Çæ ÈØÑíÞÉ ÇáÇæÝÑ áæÏíäÌ
		
		cout << "Delevoper  :" << getMainProgrammingLanguage() << endl;
		cout << "***************************************************\n";

	}



};




int clsPerson::counter = 0;

int main()
{

	clsDeveloper Developer("Hani", "ALsapri", 20, "Alsahol",
		"716692512", "@hahjdgjh", 50, "progreaing", "cvoi", 5000, "c++");
	Developer.Print();

	clsDeveloper Developer1("Mohand", "Alhater", 22, "Alsahol",
		"716645", "@hahjdgjh", 50, "progreaing", "cvoi", 5000, "c++");

	Developer1.setEmail("hanialsapri@jkhgk.com");
	Developer1.Print();

	return 0;
}