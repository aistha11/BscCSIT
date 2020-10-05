using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ObjectOrientedPRogramming
{
    public interface Television
    {
        
        void Control(string type);
    }

    public class Remote : Television
    {
        enum Controls { 
            VolumeUp ,
            VolumeDown,
            PowerOn,
            PowerOff,
            Next,
            Previous,
        }
        public void Control(string type)
        { 
            switch (type)
            {
                case "volumeUp":
                Console.WriteLine(Controls.VolumeUp);
                     break;
                case "volumeDown":
                Console.WriteLine(Controls.VolumeDown);
                     break;
                case "powerOff":
                    Console.WriteLine(Controls.PowerOff);
                    break;
                default:
                    break;
            }
        }
    }
    public class Mobile : Television
    {
        enum SwipesGesture { 
            Up,Down,Left,Right,Center,DoubleCenter
        }
        public void Control(string type)
        {
            switch (type)
            {
                case "volumeUp":
                    Console.WriteLine(SwipesGesture.Up);
                    break;
                case "volumeDown":
                    Console.WriteLine(SwipesGesture.Down);
                    break;
                case "powerOff":
                    Console.WriteLine(SwipesGesture.DoubleCenter);
                    break;
                default:
                    break;
            }
        }
    }
}
