using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using Lab2.Models;
using Microsoft.AspNetCore.Mvc;

namespace Lab2.Controllers
{
    public class Controller2Controller : Controller
    {
        public IActionResult Index()
        {
            return View();
        }

        public IActionResult Display(int n, string greet)
        {
            ViewData["n"] = n;
            ViewBag.Greet = greet;
            return View();
        }

        [HttpGet]
        public IActionResult SimpleBinding()
        {
            return View(new Model1() { FullName = "AAA BBB", Email = "valid@gmail.com", Salary = 12345678 });
        }
        [HttpPost]
        public IActionResult SimpleBinding(Model1 webUser)
        {
            if (ModelState.IsValid)
                return Content("Hello" + webUser.Email);
            else
                return View(webUser);
        }

    }
}
