using System;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;
using System.ComponentModel.DataAnnotations.Schema;
using System.Linq;
using System.Threading.Tasks;

namespace Lab3Two.Models
{
    public class Bike
    {
        [Column("Id")]
        [Required]
        [Key]
        [DatabaseGenerated(DatabaseGeneratedOption.Identity)]
        public int Id { get; set; }

        [Column("BikeName")]
        [Required]
        [Display(Name = "Bike Name")]
        [StringLength(50)]
        public string BikeName { get; set; }

        [Column("Color")]
        [Required]
        [Display(Name = "Color")]
        [StringLength(50)]
        public string Color { get; set; }

        [Column("Model")]
        [Required]
        [Display(Name = "Model")]
        [StringLength(50)]
        public string Model { get; set; }

        [Column("Price")]
        [Required]
        [Display(Name = "Price")]
        public decimal Price { get; set; }

        [Column("ReleasedDate")]
        [Required]
        [Display(Name = "Released Date")]
        public DateTime ReleasedDate { get; set; }
    }
}
