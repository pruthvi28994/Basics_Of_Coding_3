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
class interfaceexample implements In1
{
    // Implementing the capabilities of
    // interface.
    public void display()
    {
        System.out.println("Pruthvi Sagar S");
    }
  
    // Driver Code
    public static void main (String[] args)
    {
        interfaceexample t = new interfaceexample();
        t.display();
        System.out.println(a);
    }
}