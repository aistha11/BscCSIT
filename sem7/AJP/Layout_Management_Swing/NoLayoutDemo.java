
import javax.swing.*;

public class NoLayoutDemo {
    public static void main(String[] args) {
        JFrame f = new JFrame("No Layout");
        f.setLayout(null);
        JButton b1 = new JButton("Button 1");
        b1.setBounds(30, 50, 100, 20);
        f.add(b1);
        f.setSize(500, 500);
        f.setVisible(true);
        f.setDefaultCloseOperation(3);
    }
}