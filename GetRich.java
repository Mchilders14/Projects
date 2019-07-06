import java.util.Scanner;

public class GetRich {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		System.out.println("Let's save some money with monthly intrest! How much money are you saving/investing each month? Enter dollar amount:$ ");
		
		
		double money = input.nextDouble();
		
		double rate = 1.00417;
		
		System.out.println("You are starting with: $" + money + " U.S. dollars each month!");
		System.out.println("Your money is being financed at 5% annually or 0.417% monthly. How many months would you like to invest for? ");
		
		
		double months = input.nextDouble();
		double earnings = 0;
		for (int x = 1; x <= months; x++) {
			earnings = (earnings + money) * rate;
		}
		
		
		System.out.println("After " + months + " months of investing " + money + " dollars each month at 0.417%, you will have " + earnings + " dollars!" );

	}

}
