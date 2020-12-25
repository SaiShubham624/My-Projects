package com.intelligui;

import javax.swing.*;

public class Window extends JFrame {
    Window(String Title, boolean Resizable, String Icon, int[] Size)
    {
        this.setSize(Size[0], Size[1]);
        this.setTitle(Title);
        ImageIcon Logo = new ImageIcon(Icon);
        this.setIconImage(Logo.getImage());
        this.setDefaultCloseOperation(3);
        this.setVisible(true);
    }

}
