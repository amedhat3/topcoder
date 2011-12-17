import java.util.*;
import java.util.regex.*;
import java.text.*;
import java.math.*;
import java.awt.geom.*;

public class TheNumbersWithLuckyLastDigit
{
	public int find(int n)
	{
		return solve(n,0);
	}

	int solve(int n,int flag) {
		int x1 = n/2;
		int x2 = n-x1;
		int ans = -1;
		int x = n;
		if (flag == 1) {
			if (isl(n)) {
				//System.out.println(" ++++++++++++++++++++++" + n);
				return 1;
			}
		}
		//System.out.println(" ---- " + n + "  ----- ");
		//System.out.println("" + x1 + " --- " + x2 + "");
		if (solve2(x1,x2)) {
			return 2;
		} else {
			while (x > 0) {
				if (isl(x)) {
					ans = 1 + solve(n-x,1);
					if (ans < 1) {
						x--;
					} else {
						return ans;
					}
				} else {
					x--;
				}
			}
			return -1;
		}
	}

	boolean solve2 (int x1, int x2) {

		if ( x1 <= 0 || x2 <=0 ) return false;

		System.out.println("))))  " + x1 + " --- " + x2 + "");

		if (isl(x1)) {
			if (isl(x2)) {
				return true;
			} else {
				System.out.println(">>>>> " + (x1-1) + " --- " + (x2+1) + "");
				return solve2(x1-1,x2+1);
			}
		} else {
			System.out.println("xxxx " + (x1-1) + " --- " + (x2+1) + "");
			return solve2(x1-1,x2+1);
		}
	}

	boolean isl(int n) {

		Integer nn = n;
		String ns = nn.toString();
		//int res = n % (Math.pow( 10*Integer.parseInt(ns.charAt(0)), ns.length()));
		if (ns.charAt(ns.length()-1) == '4' || ns.charAt(ns.length()-1) == '7') {
			return true;
		} else {
			return false;
		}
	}

	public static void main(String[] args)
	{
		int answer = new TheNumbersWithLuckyLastDigit().find(51);
		System.out.println(answer);

		/*long time;
		int answer;
		boolean errors = false;
		int desiredAnswer;


		time = System.currentTimeMillis();
		answer = new TheNumbersWithLuckyLastDigit().find(99);
		System.out.println("Time: " + (System.currentTimeMillis()-time)/1000.0 + " seconds");
		desiredAnswer = 4;
		System.out.println("Your answer:");
		System.out.println("\t" + answer);
		System.out.println("Desired answer:");
		System.out.println("\t" + desiredAnswer);
		if (answer != desiredAnswer)
		{
			errors = true;
			System.out.println("DOESN'T MATCH!!!!");
		}
		else
			System.out.println("Match :-)");
		System.out.println();
		time = System.currentTimeMillis();
		answer = new TheNumbersWithLuckyLastDigit().find(11);
		System.out.println("Time: " + (System.currentTimeMillis()-time)/1000.0 + " seconds");
		desiredAnswer = 2;
		System.out.println("Your answer:");
		System.out.println("\t" + answer);
		System.out.println("Desired answer:");
		System.out.println("\t" + desiredAnswer);
		if (answer != desiredAnswer)
		{
			errors = true;
			System.out.println("DOESN'T MATCH!!!!");
		}
		else
			System.out.println("Match :-)");
		System.out.println();
		time = System.currentTimeMillis();
		answer = new TheNumbersWithLuckyLastDigit().find(13);
		System.out.println("Time: " + (System.currentTimeMillis()-time)/1000.0 + " seconds");
		desiredAnswer = -1;
		System.out.println("Your answer:");
		System.out.println("\t" + answer);
		System.out.println("Desired answer:");
		System.out.println("\t" + desiredAnswer);
		if (answer != desiredAnswer)
		{
			errors = true;
			System.out.println("DOESN'T MATCH!!!!");
		}
		else
			System.out.println("Match :-)");
		System.out.println();
		time = System.currentTimeMillis();
		answer = new TheNumbersWithLuckyLastDigit().find(1234567);
		System.out.println("Time: " + (System.currentTimeMillis()-time)/1000.0 + " seconds");
		desiredAnswer = 1;
		System.out.println("Your answer:");
		System.out.println("\t" + answer);
		System.out.println("Desired answer:");
		System.out.println("\t" + desiredAnswer);
		if (answer != desiredAnswer)
		{
			errors = true;
			System.out.println("DOESN'T MATCH!!!!");
		}
		else
			System.out.println("Match :-)");
		System.out.println();


		if (errors)
			System.out.println("Some of the test cases had errors :-(");
		else
			System.out.println("You're a stud (at least on the test data)! :-D ");*/
	}

}
//Powered by [KawigiEdit] 2.0!
