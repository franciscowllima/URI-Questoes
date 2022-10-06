import java.io.IOException;
 
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner scan = new Scanner(System.in);
        double horas,km,total;
        horas = scan.nextDouble();
        km = scan.nextDouble();
        total = (horas*km)/12;
        System.out.printf("%.3f\n",total);
    }
    
}