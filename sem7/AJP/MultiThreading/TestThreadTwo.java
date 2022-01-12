/*
    Multi threading example by extending Thread class
*/
public class TestThreadTwo extends Thread {

    private int threadNumber;

    TestThreadTwo(int threadNumber) {
        this.threadNumber = threadNumber;
    }

    @Override
    public void run() {
        for (int i = 0; i < 5; i++) {
            System.out.println(i + " from thread " + threadNumber);

            try {
                Thread.sleep(1000);
            } catch (InterruptedException e) {

            }
        }
    }
    public static void main(String[] args) {
        for (int i = 0; i < 3; i++) {
            TestThreadTwo t1 = new TestThreadTwo(i);
            t1.start();
        }
    }
}
