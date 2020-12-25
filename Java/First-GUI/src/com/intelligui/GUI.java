package com.intelligui;


import javax.swing.*;
import java.awt.*;

public class GUI {
    public static void main(String[] args) {
        Window MainWindow = new Window("Application", true, "Logo.jpeg", new int[]{750, 750});
        JPanel SidePanel = new JPanel();
        MainWindow.setLayout(null);
        SidePanel.setSize(190, 190);
        SidePanel.setBackground(Color.red);
        SidePanel.setBounds(20, 20, 250, 250);
        MainWindow.add(SidePanel);
        MainWindow.setVisible(true);
    }
}
