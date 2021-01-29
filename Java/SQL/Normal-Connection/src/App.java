
// This is a Console Todo Manager Application
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;
import java.sql.Statement;
import java.sql.ResultSet;
import java.util.ArrayList;
import java.util.Iterator;

public class App {
    public static void main(String[] args) throws Exception {
        Connection Conn = DriverManager.getConnection("jdbc:mysql://localhost:3306/javasql", "root", "1234567890");
        
        //#region 'Welcoming'
        System.out.println("Welcome to the TODO Manager (Console Version)");
        System.out.println("------------------------------------------------------------");
        System.out.println("\tHere you can Keep Track of your Tasks");
        System.out.println("Here is your Current Track");
        //#endregion
        //#region 'Showing the Track'
        try {

            Statement stm = Conn.createStatement();
            ResultSet res = stm.executeQuery("SELECT * FROM Task");
            while (res.next()) {
                System.out.println(res.getString("Name"));
            }

        } catch (SQLException e) {

        }
        //#endregion
        ArrayList<String> Column = new ArrayList<String>();
        Iterator<String> Iter = Column.listIterator();
        Column.add("TODO");
        Column.add("DOING");
        Column.add("DONE");

    }
}
