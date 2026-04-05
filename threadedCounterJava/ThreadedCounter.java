package threadedCounterJava;

public class ThreadedCounter {

	static void sleep() { //pauses thread for count
		try {
			Thread.sleep(50);
		} catch (InterruptedException e ) {
			Thread.currentThread().interrupt(); //re-sets interrupt flag
		}
	}
	
	public static void main(String[] args) throws InterruptedException {
		Thread t1 = new Thread(() -> {
			for (int i = 0; i <= 20; ++i) {
				System.out.println("t1: " + i);
				sleep();
			}
		});
		
		Thread t2 = new Thread(() -> {
			for (int i =20; i >= 0; --i) {
				System.out.println("t2: " +i);
				sleep();
			}
		});
		t1.start();
		t1.join();
		t2.start();
		t2.join();
	}

}
