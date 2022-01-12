/*
     WAP to create 3 threads by implementing Runnable interface. 
    Each thread should individually print a loop containing its name and priority.
 */
public class TestThreadOne implements Runnable {

    @Override
    public void run() {
        TestThreadOne.print();
    }
    public static void print() {
        for (int i = 0; i < 10; i++) {
            System.out.println(
                    "Name: " + Thread.currentThread().getName() + 
                    ", Priority: " + Thread.currentThread().getPriority());
            try {
                Thread.sleep(1000);
            } catch (InterruptedException e) {
            }
        }
    }
    public static void main(String[] args) {
        TestThreadOne m = new TestThreadOne();
        Thread t1 = new Thread(m);
        t1.setPriority(10);
        t1.setName("Thread One");
        Thread t2 = new Thread(m);
        t2.setPriority(7);
        t2.setName("Thread Two");
        Thread t3 = new Thread(m);
        t3.setPriority(8);
        t3.setName("Thread Three");

        t1.start();
        t2.start();
        t3.start();
        TestThreadOne.print();
    }
}