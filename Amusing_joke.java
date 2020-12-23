/*  Author : Alpha_The_Coder
    Created On 23/12/2020                           */
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;
public class Amusing_joke {
    public static void main(String[] args) {
        FastScanner sc=new FastScanner();
        int t=1;
        while (t-->0)
        {
            String h=sc.next();String g=sc.next();String l=sc.next();
            int a=h.length();int b=g.length();int c=l.length();
            if (a+b==c)
            {
                int[] freq=new int[26];
                Arrays.fill(freq,0);
                for (int i = 0; i <a ; i++) {
                    char ch=h.charAt(i);
                    ++freq[ch-'A'];
                }
                for (int i = 0; i <b ; i++) {
                    char ch=g.charAt(i);
                    ++freq[ch-'A'];
                }
                for (int i = 0; i <c ; i++) {
                    char ch=l.charAt(i);
                    --freq[ch-'A'];
                }
                boolean ok=true;
                for (int i = 0; i <26 ; i++)
                    if (freq[i]!=0) {
                        ok=false;
                        break;
                    }
                if (ok) System.out.println("YES");
                else System.out.println("NO");
            }
            else System.out.println("NO");
        }
    }
    static class FastScanner {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st=new StringTokenizer("");
        String next() {
            while (!st.hasMoreTokens())
                try {
                    st=new StringTokenizer(br.readLine());
                } catch (IOException e) {
                    e.printStackTrace();
                }
            return st.nextToken();
        }
        int nextInt() {
            return Integer.parseInt(next());
        }
    }
}
// This code is solely contributed by Subhojeet Sahoo aka Alpha_The_Coder