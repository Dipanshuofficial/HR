import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner in = new Scanner(System.in);
        int t=in.nextInt();
        for(int i=0;i<t;i++){
            int a = in.nextInt();
            int b = in.nextInt();
            int n = in.nextInt();
            for(int j=1;j<=n;j++){
                double ans=a;
                for(int k=0;k<j;k++){
                    ans+=((Math.pow(2,k))*b);
                }
                int o=(int) ans;
                System.out.printf(String.valueOf(o) + " ");
            }
            System.out.printf("\n");
        }
        in.close();
    }
}
