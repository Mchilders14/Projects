import java.util.Scanner;
public class SplitString10_25 {
	Scanner input = new Scanner(System.in);
	public static void main(String[] args) {
	     String string = "ab#12#453"; 
	        String[] splitString = string.split("#", 3); 
	  
	        for (String myString : splitString) 
	            System.out.println(myString); 
	    } 
	}

