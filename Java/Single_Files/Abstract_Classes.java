abstract class Language{
    public Language(){
        System.out.println("Invoking Language Class Constructor");
    }
    public void SayHello(){
        System.out.println("Hello Whoever you may be!");
    }
    public abstract void Greet();
}
class English extends Language{
    @Override
    public void Greet(){
        System.out.println("Heyo How's You Doing?");
    }
}
class Japanese extends Language{
    @Override
    public void Greet(){
        System.out.println(" お元気ですか (Ogenkidesu) ");
    }
}
public class Abstract_Classes {
    public static void main(String[] args) {
        
    }
}
