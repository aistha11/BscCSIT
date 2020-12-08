using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using Microsoft.AspNetCore.Mvc;

namespace Lab4.Controllers
{
    public class TestTempDataController : Controller
    {
        public IActionResult Index()
        {
            return View();
        }

        public IActionResult Method1()
        {
            TempData["UserId"] = 11;
            return View();
        }

        public string Method2()
        {
            if (TempData["UserId"] == null)
            {
                return "There is no value in tempData";
            }
            string userId = TempData["UserId"].ToString();
            return $"The user id from temp data is: {userId}";
        }

        //public string Third()
        //{
        //    if(TempData["UserId"] == null)
        //    {
        //        return "There is no value in tempData";
        //    }
        //    string userId = TempData["UserId"].ToString();
        //    return $"The user id from temp data is: {userId}";
        //}
    }
}
