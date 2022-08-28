import java.util.*;
import java.io.*;

public class Main {
	// For fast input output
	static class Solver {
		public void solve(FastReader in) throws Exception {
			String s;
			while ((s = in.nextLine()) != null) {
				System.out.println(s);
			}
		}
	}

	public static void main(String[] args) throws Exception {
		FastReader in = new FastReader();
		new Solver().solve(in);
	}

	static class FastReader {
		BufferedReader br;
		StringTokenizer st;

		public FastReader() {
			try {
				br = new BufferedReader(
						new FileReader("input.txt"));
				PrintStream out = new PrintStream(new FileOutputStream("output.txt"));
				System.setOut(out);
			} catch (Exception e) {
				br = new BufferedReader(new InputStreamReader(System.in));
			}
		}

		String next() {
			while (st == null || !st.hasMoreElements()) {
				try {
					st = new StringTokenizer(br.readLine());
				} catch (IOException e) {
					e.printStackTrace();
				}
			}
			return st.nextToken();
		}

		int nextInt() {
			return Integer.parseInt(next());
		}

		long nextLong() {
			return Long.parseLong(next());
		}

		double nextDouble() {
			return Double.parseDouble(next());
		}

		String nextLine() {
			String str = "";
			try {
				str = br.readLine();
			} catch (IOException e) {
				e.printStackTrace();
			}
			return str;
		}
	}
	// end of fast i/o code
}