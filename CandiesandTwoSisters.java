/*  Author : Alpha_The_Coder
    Created On 29/11/2020                           */
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

public class CandiesandTwoSisters {
    static class FastReader {
        BufferedReader br;
        StringTokenizer st;

        public FastReader() {
            br = new BufferedReader(new
                    InputStreamReader(System.in));
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
        //new 

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


    public static void main(String[] args) {
        FastReader sc = new FastReader();
        try {
            int t=1;
            t=sc.nextInt();
            while(t-->0)
            {
                int n=sc.nextInt();

                int half=n/2;
                ++half;
                System.out.println(n-half);
            }
        } catch (Exception e) {
            System.out.println("Run Away error or Alpha will hunt you down !!");
        }
    }
}
// This code is solely contributed by Subhojeet Sahoo aka Alpha_The_Coder