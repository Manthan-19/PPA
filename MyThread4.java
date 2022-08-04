import java.lang.*;

class Marvellous extends Thread
{
	public void run()	//when thread is scheduled run method is called
	{
		System.out.println("Inside thread : " +Thread.currentThread().getName());
		for(int i = 0;i<=10;i++)
		{
			System.out.println("Thread Scheduled : "+Thread.currentThread().getName() + ":" + i);
		}
	}
}

class MyThread4
{
	public static void main(String args[])
	{
		Marvellous mobj1 = new Marvellous();
		Thread t1 = new Thread(mobj1,"First");

		Marvellous mobj2 = new Marvellous();
		Thread t2 = new Thread(mobj2,"Second");

		t1.start();	//.start creates a thread.
		t2.start();
	}
}