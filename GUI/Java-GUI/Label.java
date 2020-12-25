import javax.swing.ImageIcon;
import javax.swing.JLabel;

public class Label extends JLabel {
    private static final long serialVersionUID = 1L; // Don't know what is this It just gives me warns me so I just
                                                     // added it

    Label(String Contents, boolean isImage) {
        if (isImage) {
            ImageIcon Icon = new ImageIcon(Contents);
            this.setIcon(Icon);
        }
        if (!isImage) {
            this.setText(Contents);
        }
    }

    public void addComponent(String Contents, boolean isImage) {
        if (isImage) {
            ImageIcon Icon = new ImageIcon(Contents);
            this.setIcon(Icon);
        }
        if (!isImage) {
            this.setText(Contents);
        }
    }
}
