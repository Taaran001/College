class Calculator {
	int volume(int a) {
		return a * a * a; // Cube volume
	}
	int volume(int l, int b, int h) {
		return l * b * h; // Rectangular box volume
	}
	double volume(double r, double h) {
		return 3.14 * r * r * h; // Cylinder volume
	}
}

public class Main {
	public static void main(String[] args) {
		Calculator obj = new Calculator();
		int x = 3;
		switch (x) {
			case 1:
				System.out.print(obj.volume(4));
				break;
			case 2:
				System.out.print(obj.volume(7, 3, 1));
				break;
			case 3:
				System.out.print(obj.volume(3, 6));
				break;
			default:
				System.out.print("Invalid option");
		}
	}
}
