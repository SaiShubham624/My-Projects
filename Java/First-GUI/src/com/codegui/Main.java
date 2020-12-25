package com.codegui;


import javax.swing.*;
import javax.swing.border.Border;

import java.awt.*;

public class Main {

    public static void main(String[] args) {
        // Creating a Border to display in My Window
        Border border = BorderFactory.createLineBorder(Color.green,3);

        // Creating a Window using My Custom Class
        MyFrame Window = new MyFrame(new int[]{0, 0}, 0xFFFFFF, "My Application", "Logo.jpeg", true);

        // Creating an ImageIcon to display in the Window
        ImageIcon Image = new ImageIcon("Logo.jpeg");

        // Creating a Label and Setting its Properties to Show Something in my Window
        MyLabel Label = new MyLabel();
        Label.setText("Bro This is My First Java GUI");
        Label.SetIcon(Image, 25);
        Label.SetTextPositionLabel(0, 1);
        Label.SetLabelAlignment(0, 0);
        Label.setBorder(true, border, 0x000000);

        // Adding the Labels to my Window and Displaying It

        Window.add(Label);
//        Window.setLayout(null);
        Window.pack();
        Window.setVisible(true);


    }
}
