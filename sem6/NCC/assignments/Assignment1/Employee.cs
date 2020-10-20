using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Assignment1
{
    class Employee
    {
		// a.	Field Members: firstName, lastName, salary
		private string _firstName;
		private string _lastName;
		private double _salary;
		// b.	Properties : FirstName, LastName, FullName, Salary
		public string FirstName
		{
			get => _firstName;
			set
			{
				_firstName = value;
			}
		}

		public string LastName
		{
			get => _lastName;
			set
			{
				_lastName = value;
			}
		}

		public double Salary
		{
			get => _salary;
			set
			{
				_salary = value;
			}
		}

		// c.	Parameterized Constructor
		public Employee(string firstName, string lastName, double salary)
		{
			_salary = salary;
			_lastName = lastName;
			_firstName = firstName;
		}

		// d.	Method: IncrementSalary(double s), Display() Method for showing details of employee
		public void IncrementSalary(double s)
		{
			_salary += s;
		}

		public void Display()
		{
			Console.WriteLine("Full Name is {0} {1}", _firstName, _lastName);
			Console.WriteLine("Salary is {0}", _salary);
		}
	}
}
