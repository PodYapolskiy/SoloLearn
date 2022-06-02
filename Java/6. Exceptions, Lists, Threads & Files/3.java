class LoaderRunnable implements Runnable {
    public void run() {
        System.out.println("Hello");
    }
}

class LoaderThread extends Thread {
    public void run() { // The run() method statements execute on a different thread
        System.out.println("Hello");
    }
}

class Threads {
    /*
     * Java is a multi-threaded programming language.
     * This means that our program can make optimal use of available resources by
     * running two or more components concurrently, with each component handling a
     * different task.
     * You can subdivide specific operations within a single application into
     * individual threads that all run in parallel.
     * 
     * Every Java thread is prioritized to help the operating system determine the
     * order in which to schedule threads.
     * The priorities range from 1 to 10, with each thread defaulting to priority 5.
     * We can set the thread priority with the setPriority() method.
     * 
     * Two ways to create a thread:
     * 1. Extend the Thread class
     * - Inherit from the Thread class
     * - Override its run() method
     * - Write the functionality of the thread in the run() method
     * - Create a new object and call it's start method to run the thread
     * 
     * 2. Implement the Runnable interface:
     * - Implement Runnable interface
     * - Override its run() method
     * - Write the functionality of the thread in the run() method
     * - Create a new Thread object
     * - Pass the Runnable class to its constructor
     * - Start the Thread by calling the start() method
     * 
     * The Thread.sleep() method pauses a Thread for a specified period of time.
     * It's a good practice to surround it with a try/catch block.
     * 
     * Implementing the Runnable interface is the preferred way to start a Thread
     * because it enables us to extend from another class, as well.
     */
    public static void main(String[] args) {
        LoaderThread obj = new LoaderThread();
        obj.start();

        Thread thread = new Thread(new LoaderRunnable());
        thread.start();
    }
}
