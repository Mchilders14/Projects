import java.util.Scanner;

public class LotteryM02 {

	public static void main(String[] args) {
		
		int lottery = (int) (Math.random() * 1000);
		Scanner input = new Scanner(System.in);
		
		System.out.println("Are you feeling lucky? Let's play the lottery!");
		System.out.println("Please enter a number (with 3-digits) to find out if you won.");
		
		int userNumber = input.nextInt();
		while (userNumber > 999 || userNumber < 0) {
			System.out.println("Please enter a number from 0 - 999 please. ");
			userNumber = input.nextInt();
		}
		
		int lotteryDigit1 = lottery / 100;
		int rmd = lottery % 100;
		int lotteryDigit2 = rmd / 10;
		int lotteryDigit3 = rmd % 10;
		
		int userDigit1 = userNumber / 100;
		int userRmd = userNumber % 100;
		int userDigit2 = userRmd / 10;
		int userDigit3 = userRmd % 10;
		
		boolean match =
				(  userDigit1 == lotteryDigit3
				&& userDigit2 == lotteryDigit1
				&& userDigit3 == lotteryDigit2) || 
		
				(  userDigit1 == lotteryDigit2
				&& userDigit2 == lotteryDigit3
				&& userDigit3 == lotteryDigit1) ||
				
				(  userDigit1 == lotteryDigit1
				&& userDigit2 == lotteryDigit3
				&& userDigit3 == lotteryDigit2) ||
				
				(  userDigit1 == lotteryDigit3
				&& userDigit2 == lotteryDigit2
				&& userDigit3 == lotteryDigit1) ||
				
				(  userDigit1 == lotteryDigit2
				&& userDigit2 == lotteryDigit1
				&& userDigit3 == lotteryDigit3);
		
		System.out.println("Your numbers are: " + userNumber);
		System.out.println("Drawing winning numbers........");
		System.out.println("The Winning numbers are: " + lottery);
		
		if (lottery == userNumber) {
			System.out.println("You won the lottery with an exact match and $10,000!!!");
		}
		else if (match){
			System.out.println("You matched all the numbers in an incorrect order! You win $3,000!!!");
		}
		
		else if (  userDigit1 == lotteryDigit1
				|| userDigit1 == lotteryDigit2
				|| userDigit1 == lotteryDigit3
				|| userDigit2 == lotteryDigit1
				|| userDigit2 == lotteryDigit2
				|| userDigit2 == lotteryDigit3
				|| userDigit3 == lotteryDigit1
				|| userDigit3 == lotteryDigit2
				|| userDigit3 == lotteryDigit3) {
			System.out.println("You matched with one of the number and win $1,000!!!");
		}
		else {
			System.out.println("You lost so you win nothing!!!");
		}		
	}


}
