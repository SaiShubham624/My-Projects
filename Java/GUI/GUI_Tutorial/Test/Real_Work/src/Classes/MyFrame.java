package Classes;

import javax.swing.ImageIcon;
import javax.swing.JFrame;

public class MyFrame extends JFrame{

    private static final long serialVersionUID = 1L;

    public MyFrame(String Title, String Image) {
        this.setTitle(Title);
        ImageIcon Logo = new ImageIcon(Image);
        this.setIconImage(Logo.getImage());
        this.setDefaultCloseOperation(3);
        this.setLayout(null);
    }
    public void SetSpecs(int[] Size, boolean Resizable){
        this.setSize(Size[0] , Size[1]);
        this.setResizable(Resizable);
        this.setVisible(true);
    }
    
    
}
