// https://www.codechef.com/COOK134A/problems/CHEF7UP

import java.io.*;
import java.util.*;
import java.math.*;
import java.math.BigInteger; 
//import javafx.util.*; 
class CodeChefA
{    
	static PrintWriter out = new PrintWriter(System.out); 
	static StringBuilder ans=new StringBuilder();
	static FastReader in=new FastReader();
	static ArrayList<Integer> g[];
	//static ArrayList<ArrayList<TASK>> t;
	static long mod=(long)(1e9+7);
	static boolean set[],post[][];   
	static int prime[],c[];
	static int par[];
	static int dp[][];
	static HashMap<String,Long> mp;
	static long max=1;
	static boolean temp[][];
	static int K=0;
	static int size[],D[];
	public static void main(String args[])throws IOException
	{  

		int T=i();
		outer:while(T-->0)
		{
			int N=i();
			long C=i();
			long A[]=inputLong(N);
			ArrayList<Long> left=new ArrayList<>(),right=new ArrayList<>();
			for(long a:A)
			{
				if(a<C)left.add(a);
				else right.add(a);
			}
			Collections.sort(left);
			Collections.sort(right);	
			//System.out.println(left+" "+right);
			int max=0;
			for(int i=left.size()-1; i>=0; i--)
			{
				long c=C-left.get(i);
				if(c%2==0)break;
				max++;
			}
			for(int i=0; i<right.size(); i++)
			{
				long c=right.get(i)-C;
//				System.out.println(c);
				if(c%2==0)break;
				max++;
			}
//			System.out.println(max);
			int x=-1;
			if(max==N)x=1;
			ans.append(max+" "+x+"\n");
		}
		out.println(ans);
		out.close();
	}
	static long abs(long a,long b)
	{
		return Math.abs(a-b);
	}
	static int lower(long A[],long x)
	{
		int l=0,r=A.length;
		while(r-l>1)
		{
			int m=(l+r)/2;
			if(A[m]<=x)l=m;
			else r=m;
		}
		return l;
	}
	static long dfs(int n,int p)
	{
		long max=0;
		size[n]=1;
		for(int c:g[n])
		{
			if(c!=p)
			{
				max=Math.max(max, dfs(c,n));
				size[n]+=size[c];
			}
		}
		return max+size[n];
	}
	static int f(int i,int s,int j,int N,int A[],HashMap<Integer,Integer> mp)
	{
		if(i==N) 
		{
			return s;
		}
		if(dp[i][j]==-1)
		{
			if(mp.containsKey(A[i]))
			{
				int f=mp.get(A[i]);
				int c=0;
				if(f==1)c++;
				mp.put(A[i], f+1);
				HashMap<Integer,Integer> temp=new HashMap<>();
				temp.put(A[i],1);
				return dp[i][j]=Math.min(f(i+1,s+1+c,j,N,A,mp), s+K+f(i+1,0,i,N,A,temp));			   
			}
			else 
			{
				mp.put(A[i],1);
				return dp[i][j]=f(i+1,s,j,N,A,mp);
			}
		}
		return dp[i][j];
	}

	static boolean inRange(int a,int l,int r)
	{
		if(l<=a && r>=a)return true;
		return false;
	}


	static long f(long a,long b)
	{
		if(a%b==0)return a/b;
		else return (a/b)+f(b,a%b);
	}
	static void f(int index,long A[],int i,long xor)
	{
		if(index+1==A.length)
		{
			if(valid(xor^A[index],i))
			{
				xor=xor^A[index];
				max=Math.max(max, i);

			}
			return;
		}
		if(dp[index][i]==0)
		{
			dp[index][i]=1;
			if(valid(xor^A[index],i))
			{
				f(index+1,A,i+1,0);
				f(index+1,A,i,xor^A[index]);							    
			}
			else
			{
				f(index+1,A,i,xor^A[index]);				 
			}
		}

	}
	static boolean valid(long xor,int i)
	{
		if(xor==0)return true;
		while(xor%2==0 )
		{
			xor/=2;
			i--;
		}
		return i<=0;
	}
	static int next(int i,long pre[],long S)
	{
		int l=i,r=pre.length;
		while(r-l>1)
		{
			int m=(l+r)/2;
			if(pre[m]-pre[i-1]>S)r=m;
			else l=m;
		}
		return r;
	}
	static boolean lexo(long A[],long B[])
	{
		for(int i=0; i<A.length; i++)
		{
			if(B[i]>A[i])return true;
			if(A[i]>B[i])return false;
		}
		return false;
	}
	static long [] f(long A[],long B[],int j)
	{
		int N=A.length;
		long X[]=new long[N];
		for(int i=0; i<N; i++)
		{
			X[i]=(B[j]+A[i])%N;
			j++;
			j%=N;
		}
		return X;
	}
	static int find(int a)
	{
		if(par[a]<0)return a;
		return par[a]=find(par[a]);
	}
	static void union(int a,int b)
	{
		b=find(b);
		a=find(a);
		if(a!=b)
		{
			par[b]=a;
		}
	}

	static void print(char A[])
	{
		for(char c:A)System.out.print(c+" ");
		System.out.println();
	}
	static void print(boolean A[])
	{
		for(boolean c:A)System.out.print(c+" ");
		System.out.println();
	}
	static void print(int A[])
	{
		for(int a:A)System.out.print(a+" ");
		System.out.println();	
	}
	static void print(long A[])
	{
		for(long i:A)System.out.print(i+ " ");
		System.out.println();

	}
	static void print(ArrayList<Integer> A)
	{
		for(int a:A)System.out.print(a+" ");
		System.out.println();
	}
	static long lower_Bound(long A[],int low,int high, long x) 
	{ 
		if (low > high) 
			if (x >= A[high]) 
				return A[high]; 

		int mid = (low + high) / 2; 

		if (A[mid] == x) 
			return A[mid]; 

		if (mid > 0 && A[mid - 1] <= x && x < A[mid]) 
			return A[mid - 1]; 

		if (x < A[mid]) 
			return lower_Bound( A, low, mid - 1, x); 

		return lower_Bound(A, mid + 1, high, x); 
	} 
	static void sort(long[] a) //check for long
	{
		ArrayList<Long> l=new ArrayList<>();
		for (long i:a) l.add(i);
		Collections.sort(l);
		for (int i=0; i<a.length; i++) a[i]=l.get(i);
	}
	static void setGraph(int N)
	{
		size=new int[N+1];
		D=new int[N+1];
		g=new ArrayList[N+1];
		for(int i=0; i<=N; i++)
		{
			g[i]=new ArrayList<>();
		}
	}

	static  long pow(long a,long b)
	{
		long pow=1L;
		long x=a;
		while(b!=0)
		{
			if((b&1)!=0)pow=(pow*x)%mod;
			x=(x*x)%mod;
			b/=2;
		}
		return pow;
	}
	static long toggleBits(long x)//one's complement || Toggle bits
	{
		int n=(int)(Math.floor(Math.log(x)/Math.log(2)))+1;

		return ((1<<n)-1)^x;
	}
	static int countBits(long a)
	{
		return (int)(Math.log(a)/Math.log(2)+1);
	}
	static void sort(int[] a) {
		ArrayList<Integer> l=new ArrayList<>();
		for (int i:a) l.add(i);
		Collections.sort(l);
		for (int i=0; i<a.length; i++) a[i]=l.get(i);
	}
	static boolean isPrime(long N)
	{
		if (N<=1)  return false; 
		if (N<=3)  return true; 
		if (N%2 == 0 || N%3 == 0) return false; 
		for (int i=5; i*i<=N; i=i+6) 
			if (N%i == 0 || N%(i+2) == 0) 
				return false; 
		return true; 
	}
	static long GCD(long a,long b) 
	{
		if(b==0)
		{
			return a;
		}
		else return GCD(b,a%b );
	}

	static int i()
	{
		return in.nextInt();
	}

	static long l()
	{
		return in.nextLong();
	}

	static int[] input(int N){
		int A[]=new int[N];
		for(int i=0; i<N; i++)
		{
			A[i]=in.nextInt();
		}
		return A;
	}

	static long[] inputLong(int N)     {
		long A[]=new long[N];
		for(int i=0; i<A.length; i++)A[i]=in.nextLong();
		return A;
	}


}




//Code For FastReader
//Code For FastReader
//Code For FastReader
//Code For FastReader
class FastReader
{
	BufferedReader br;
	StringTokenizer st;
	public FastReader()
	{
		br=new BufferedReader(new InputStreamReader(System.in));
	}

	String next()
	{
		while(st==null || !st.hasMoreElements())
		{
			try
			{
				st=new StringTokenizer(br.readLine());
			}
			catch(IOException e)
			{
				e.printStackTrace();
			}
		}
		return st.nextToken();
	}

	int nextInt()
	{
		return Integer.parseInt(next());
	}

	long nextLong()
	{
		return Long.parseLong(next());
	}

	double nextDouble()
	{
		return Double.parseDouble(next());
	}

	String nextLine()
	{
		String str="";
		try
		{
			str=br.readLine();
		}
		catch (IOException e)
		{
			e.printStackTrace();
		}
		return str;
	}

}
