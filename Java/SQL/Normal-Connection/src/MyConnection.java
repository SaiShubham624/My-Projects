
// Imported Classes and Exceptions
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.ArrayList;
import java.util.Iterator;


// A Class to handle Connections, ResultSet's and Statments or PreparedStatment
public class MyConnection {
    // A Private Attribute
    private java.sql.Connection Conn = DriverManager.getConnection("jdbc:mysql://localhost:3306/javasql", "root",
    "1234567890");
    private ArrayList<String> List = new ArrayList<String>();
    
    // A Constructor to Get Few Things Done before Moving Forward (Also Throws
    // Exception)
    public MyConnection() throws Exception {
        List.add("TODO");
        List.add("DOING");
        List.add("DONE");
        // Starting an Infinte Loop
        while (true) {
            // Checking whether the Connection with the Server is succesfull(breaking the
            // loop here) or not
            try {
                java.sql.Connection Conn = DriverManager.getConnection("jdbc:mysql://localhost:3306/javasql", "root",
                        "1234567890");
                Conn.clearWarnings();
                break;
            }
            // Giving a Warning Message if Connection is not Successfull
            catch (SQLException e) {
                System.out.println(
                        "Failed to Connect to the DataBase\nMake Sure that the Service\nof the Database is Running");
            }
        }
    }
    // Ending the Constructor Here!
        
    // Creating a Method to print the Contents of a Column 
    public void GetColumn(String ListName, String TableName) {
        // Starting an Infinite Loop
        while (true) {
            // Checking that the Statment is Successfully Created(Stopping the Loop Here) or Not
            try {
                // Creating a Statement 
                Statement stm = Conn.createStatement();
                // Creating a ResultSet to Handle the Contents of the Column
                ResultSet res = stm.executeQuery("SELECT " + ListName + " FROM " + TableName);
                System.out.println("Here are the Tasks:");
                // Creating a while loop that prints the Content of the Column
                while (res.next()) {
                    System.out.println(res.getString(ListName));
                }
                // Breaking the Loop if Successfull
                break;

            } 
            // Giving an Error Message that it Failed to Create a Statement
            catch (SQLException e) {
                System.out.println("Failed to Create the Statement!\nTrying Again....");
            }
        }

    }
    // Ending this Method Here!

    // Creating a Method to Add a Column
    public void CreateColumn(String ListName, String TableName){
        while (true){
            try {
                PreparedStatement AddColumn = Conn.prepareStatement("ALTER TABLE " + TableName + " ADD COLUMN " + ListName + " VARCHAR(50)");
                int i = AddColumn.executeUpdate();
                System.out.println("Added List Succesfully");
                List.add(ListName);
                break;
            } catch (SQLException e) {            
                System.out.println("Failed to add the List Please Try Again");
                e.printStackTrace();
                break;
            }
        }
        
    }
    // Ending this Method Here!

    // Creating a Overload Method of 'GetColumn' 
    public void GetColumn(String ListName, String TableName, int Line){
        // Creating a Variable
        int i = 0;
        // Starting an Infinite Loop
        while (true) {
            // Checking that the Statment is Successfully Created(Stopping the Loop Here) or Not
            try {
                // Creating a Statement 
                Statement stm = Conn.createStatement();
                // Creating a ResultSet to Handle the Contents of the Column
                ResultSet res = stm.executeQuery("SELECT " + ListName + " FROM " + TableName);
                System.out.println("Here are the Tasks:");
                // Creating a while loop that prints the Content of the Column
                
                while (res.next() && i < Line) {
                    System.out.println(res.getString(ListName));
                    i = i += 1;
                }
                // Breaking the Loop if Successfull
                break;

            } 
            // Giving an Error Message that it Failed to Create a Statement
            catch (SQLException e) {
                System.out.println("Failed to Create the Statement!\nTrying Again....");
            }
        }
    }
    // Ending this Method Here!

    // Creating a Method to Delete a Column
    public void DeleteColumn(String ColumnName, String TableName){
        try {
            PreparedStatement stm = Conn.prepareStatement("ALTER TABLE " + TableName + " DROP COLUMN " + ColumnName);
            System.out.println("Success!");
        } catch (SQLException e) {
            System.out.println("Failed!");
        }
        // Ending this is Method Here
    }
    // Ending this Method Here!

    public void GetAll() throws Exception{
        Statement stm = Conn.createStatement();
        ResultSet res = stm.executeQuery("SELECT * FROM TASK");
        Iterator Iter = List.iterator();
        while(true){
            // have to do something
        }
    }
}
