import java.io.*;
  
// A simple interface
interface In1
{
    // public, static and final
    final int a = 10;
  
    // public and abstract 
    void display();
}
  
// A class that implements the interface.
class Main implements In1
{
    public void display()
    {
        System.out.println("Pruthvi Sagar S");
    }
  
    // Driver Code
    public static void main (String args[])
    {
        Main t = new Main();
        t.display();
        System.out.println(a);
    }
}
