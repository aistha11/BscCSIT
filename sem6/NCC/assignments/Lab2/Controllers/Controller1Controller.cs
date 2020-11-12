using Microsoft.AspNetCore.Mvc;

namespace Lab2.Controllers
{
    public class Controller1Controller : Controller
    {
        //public IActionResult Index()
        //{
        //    return View();
        //}
        public string Index()
        {
            return "This is my default action...";
        }
        public IActionResult Details(string detail)
        {
            ViewData["detail"] = detail;
            return View();
        }

        //public IActionResult Show(string name, string user_address)
        //{
        //    ViewData["name "] = name;
        //    ViewBag.UserAddress = user_address;
        //    return View();
        //}
        public IActionResult Show()
        {
            ViewData["Message"] = "Message from ViewData";
            ViewBag.Greet = "Greet from ViewBag";
            return View();
        }


    }
}
