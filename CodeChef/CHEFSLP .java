// https://www.codechef.com/COOK134C/problems/CHEFSLP

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner in = new Scanner(System.in);
		int testCases = in.nextInt();
		while(testCases -- > 0) {
		  int n = in.nextInt();
		  int l = in.nextInt();
		  int x = in.nextInt();
		  System.out.println(Math.min(l,Math.abs(n-l)) * x);
		}
	}
}
