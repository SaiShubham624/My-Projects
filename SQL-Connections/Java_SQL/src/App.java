import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        System.out.println("Hello, World!");
        Scanner Ask = new Scanner(System.in);
        System.out.println("Please Enter your Name: ");
        String Name = Ask.nextLine();
        System.out.println("Okay your Name is " + Name);
        System.out.println("Okay Bye I know this Program is Pretty Weird");
        Ask.close();
    }
}
