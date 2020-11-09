using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Assignment1
{
    class FileHandling
    {
        static void Main(string[] args)
        {
            // Create and Write to a file
            File.WriteAllText("newfile.txt", "Creating and Writing to a file");
            // Check whether file exists
            if (!File.Exists("newfile.txt"))
            {
                Console.WriteLine("File doesnot exist");
            }
            else
            {
                Console.WriteLine("File Exists");
            }
            // Read from a file
            string txt = File.ReadAllText("newfile.txt");
            Console.WriteLine(txt);

            //string path = "file1.txt";
            //string newPath = "file3.txt";
            //if (!File.Exists(path))
            //{
            //    File.WriteAllText(path, "This is a file handling in c#.");
            //}
            //else
            //{
            //    Console.WriteLine($"File already exists in {path}");
            //}
            //File.AppendAllText(path, "Appending in the new line in the existing file");
            //string mytxt = File.ReadAllText(path);
            //if (!File.Exists(newPath))
            //{
            //    File.Copy(path, newPath);
            //}
            //else
            //{
            //    Console.WriteLine($"File already exists in {newPath}");

            //}
            //string newtxt = File.ReadAllText(newPath);
            //Console.WriteLine(newtxt);
            Console.ReadKey();
        }
    }
}
