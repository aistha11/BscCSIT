using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using Microsoft.AspNetCore.Mvc;

namespace Lab4.Controllers
{
    public class TestQueryStringController : Controller
    {
        public IActionResult Index(int id, string name)
        {
            ViewData["id"] = id;
            ViewData["name"] = name;
            return View();
        }

        public string Display(int id, string name)
        {
            return $"Id is {id}\n Name is {name}";
        }
    }
}
