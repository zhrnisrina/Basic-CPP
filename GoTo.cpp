import java.util.*;

// main class
public class Main
{
	public static void main(String[] args) {
	    // Creating a scanner class object to take input.
	    Scanner sc = new Scanner(System.in);
	    
	    // Declaring variables.
		int t;
		int a,b,k;
		
		t = sc.nextInt();
		
		// Creating an arraylist to store the result of each test cases.
		ArrayList<Integer> arrli = new ArrayList<Integer>(t);
		
		int c=1;
		// While loop to run till no of test cases.
		while(c<=t)
		{
		    // taking input from the user.
		    a = sc.nextInt();
		    b = sc.nextInt();
		    k = sc.nextInt();
		    int count=0;
		    
		    // for loop to travese within the range and counting no divisible by k
		    for(int i=a;i<=b;i++)
		    {
		        // if condition to check if i is divisible by k or not
		        if(i%k == 0)
		            count++;
		    }
		    // adding result to the arraylist
		    arrli.add(count);
		    c++;
		}
		// Displaying the results stored for each test case.
		for (int i = 0; i < arrli.size(); i++)
		    System.out.println("Case "+(i+1)+": "+arrli.get(i));
	}
}
