class MyThread1
{
	public static void main(String args[])
	{
		System.out.println("Inside main");

		Thread tobj = Thread.currentThread();

		System.out.println("Name of currentThread is : " +tobj.getName());
	}
}