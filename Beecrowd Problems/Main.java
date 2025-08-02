
import java.util.*;

public class Main {
    public static void main(String[] args) {
         Scanner scanner = new Scanner(System.in);
        while (scanner.hasNext()) {
        	int T = scanner.nextInt();
        	double melhor = 999;
        	for (int i = 0; i  <  T; i++) {
        		double t = scanner.nextDouble();
        		if (t  <  melhor) melhor = t;
        	}
        	System.out.println(melhor);
        }
    }
}

