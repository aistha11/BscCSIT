using System;
using System.Collections.Generic;
using System.Data;
using System.Data.SqlClient;
using System.Linq;
using System.Threading.Tasks;
using Lab3.Models;
using Microsoft.AspNetCore.Mvc;
using Microsoft.Extensions.Configuration;

namespace Lab3.Controllers
{
    public class EmployeeController : Controller
    {
        public IConfiguration Configuration { get; }
        public EmployeeController(IConfiguration configuration)
        {
            Configuration = configuration;
        }

        public IActionResult Index()
        {
            List<Employee> employeeList = new List<Employee>();

            string connectionString = Configuration["ConnectionStrings:DefaultConnection"];
            using (SqlConnection connection = new SqlConnection(connectionString))
            {
                //SqlDataReader
                connection.Open();

                string sql = "Select * From Employee";
                SqlCommand command = new SqlCommand(sql, connection);

                using (SqlDataReader dataReader = command.ExecuteReader())
                {
                    while (dataReader.Read())
                    {
                        Employee employee = new Employee();
                        employee.Id = Convert.ToInt32(dataReader["Id"]);
                        employee.EmployeeName= Convert.ToString(dataReader["EmployeeName"]);
                        employee.Department = Convert.ToString(dataReader["Department"]);
                        employee.Salary = Convert.ToDecimal(dataReader["Salary"]);
                        employee.JoinedOn = Convert.ToDateTime(dataReader["JoinedOn"]);

                        employeeList.Add(employee);
                    }
                }

                connection.Close();
            }
            return View(employeeList);
        }

        public IActionResult Create()
        {
            return View();
        }

        [HttpPost]
        public IActionResult Create(Employee employee)
        {
            if (ModelState.IsValid)
            {
                string connectionString = Configuration["ConnectionStrings:DefaultConnection"];
                using (SqlConnection connection = new SqlConnection(connectionString))
                {
                    string sql = $"Insert Into Employee (EmployeeName, Department, Salary, JoinedOn) Values ('{employee.EmployeeName}', '{employee.Department}','{employee.Salary}', '{employee.JoinedOn}')";

                    using (SqlCommand command = new SqlCommand(sql, connection))
                    {
                        command.CommandType = CommandType.Text;

                        connection.Open();
                        command.ExecuteNonQuery();
                        connection.Close();
                    }
                    return RedirectToAction("Index");
                }
            }
            else
                return View();
        }

        public IActionResult Update(int id)
        {
            string connectionString = Configuration["ConnectionStrings:DefaultConnection"];

            Employee employee = new Employee();
            using (SqlConnection connection = new SqlConnection(connectionString))
            {
                string sql = $"Select * From Employee Where Id='{id}'";
                SqlCommand command = new SqlCommand(sql, connection);

                connection.Open();

                using (SqlDataReader dataReader = command.ExecuteReader())
                {
                    while (dataReader.Read())
                    { 
                        employee.Id = Convert.ToInt32(dataReader["Id"]);
                        employee.EmployeeName = Convert.ToString(dataReader["EmployeeName"]);
                        employee.Department = Convert.ToString(dataReader["Department"]);
                        employee.Salary = Convert.ToDecimal(dataReader["Salary"]);
                        employee.JoinedOn = Convert.ToDateTime(dataReader["JoinedOn"]);
                    }
                }

                connection.Close();
            }
            return View(employee);
        }

        [HttpPost]
        [ActionName("Update")]
        public IActionResult Update_Post(Employee employee)
        {
            string connectionString = Configuration["ConnectionStrings:DefaultConnection"];
            using (SqlConnection connection = new SqlConnection(connectionString))
            {
                string sql = $"Update Employee SET EmployeeName='{employee.EmployeeName}', Department='{employee.Department}', Salary='{employee.Salary}' Where Id='{employee.Id}'";
                using (SqlCommand command = new SqlCommand(sql, connection))
                {
                    connection.Open();
                    command.ExecuteNonQuery();
                    connection.Close();
                }
            }

            return RedirectToAction("Index");
        }

        [HttpPost]
        public IActionResult Delete(int id)
        {
            string connectionString = Configuration["ConnectionStrings:DefaultConnection"];
            using (SqlConnection connection = new SqlConnection(connectionString))
            {
                string sql = $"Delete From Employee Where Id='{id}'";
                using (SqlCommand command = new SqlCommand(sql, connection))
                {
                    connection.Open();
                    try
                    {
                        command.ExecuteNonQuery();
                    }
                    catch (SqlException ex)
                    {
                        ViewBag.Result = "Operation got error:" + ex.Message;
                    }
                    connection.Close();
                }
            }

            return RedirectToAction("Index");
        }
    }
}
