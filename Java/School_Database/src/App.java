import java.sql.Connection;
import java.sql.DriverManager;
import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        System.out.println("This is a School DataBase");
        String[] Contents = { "Change a Certain DataBase", "Show a Certain Record", "Add a Record"};
        System.out.println("Here you can");
        for(int i = 0; i < Contents.length; i++){
            System.out.println(i + " " + Contents[i]);
        }
        Class.forName("com.mysql.cj.jdbc.Driver");
        Scanner Ask = new Scanner(System.in);
        System.out.println("Enter the Serial Number corresponding to the Action -> ");
        int Decison = Ask.nextInt();
        Connection Conn = DriverManager.getConnection("jdbc:mysql://localhost:3306/javasql", "root", "1234567890");
        switch(Decison){
            case 1:
                System.out.println("Cannot Do!");
                break;
            case 2:
                System.out.println("Cannot Do!");
                break;
            default:
                System.out.println("Cannot Do!");
                break;

        }
        Ask.close();
    }
}
