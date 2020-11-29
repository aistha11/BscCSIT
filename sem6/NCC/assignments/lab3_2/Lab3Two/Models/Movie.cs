using System;
using System.ComponentModel.DataAnnotations;
using System.ComponentModel.DataAnnotations.Schema;

namespace Lab3Two.Models
{
    public class Movie
    {
        [Column("Id")]
        [Required]
        [Key]
        [DatabaseGenerated(DatabaseGeneratedOption.Identity)]
        public int Id { get; set; }

        [Column("MovieName")]
        [Required]
        [Display(Name = "Movie Name")]
        [StringLength(50)]
        public string MovieName { get; set; }

        [Column("Genre")]
        [Required]
        [Display(Name = "Genre")]
        [StringLength(50)]
        public string Genre { get; set; }

        [Column("Country")]
        [Required]
        [Display(Name = "Country")]
        [StringLength(50)]
        public string Country { get; set; }

        [Column("GrossCollection")]
        [Required]
        [Display(Name = "Gross Collection")]
        public decimal GrossCollection { get; set; }

        [Column("ReleasedDate")]
        [Required]
        [Display(Name = "Released Date")]
        public DateTime ReleasedDate{ get; set; }
    }
}
