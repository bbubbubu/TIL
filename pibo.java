package ffff;

import java.util.Scanner;

public class pibo {
	public static void main(String[] args) {
		int a=1, b=0;
		Scanner scan = new Scanner(System.in);
		System.out.print("input : ");
		int input = scan.nextInt();
		for(int i=1; i <= input; i++) {
			if(i%2==0) {
				b+=a;
				System.out.println(b);
			} else {
				a+=b;
				System.out.println(a);
			}
		}
		scan.close();
	}
}
 