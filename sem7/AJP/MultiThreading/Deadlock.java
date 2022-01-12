public class Deadlock {
    public static void main(String[] args) {
        String room1 = "Room  402";
        String room2 = "Room 404";
        Thread ajp = new Thread("AJP sir") {
            @Override
            public void run() {
                synchronized (room1) {
                    try {
                        Thread.sleep(1000);
                    } catch (InterruptedException e) {
                    }
                    System.out.println(room1 + " is occupied by " + Thread.currentThread().getName());
                    synchronized (room2) {
                        try {
                            Thread.sleep(1000);
                        } catch (InterruptedException e) {
                        }
                        System.out.println(room2 + " is occupied by " + Thread.currentThread().getName());
                    }
                }
            }
        };

        Thread dba = new Thread("DBA sir") {
            @Override
            public void run() {
                synchronized (room2) {
                    try {
                        Thread.sleep(1000);
                    } catch (InterruptedException e) {
                    }
                    System.out.println(room2 + " is occupied by " + Thread.currentThread().getName());
                    synchronized (room1) {
                        try {
                            Thread.sleep(1000);
                        } catch (InterruptedException e) {
                        }
                        System.out.println(room1 + " is occupied by " + Thread.currentThread().getName());
                    }
                }
            }
        };

        ajp.start();
        dba.start();

    }
}
