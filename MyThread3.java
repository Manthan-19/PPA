import java.lang.*;

class Marvellous implements Runnable
{
	public void run()	//when thread is scheduled run method is called
	{
		System.out.println("Inside thread : " +Thread.currentThread().getName());
	}
}

class MyThread3
{
	public static void main(String args[])
	{
		Marvellous mobj1 = new Marvellous();
		Thread t1 = new Thread(mobj1,"First");

		Marvellous mobj2 = new Marvellous();
		Thread t2 = new Thread(mobj2,"Second");

		t1.start();	//start creates a thread.
		t2.start();
	}
}