using System;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;
using System.ComponentModel.DataAnnotations.Schema;
using System.Linq;
using System.Threading.Tasks;

namespace Lab3.Models
{
    public class Movie
    {
        [Column("Id")]
        [Key]
        [DatabaseGenerated(DatabaseGeneratedOption.Identity)]
        public int Id { get; set; }
        [Required]
        [Display(Name = "Movie Name")]
        public string MovieName { get; set; }

        [Required]
        [StringLength(50)]
        public string Genre { get; set; }
        
        [Required]
        [StringLength(50)]
        public string Country { get; set; }

        [Required]
        public decimal GrossCollection { get; set; }
        public DateTime ReleasedOn { get; set; }
    }
}
