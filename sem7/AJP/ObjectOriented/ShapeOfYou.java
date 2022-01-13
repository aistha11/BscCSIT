
interface Shape {
    double area();
    double volume();
}

class Visual {
    String color = "White";
    void myColor(){
        System.out.println("The color is "+color);
    }
}

class Rectangle extends Visual implements Shape {
    double l, b, h;

    Rectangle(){
        this(0, 0, 0);
        System.out.println("Creating Rectangle.");
    }

    public Rectangle(double l, double b, double h) {
        this.l = l;
        this.b = b;
        this.h = h;
    }

    public Rectangle(double l, double b) {
        this.l = l;
        this.b = b;
    }

    @Override
    public double area() {
        return l * b;
    }

    @Override
    public double volume() {

        return l * b * h;
    }

    @Override
    void myColor() {
        System.out.println("The color is "+color);
        super.myColor();
    }
}

public class ShapeOfYou {
    public static void main(String[] args) {
        Rectangle rect = new Rectangle(5, 7);
        System.out.println("The area is " + rect.area());
        rect.color = "Red";
        rect.myColor();
        Rectangle rect2 = new Rectangle(5, 7, 4);
        System.out.println("The volume is " + rect2.volume());
        rect2.myColor();
        Rectangle emptyRect = new Rectangle();
        System.out.println(emptyRect.area());
    }
}