import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner scan=new Scanner(System.in);
        int count=0;
        String input;
        while(scan.hasNextLine()!=false){
            count+=1;
            input=scan.nextLine();
            System.out.println(count + " " + input);
            
        }
    }
}
