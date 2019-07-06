public class Calculator {

	public static void main(String[] args) {
		msg("Hello! Lets do some calculations below!");
		
//------------------------------------------------------------------------------------------------------------------Part ONE!		
//		try {
//			strings(args);
//		 
//		
//		int result = 0;
//		
//		switch (args[1].charAt(0)) {
//			case '+': result = Integer.parseInt(args[0]) + Integer.parseInt(args[2]);
//				break;
//			case '-': result = Integer.parseInt(args[0]) - Integer.parseInt(args[2]);
//				break;
//			case '.': result = Integer.parseInt(args[0]) * Integer.parseInt(args[2]);
//				break;
//			case '/': result = Integer.parseInt(args[0]) / Integer.parseInt(args[2]);
//				
//		}
//		
//		System.out.println(args[0] + ' ' + args[1] + ' ' + args[2] + " = " + result);
//		}
//		catch (Exception e) {
//			System.out.println("Wrong Input: " + e.getMessage());
//		}
//		
//	}
//	
//------------------------------------------------------------------------------------------------------------------Part TWO!
	
	if (args.length != 3){
		System.out.println("Error: Usage: operand1, operator operand2.");
		System.exit(1);
	}
	if (args[0].matches("^[0-9]+$") == false){
		System.out.println("Wrong Input: " + args[0]);
		System.out.println(args[0] + ' ' + args[1] + ' ' + args[2] + " = ");
		System.exit(1);
	}
	if (args[2].matches("^[0-9]+$") == false){
		System.out.println("Wrong Input: " + args[2]);
		System.out.println(args[0] + ' ' + args[1] + ' ' + args[2] + " = ");
		System.exit(1);
	}
	
	int result = 0;
	
	switch (args[1].charAt(0)) {
		case '+': result = Integer.parseInt(args[0]) + Integer.parseInt(args[2]);
			break;
		case '-': result = Integer.parseInt(args[0]) - Integer.parseInt(args[2]);
			break;
		case '.': result = Integer.parseInt(args[0]) * Integer.parseInt(args[2]);
			break;
		case '/': result = Integer.parseInt(args[0]) / Integer.parseInt(args[2]);
			
	}
	
	System.out.println(args[0] + ' ' + args[1] + ' ' + args[2] + " = " + result);
	
	
	}
	
public static void msg(String m) {
	System.out.println(m);
}
public static void strings(String[] args) throws Exception{
	if (args.length != 3) {
		throw new Exception ("Usage: Java calculator operand1 operator operand2");
	}
}
}