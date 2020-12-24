package com.codegui;

import javax.swing.*;
import java.awt.*;

public class MyFrame extends JFrame {
    MyFrame(int[] Size, int Color, String Title, String ImageName, boolean Resizable){
        this.setTitle(Title); // Setting the Size of the Window
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE); // Telling the Windows that Close the Window when hit on the Close Button
        this.setResizable(Resizable); // This Line Means that No User can the Size of the Window
        this.setSize(Size[0], Size[1]); // Setting the Size of the Window

        this.setVisible(true); // Telling the Windows that Please make the window Visible

        // Setting the Logo of our Window
        ImageIcon Logo = new ImageIcon(ImageName); // This Line Creates an Image Icon
        this.setIconImage(Logo.getImage()); // This Line Changes the Icon of the Window

        // Changing the Background Image of the Window (Not Needed Though)
        this.getContentPane().setBackground(new Color(Color));
    }
}
