using System;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;
using System.Linq;
using System.Threading.Tasks;

namespace Lab2.Models
{
    public class Model1
    {
        [Display(Name = "First Name")]
        [Required]
        [StringLength(100, MinimumLength = 3, ErrorMessage = "Your name is too short")]
        public string FullName { get; set; }

        [Display(Name = "Email")]
        [EmailAddress]
        public string Email { get; set; }

        [Display(Name = "Salary")]
        [Required]
        public decimal Salary { get; set; }
    }
}
