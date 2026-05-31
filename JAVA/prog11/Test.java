package prog11;

import javax.swing.*;
import java.awt.event.*;

public class Test extends JFrame implements ActionListener {

    JTextField t1, t2;
    JButton b;
    JLabel l;

    Test() {
        t1 = new JTextField();
        t2 = new JTextField();
        b = new JButton("Add");
        l = new JLabel();

        t1.setBounds(50, 30, 100, 20);
        t2.setBounds(50, 60, 100, 20);
        b.setBounds(50, 90, 100, 30);
        l.setBounds(50, 130, 150, 20);

        add(t1);
        add(t2);
        add(b);
        add(l);

        b.addActionListener(this);

        setSize(250, 200);
        setLayout(null);
        setVisible(true);

        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }

    public void actionPerformed(ActionEvent e) {

        String s1 = t1.getText();
        String s2 = t2.getText();

        int a = Integer.parseInt(s1);
        int b = Integer.parseInt(s2);

        int sum = a + b;

        l.setText("Sum = " + sum);
    }

    public static void main(String[] args) {
        new Test();
    }
}


