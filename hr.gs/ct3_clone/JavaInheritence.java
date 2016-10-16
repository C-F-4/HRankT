/*
 Java Inheritance
An abstract class named Arithmetic and an abstract method named add are declared in the locked portion of the editor. Write a class named Adder that inherits from the Arithmetic class. The Adder class must implement the add method which has two integer parameters, a and b, and calculates and returns the sum of a and b.
 
Input Format
Locked stub code in the editor reads the following input from stdin and passes it to the function:
The first line contains an integer, a.
The second line contains an integer, b.
 
Constraints
0 < a, b < 100
 
Output Format
Your implementation of the add method must return the sum of its two parameters. Locked stub code in the editor prints the following output to stdout:
The name of the Adder class' superclass (i.e., the class that Adder inherits from).
The sum of integers a and b as returned by calling the add method on an Adder object.
 
Sample Input 0
10
32
 
Sample Output 0
Arithmetic
42
 
Explanation 0
The Adder class inherits from the Arithmetic class, so the locked code prints Arithmetic on the first line as the name of Adder's superclass. When the add method is called with the arguments a = 10 and b = 32, it calculates and returns their sum as 10 + 32 = 42, which is then printed to the second line by the locked code in the editor.
*/

import java.util.Scanner;

abstract class Arithmetic {
    abstract int add(int a, int b);  
}


class Adder extends Arithmetic{
    public Adder() {
        
    }
	
    @Override
    public int add(int a, int b) {
        return a + b;
    }
}

class Solution {
	public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int a = scan.nextInt();
        int b = scan.nextInt();
        scan.close();
        
		Adder adderObject = new Adder();
        
		System.out.println(adderObject.getClass().getSuperclass().getName());	
		System.out.print(adderObject.add(a, b));
	}
}
