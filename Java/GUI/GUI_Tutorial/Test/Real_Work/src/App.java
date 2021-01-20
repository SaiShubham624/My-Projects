
import javax.swing.JLabel;

import java.awt.Color;

import Classes.*;

public class App {
    public static void main(String[] args) throws Exception {
        System.out.println("GUI Starting......");
        MyFrame MainWindow = new MyFrame("Application", "Main_Image.jpg");
        MainWindow.SetSpecs(new int[] { 420, 420 }, true);
        JLabel Text = new JLabel("Hi Bro!");
        Text.setBounds(100, 130, 210, 210);
        MainWindow.setBackground(Color.red);
        MainWindow.add(Text);
        MainWindow.setVisible(true);
    }
}
