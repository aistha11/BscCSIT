using System;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;
using System.ComponentModel.DataAnnotations.Schema;
using System.Linq;
using System.Threading.Tasks;

namespace EfCoreCrud.Models
{
    public class Student
    {
        [Column("StudentId")]
        [Required]
        [Key]
        [DatabaseGenerated(DatabaseGeneratedOption.Identity)]
        public int Id { get; set; }

        [Column("Name")]
        [Required]
        [Display(Name = "Student Name")]
        [StringLength(200)]
        public string Name { get; set; }
        
        [Column("RollNo")]
        [Required]
        [Display(Name = "Roll Number")]
        public string RollNo { get; set; }
        
        [Column("Class")]
        [Required]
        [Display(Name = "Class")]
        [StringLength(50)]
        public string Class { get; set; }
    }
}
