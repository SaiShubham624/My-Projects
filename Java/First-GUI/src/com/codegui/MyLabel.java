package com.codegui;

import javax.swing.*;
import javax.swing.border.Border;
import java.awt.*;

public class MyLabel extends JLabel {

    public void setBorder(boolean Opaque, Border isBorder, int Color){
        this.setOpaque(Opaque);
        this.setBorder(isBorder);
        this.setBackground(new Color(Color));
    }
    public void SetIcon(ImageIcon Image, int TextGap){
        this.setIcon(Image);
        this.setIconTextGap(TextGap);
    }
    public void SetTextPositionLabel(int x, int y){
        this.setHorizontalTextPosition(x);
        this.setVerticalTextPosition(y);
    }public void SetLabelAlignment(int x, int y){
        this.setHorizontalAlignment(x);
        this.setVerticalAlignment(y);
    }

}
/*
* CENTER = 0
* TOP = 1
* LEFT = 2
* bottom = 3
* RIGHT = 4
* */