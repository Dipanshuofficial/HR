import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        {



        Scanner sc = new Scanner(System.in);
        int t=sc.nextInt();

        for(int i=0;i<t;i++)
        {

            try
            {
                long x=sc.nextLong();
                System.out.println(x+" can be fitted in:");
                if(x>=-128 && x<=127){
                    System.out.println("* byte");
                    System.out.println("* short");
                    System.out.println("* int");
                    System.out.println("* long");
                    continue;
                }
                else if(x>=-(Math.pow(2,16))/2 && x<=(Math.pow(2,16))/2-1){
                    System.out.println("* short");
                    System.out.println("* int");
                    System.out.println("* long");
                    continue;
                }
                else if(x>=-(Math.pow(2,32))/2 && x<=(Math.pow(2,32))/2-1){
                    System.out.println("* int");
                    System.out.println("* long");
                    continue;
                }
                else if(x>=-(Math.pow(2,64))/2 && x<=(Math.pow(2,64))/2-1){
                    System.out.println("* long");
                }
                //Complete the code
            }
            catch(Exception e)
            {
                System.out.println(sc.next()+" can't be fitted anywhere.");
            }

        }
    }
    }
}
