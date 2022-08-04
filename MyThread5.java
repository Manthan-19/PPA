import java.lang.*;
import java.lang.Exception;

class Demo extends Thread 
{
	public void run()	//When the thread is scheduled thread is in running state
	{
		System.out.println(Thread.currentThread().getName());
		for(int i = 0;i<10;i++)
		{
			System.out.println("Value of i : " +i);

			try
			{
				Thread.sleep(1000);	
			}
			catch(Exception obj)
			{}
		}
	}
}

class MyThread5
{
	public static void main(String a[]) throws Exception
	{
		Demo obj1 = new Demo();
		Thread t1 = new Thread(obj1);	//thread is in new state
	
		Demo obj2 = new Demo();
		Thread t2  = new Thread(obj2);

		t1.start();	//thread is in runnable state
		
		t1.join();
		
		t2.start();
		//After execution thread goes into dead state
	}

}