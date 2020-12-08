using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using Microsoft.AspNetCore.Http;
using Microsoft.AspNetCore.Mvc;

namespace Lab4.Controllers
{
    public class TestSessionController : Controller
    {
        public IActionResult Index()
        {
            HttpContext.Session.SetString("Name", "Bijay Shrestha");
            return View();
        }

        public IActionResult GetSessionData()
        {
            string sessData = HttpContext.Session.GetString("Name");
            ViewData["name"] = sessData;
            return View();
        }
    }
}
