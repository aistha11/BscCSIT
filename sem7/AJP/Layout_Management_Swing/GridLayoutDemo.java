import java.awt.*;
import javax.swing.*;

public class GridLayoutDemo {
    public static void main(String[] args) {
        JFrame f = new JFrame("Grid Layout");
        JButton b1 = new JButton("B1");
        JButton b2 = new JButton("B2");
        JButton b3 = new JButton("B3");
        JButton b4 = new JButton("B4");
        JButton b5 = new JButton("B5");
        JButton b6 = new JButton("B6");
        f.setLayout(new GridLayout(3, 2));
        f.add(b1);
        f.add(b2);
        f.add(b3);
        f.add(b4);
        f.add(b5);
        f.add(b6);
        f.setSize(400, 250);
        f.setVisible(true);
        f.setDefaultCloseOperation(3);
    }
}