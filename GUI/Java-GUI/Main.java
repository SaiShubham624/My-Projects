public class Main {
    public static void main(String[] args) {
        Frame Window = new Frame(new int[]{500, 500}, true, "Logo.jpeg", "My Application");
        Label Text = new Label("Yo Bro!", false);
        Text.addComponent("Logo.jpeg", true);
        Window.add(Text);
        Window.setVisible(true);
    }
}
