#include <iostream>

class employee
{

	private:
		int Salary;
	public:
		std::string Name;
		std::string Position;
		int Age;
        void set_salary(int salary)
		{
			Salary = salary;

		}
		int get_salary()
		{
			return Salary;
		}
	void print_info()
	{
		std::cout << "Name: " << Name << std::endl;
		std::cout << "Position: " << Position << std::endl;
		std::cout << "Age: " << Age << std::endl;
		std::cout << "Salary: " << Salary << std::endl;
	}
	employee(std::string name, std::string position, int age, int salary)
	{
		Name = name;
		Position = position;
		Age = age;
		Salary = salary;
    }
};

int main() {
    employee emp1("John", "Manager", 30, 50000);
    emp1.print_info();
    return 0;
}
