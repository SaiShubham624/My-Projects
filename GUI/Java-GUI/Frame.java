import javax.swing.ImageIcon;
import javax.swing.JFrame;

public class Frame extends JFrame {
    /**
     *
     */
    private static final long serialVersionUID = 1L;

    Frame(int[] Size, boolean Resizable, String Logo2, String Title) {
        this.setSize(Size[0], Size[1]);
        this.setTitle(Title);
        ImageIcon Logo1 = new ImageIcon(Logo2);
        this.setIconImage(Logo1.getImage());
        this.setResizable(Resizable);
        this.setDefaultCloseOperation(3);
        this.setVisible(true);
    }
}
