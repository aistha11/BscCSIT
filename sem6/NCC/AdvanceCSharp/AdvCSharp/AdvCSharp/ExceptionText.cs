using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AdvCSharp
{
    class ExceptionText
    {
        
        static void Main(string[] args)
        {
            // try/catch
            string errorMsg = "";
            try
            {
                int a, b;
                Console.Write("\tEnter a: ");
                a = Convert.ToInt32(Console.ReadLine());
                Console.Write("\tEnter b: ");
                b = Convert.ToInt32(Console.ReadLine());
                double x = a / b;
                Console.WriteLine($"\t{a}/{b} is {x}");
            }
            catch (DivideByZeroException e1)
            {
                errorMsg = e1.ToString();
                
                Console.WriteLine("\tCannot Divide By Zero");
            }
            catch(FormatException e2)
            {
                errorMsg = e2.ToString();
                Console.WriteLine("\tYou just Entered a number.");
            }
            catch (Exception e)
            {
                errorMsg = e.ToString();
                Console.WriteLine("\tOops Error Occurred");
            }
            finally
            {
                Console.WriteLine("\tThis is always executed as I am finally");
            }
            Console.ReadKey();
        }
    }
}
