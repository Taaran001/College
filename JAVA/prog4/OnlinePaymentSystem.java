package prog4;

interface Payment {
    void pay(double amount);
}

// UPI Implementation
class UPI implements Payment {
    public void pay(double amount) {
        System.out.println("Paid ₹" + amount + " using UPI.");
    }
}

// Credit Card Implementation
class CreditCard implements Payment {
    public void pay(double amount) {
        System.out.println("Paid ₹" + amount + " using Credit Card.");
    }
}

// Debit Card Implementation
class DebitCard implements Payment {
    public void pay(double amount) {
        System.out.println("Paid ₹" + amount + " using Debit Card.");
    }
}

// Main Class
public class OnlinePaymentSystem {

    public static void main(String[] args) {

        double amount = 5000;   // fixed amount
        int choice = 2;         // change 1/2/3 to test

        Payment payment = null;

        if (choice == 1) {
            payment = new UPI();
        }
        else if (choice == 2) {
            payment = new CreditCard();
        }
        else if (choice == 3) {
            payment = new DebitCard();
        }
        else {
            System.out.println("Invalid choice!");
            return;
        }

        payment.pay(amount);
    }
}
