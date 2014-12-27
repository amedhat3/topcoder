import java.util.*;
import java.util.regex.*;
import java.text.*;
import java.math.*;
import java.awt.geom.*;

public class Islands
{
	public int beachLength(String[] kdm)
	{
		int ans = 0 ;
		for(int i =0 ; i < kdm.length;i++){
			for(int j =0 ; j < kdm[i].length();j++){
				if(kdm[i].charAt(j) == '#'){
					if( i>0 && kdm[i-1].charAt(j) == '.')ans++;
					if( j>0 && kdm[i].charAt(j-1) == '.')ans++;
					if( j<kdm[i].length()-1 && kdm[i].charAt(j+1)=='.')ans++;
					if( i < kdm.length-1 && kdm[i+1].charAt(j)=='.')ans++;

					if(i>0 && j > 0 && kdm[i-1].charAt(j-1)=='.' && i % 2 == 0){
						ans ++;
					}
					if(i > 0 && j < kdm[i].length()-1 && kdm[i-1].charAt(j+1) == '.' && i % 2 != 0){
						ans ++;
					}

					if(i < kdm.length-1 && j > 0 && kdm[i+1].charAt(j-1)=='.' && i % 2 == 0){
						ans ++;
					}
					if(i < kdm.length-1 && j < kdm[i].length()-1 && kdm[i+1].charAt(j+1)=='.' && i % 2 != 0){
						ans ++;
					}
				}
			}
		}
		return ans;
	}

	public static void main(String[] args)
	{
		long time;
		int answer;
		boolean errors = false;
		int desiredAnswer;


		time = System.currentTimeMillis();
		answer = new Islands().beachLength(new String[]{".#...#.."});
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
		answer = new Islands().beachLength(new String[]{"..#.##",  ".##.#.",  "#.#..."});
		System.out.println("Time: " + (System.currentTimeMillis()-time)/1000.0 + " seconds");
		desiredAnswer = 19;
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
		answer = new Islands().beachLength(new String[]{"#...#.....", "##..#...#."});
		System.out.println("Time: " + (System.currentTimeMillis()-time)/1000.0 + " seconds");
		desiredAnswer = 15;
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
		answer = new Islands().beachLength(new String[]{"....#.", ".#....", "..#..#", "####.."});
		System.out.println("Time: " + (System.currentTimeMillis()-time)/1000.0 + " seconds");
		desiredAnswer = 24;
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
			System.out.println("You're a stud (at least on the test data)! :-D ");
	}

}
//Powered by [KawigiEdit] 2.0!
