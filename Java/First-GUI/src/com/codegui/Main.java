package com.codegui;
import javax.swing.JFrame;
public class Main {

    public static void main(String[] args) {
        // Creating a New Window
	    JFrame Window = new JFrame(); // Intializes a New Window
        Window.setTitle("My Application"); // Setting the Size of the Window
        Window.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE); // Telling the Windows that Close the Window when hit on the Close Button
        Window.setResizable(false); // This Line Means that No User can the Size of the Window
        Window.setSize(420, 420); // Setting the Size of the Window
	    Window.setVisible(true); // Telling the Windows that Please make the window Visible
        
    }
}
