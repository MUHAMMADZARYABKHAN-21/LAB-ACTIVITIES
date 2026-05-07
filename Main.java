public class Main {
    // Method to add two integers
    public int add(int a, int b) {
        return a + b;
    }

    // Entry point of the program
    public static void main(String[] args) {
        Main obj = new Main(); // Create an object to call add
        int result = obj.add(5, 10);
        System.out.println(result);
    }
}
