package prog10;

class Counter {
    int count = 0;

    public void increment() {
        synchronized (this) {
            count++;
        }
    }
}

class Worker implements Runnable {
    Counter c;
    String name;

    Worker(Counter c, String name) {
        this.c = c;
        this.name = name;
    }

    public void run() {
        System.out.println(name + " started");

        for (int i = 1; i <= 1000; i++) {
            c.increment();

            if (i % 500 == 0) {
                System.out.println(name + " reached: " + i);
            }
        }

        System.out.println(name + " finished");
    }
}

public class Test {
    public static void main(String[] args) throws InterruptedException {

        Counter c = new Counter();

        Worker w1 = new Worker(c, "Worker-1");
        Worker w2 = new Worker(c, "Worker-2");
        Worker w3 = new Worker(c, "Worker-3");

        Thread t1 = new Thread(w1);
        Thread t2 = new Thread(w2);
        Thread t3 = new Thread(w3);

        t1.start();
        t1.join();

        t2.start();
        t2.join();

        t3.start();
        t3.join();

        System.out.println("Main thread running...");
        System.out.println("Final Count: " + c.count);
    }
}
