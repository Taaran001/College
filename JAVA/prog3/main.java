class main {

    int rollNo;
    String name;

    // 1️⃣ Constructor with parameters
    main(int rollNo, String name) {
        this.rollNo = rollNo;
        this.name = name;
    }

    // 2️⃣ Constructor chaining
    main() {
        this(101, "ABC");   // name changed to ABC
        System.out.println("Default constructor executed");
    }

    // 3️⃣ Calling current class method
    void display() {
        this.show();
    }

    void show() {
        System.out.println("Roll No: " + rollNo);
        System.out.println("Name: " + name);
    }

    // 4️⃣ Passing current object
    void passObject() {
        receive(this);
    }

    void receive(main s) {
        System.out.println("Object received successfully");
    }

    // 5️⃣ Returning current object
    main getObject() {
        return this;
    }
}

class Test {
    public static void main(String[] args) {

        main s1 = new main();
        s1.display();
        s1.passObject();

        main s2 = s1.getObject();
        System.out.println("Returned Object Name: " + s2.name);
    }
}
