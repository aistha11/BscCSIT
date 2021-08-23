using Microsoft.EntityFrameworkCore;
using System.Diagnostics.CodeAnalysis;

namespace Lab3Two.Models
{
    public class AppDbContext : DbContext
    {
        public AppDbContext(DbContextOptions<AppDbContext> options) : base(options)
        {
        }

        public DbSet<Movie> Movies { get; set; }
        public DbSet<Bike> Bikes { get; set; }
        public DbSet<Student> Students { get; set; }
    }
}
