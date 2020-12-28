
// Imported Classes
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.Statement;
import java.util.Scanner;

// Main Class
public class App {
    // Entry Point of the
    public static void main(String[] args) throws Exception {
        Scanner Ask = new Scanner(System.in);

        String[] Contents = { "Add a New List", "Show a List", "Add a new Task to a Certain List" };
        String[] Lists = { "TODO", "DOING", "DONE" };
        System.out.println("This is a TODO List Manager");
        System.out.println("What Do you want to Do?");
        for (int i = 0; i < Contents.length; i++) {
            System.out.println("(" + (i + 1) + ") " + Contents[i]);
        }
        System.out.println("Enter the Serial Number -> ");
        int Decision = Ask.nextInt();
        Ask.close();
        // Scanner Ask1 = new Scanner(System.in);

        if(Decision == 1){

        }
    }



    public static ResultSet RunStatment(String Statement, boolean isUpdate) throws Exception {
        Class.forName("com.mysql.cj.jdbc.Driver");
        Connection Conn = DriverManager.getConnection("jdbc:mysql://localhost/javasql", "root", "1234567890");
        if (isUpdate) {
            Statement st = Conn.createStatement();
            st.executeUpdate(Statement);
            return null;
        } else {
            Statement st = Conn.createStatement();
            ResultSet Res = st.executeQuery(Statement);
            Conn.close();
            return Res;
        }
        
    }
    public static String[] Append(String[] Arr, String Element){
        int Len = Arr.length + 1;
        String[] newarr = new String[Len];
        for(int i = 0; i < Len-1; i++){
            newarr[i] = Arr[i];
        }
        newarr[Len-1] = Element;
        return newarr;
    }
}

