

import javax.swing.JButton;
import javax.swing.JFrame;

public class MyFrame extends JFrame {
    
    private static final long serialVersionUID = -3334144411496372107L; // Don't Care about This Line!
    JButton Button;

    MyFrame() {
        Button = new JButton();
        Button.setBounds(200, 100, 100, 60);
        Button.addActionListener(Hi -> System.out.println("HI"));
        Button.setText("CLICK ME!");
        Button.setFocusable(false);
        this.setSize(500, 500);
        this.setDefaultCloseOperation(3);
        this.add(Button);
        this.setLayout(null);
        this.setVisible(true);  
    }
}
