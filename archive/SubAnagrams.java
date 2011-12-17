import java.util.*;
import java.util.regex.*;
import java.text.*;
import java.math.*;
import java.awt.geom.*;

public class SubAnagrams
{
	String s="";
	//boolean best[][][] = new boolean[500][500][500];

	public int maximumParts(String[] sw){

 		StringBuilder sb = new StringBuilder();
		for(int i=0;i<sw.length;i++){
			sb.append(sw[i]);
		}
		s = sb.toString();
		int res = 1;

		/*for (int i = 0; i < best.length; i++) {
			for (int j = 0; j < best[i].length; j++) {
				for (int k = 0; k < best[i][j].length; k++) {
					best[i][j][k] = false;
				}
			}
		}*/
		for(int i =1 ; i*2 <= s.length();i++){
			for(int j = i*2 ; j <= s.length() ; j++)
			res = Math.max(res, 1+solve(0,i,j));
		}

		return res;
	}
	private int solve(int firstIndex , int middleIndex , int lastIndex){
		String str1 = s.substring(firstIndex,middleIndex);
		String str2 = s.substring(middleIndex,lastIndex);
		int res = -1;
		if(validate(str1,str2)){
			if(s.length() == lastIndex){
				return 1;
			}
			else if(s.length() < lastIndex){
				return -1;
			}
			else{
				for(int k = lastIndex+lastIndex-middleIndex ; k <= s.length(); k++){
					res = Math.max(res,1+solve(middleIndex,lastIndex,k));
				}
			}
		}
		return res;
	}


	private boolean validate(String str1,String str2){

		boolean f[] = new boolean[str2.length()];
		Arrays.fill(f, true);
		int i =0,j=0;
		int count=0;
		for(i = 0 ; i < str1.length(); i++){
			for(j = 0 ; j < str2.length(); j++){
				if(str1.charAt(i) == str2.charAt(j)&& f[j]){
					f[j] =false;
					count++;
					break;
				}
			}
			if(j >= str2.length()){
				break;
			}
		}
		if(count < str1.length()){
			return false;
		}
		return true;
	}
	public static void main(String[] args)
	{
		long time;
		int answer;
		boolean errors = false;
		int desiredAnswer;


		time = System.currentTimeMillis();
		answer = new SubAnagrams().maximumParts(new String[]{"ABABAB"});
		System.out.println("Time: " + (System.currentTimeMillis()-time)/1000.0 + " seconds");
		desiredAnswer = 3;
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
		answer = new SubAnagrams().maximumParts(new String[]{"AAXAAAABX"});
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
		answer = new SubAnagrams().maximumParts(new String[]{"ABCDEFGHIJKL"});
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
		time = System.currentTimeMillis();
		answer = new SubAnagrams().maximumParts(new String[]{"ABBAB","B","BBX","Z"});
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
		answer = new SubAnagrams().maximumParts(new String[]{"QRQSRQRRQSSQSRRQSRRRQQSRSSQQRQSRQQRSRSQQSRRSRRRQRR","QRQQQQSSSSQQRRQRQQRRSQQRSQRRRSQRSSRQQRRQRQSQQQRRQR"});
		System.out.println("Time: " + (System.currentTimeMillis()-time)/1000.0 + " seconds");
		desiredAnswer = 11;
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

		List <String> sss = new ArryList<String>();
		sss.toArray(String.class);
	}
}
//Powered by [KawigiEdit] 2.0!
