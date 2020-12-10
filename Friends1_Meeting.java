/*  Author : Alpha_The_Coder
    Created On 09/12/2020                           */
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

public class Friends1_Meeting {
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
               int a=sc.nextInt();
               int b=sc.nextInt();
               if(Math.abs(a-b)==1)
                   System.out.println(1);
               else if(Math.abs(a-b)==2)
                   System.out.println(2);
               else
               {
                   int mean=(a+b)/2;
                   int Atomean=Math.abs(mean-a);
                   int Btomean=Math.abs(mean-b);
                   System.out.println(((Atomean*(Atomean+1))/2)+((Btomean*(Btomean+1))/2));
               }
            }
        } catch (Exception e) {
            System.out.println("Run Away error or Alpha will hunt you down !!");
        }
    }
}
// This code is solely contributed by Subhojeet Sahoo aka Alpha_The_Coder