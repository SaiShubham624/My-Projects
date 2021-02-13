
// This is a (Console Version) Task Manager Application

import java.util.ArrayList;


public class App {
    public static void main(String[] args) throws Exception {
        MyConnection Conn = new MyConnection();        
        Conn.GetAll();
        ArrayList<String> Column = new ArrayList<>();
        Column.add("TODO");
        Column.add("DOING");
        Column.add("DONE");
    }
}
