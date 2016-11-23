import java.io.*;
import java.util.*;
import java.math.BigInteger;

public class Solution {
    public static void main(String[] args) {
        BigInteger integer = new BigInteger("1");
        Scanner in = new Scanner(System.in);
        int N = in.nextInt();
        for (int i = N; i > 1; i--) {
            integer = integer.multiply(new BigInteger(Integer.toString(i)));
        }
        System.out.print(integer.toString());
    }
}