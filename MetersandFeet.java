import java.util.Scanner;
public class MetersandFeet {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		double feet;
		double meters;
		
		msg("Let's convert some units. Would you like to convert feet to meters(1) or meters to feet(2) Enter (1 or 2)");
		int answer = input.nextInt();
		while (answer < 1 || answer > 2) {
			msg("Please enter a valid response (1 or 2).");
			answer = input.nextInt();
		}
		if (answer == 1) {
			msg("Let's convert feet to meters. How many feet are we converting:");
			feet = input.nextDouble();
			msg("There are : " + meterToFeet(feet) + " meters in " + feet + " feet.");
			
		}
		else if (answer == 2) {
			msg("Let's convert meters to feet. How many meters are we converting:");
			meters = input.nextDouble();
			msg("There are : " + feetToMeters(meters) + " feet in " + meters + " meters.");
		}

	}
public static double feetToMeters(double x) {
	double result;
	result = x * 3.279;
	return result;
}
public static double meterToFeet(double x) {
	double result;
	 result = x * 0.305;
	 return result;
}
public static void msg(String message) {
	System.out.println(message);
}
}
