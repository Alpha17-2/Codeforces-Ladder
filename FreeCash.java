/*  Author : Alpha_The_Coder
    Created On 10/12/2020                           */
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.lang.reflect.Array;
import java.math.BigInteger;
import java.util.*;

public class FreeCash {
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
            //t=sc.nextInt();
            while(t-->0)
            {
               int n=sc.nextInt();
               int ans=Integer.MIN_VALUE;
               int c=1;
               String current=sc.nextLine();
               String s;
               for(int i=1;i<n;i++)
               {
                   s=sc.nextLine();
                   if(current.compareTo(s)==0)
                   {
                       ++c;
                       ans=Math.max(c,ans);
                   }
                   else
                       c=1;
                   current=s;
               }
               ans=Math.max(ans,c);
                System.out.println(ans);
            }
        } catch (Exception e) {
            System.out.println("Run Away error or Alpha will hunt you down !!");
        }
    }
}
// This code is solely contributed by Subhojeet Sahoo aka Alpha_The_Coder