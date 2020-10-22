

// import java.util.Scanner;
public class PrS1 {
    int Resultl;
    public static void Table(int n) {
        for (int i = 0; i < 11; i++) {
            System.out.printf("%d x %d = %d\n",n ,i, n*i);
        }
    }
    public static void Pattern1(int f) {
        for(int i = 0; i < f; i++){
            for(int j = 0; j < i + 1; j++){
                System.out.print("*");
            }
            System.out.println();
        }
    }
    public static void Pattern2(int n) {
        for(int i = 0; i < n; i++){
            for(int j = n; j > i; j--){
                System.out.print("*");
            }
         System.out.println();
        }
    }
    public static int SumNatural(int n) {
        if(n == 1){
            return 1;
        }
        return n + SumNatural(n - 1);
    } 
    public static int Fibbonaci(int n){
        if(n == 1){
            return 0; 
        }
        if(n == 2){
            return 1;
        }
        return Fibbonaci(n - 2) + Fibbonaci(n - 1); 
    }
    public static void Average(int ...Marks) {
        int Final = 0;
        for(int i = 0; i < Marks.length; i++){
            Final = Final + Marks[i];
            }
        System.out.println(Final/Marks.length);
            
        }
        
        
    
    public static void main(String[] args) {
        // Scanner x = new Scanner(System.in);
        
        // System.out.println("Enter the Number: "); // For Testing Problem 1
        // int a = x.nextInt();
        // Table(a);   
        // x.close();
        
        // Pattern1(5); // For Testing Problem 2
        
        // System.out.println("Enter the Number: "); // For Testing Problem 3
        // int Num = x.nextInt();
        // int Num = 45;
        // int Numw = SumNatural(Num);
        // System.out.println(Numw);
        // x.close();
        // Pattern2(4);
        
        // int N = Fibbonaci(5);
        // System.out.println(N);

        Average(99, 98, 43);


    }
}
