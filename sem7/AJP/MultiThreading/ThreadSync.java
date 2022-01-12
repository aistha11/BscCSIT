public class ThreadSync {
    // synchronized method
    public synchronized void classRoom() {
        for (int i = 0; i < 10; i++) {
            System.out.println("This class is currently being taught by " + Thread.currentThread().getName());
            try {
                Thread.sleep(1000);
            } catch (InterruptedException e) {
            }
        }
    }
    public static void main(String[] args) {
        ThreadSync c = new ThreadSync();
        Thread ram = new Thread("Ram sir") {
            @Override
            public void run() {
                c.classRoom();
            }
        };
        Thread shyam = new Thread("Shyam sir") {
            @Override
            public void run() {
                c.classRoom();
            }
        };
        ram.start();
        shyam.start();
    }
}
