import javax.swing.*;

public class Main{
    public static void main(String[] args) {
        System.out.println("Hi This is Sai");
        JFrame Window = new JFrame();
        Window.setSize(420, 420);
        JLabel Text = new JLabel();
        Text.setText("Yop");
        Window.add(Text);
        Window.setVisible(true);
    }
}
