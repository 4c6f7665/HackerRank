import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;
import java.math.BigInteger;
import java.util.Scanner;
public class JavaPrimalityTest {
    private static final Scanner scanner = new Scanner(System.in);
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        BigInteger n = in.nextBigInteger();
        in.close();
        System.out.println(n.isProbablePrime(100) ? "prime" : "not prime");
    }
}
