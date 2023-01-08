import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc=new Scanner(System.in);
            System.out.println("================================");
            for(int i=0;i<3;i++){
                String s1=sc.next();
                int x=sc.nextInt();
                String lol=String.valueOf(x);
                if(String.valueOf(x).length()<3){
                    while(lol.length()<3){
                        lol=('0' + lol);
                    }
                }
                //Complete this line
                String str = " ";
                int len=15-(s1.length());
                System.out.printf(s1 + str.repeat(len) + lol + "\n");
            }
            sc.close();
            System.out.println("================================");
    }
}
