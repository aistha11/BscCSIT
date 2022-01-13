import java.awt.*;
import javax.swing.*;

public class FlowLayoutDemo {
    public static void main(String[] args) {
        JFrame f = new JFrame("Flow Layout");
        JButton b1 = new JButton("B1");
        JButton b2 = new JButton("Button 2");
        JButton b3 = new JButton("B3");
        JButton b4 = new JButton("B4");
        JButton b5 = new JButton("B5");
        f.setLayout(new FlowLayout());
        f.add(b1);
        f.add(b2);
        f.add(b3);
        f.add(b4);
        f.add(b5);
        f.setSize(220, 220);
        f.setVisible(true);
        f.setDefaultCloseOperation(3);
    }
}