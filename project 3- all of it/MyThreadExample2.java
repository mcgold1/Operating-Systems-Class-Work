import java.io.*;
import java.lang.*;
import java.util.*;

class MyThreadExample2 {
public static void main(String[] args) {
   HelloThread ht1 = new HelloThread(1);
   HelloThread ht2 = new HelloThread(2);
   HelloThread ht3 = new HelloThread(3);
   HelloThread ht4 = new HelloThread(4);
   ht1.start();
   ht2.start();
   ht3.start();
   ht4.start();
   }
}

class Global {
	public static int[] sharedBuffer = new int[1000];
	public static int in = 0;
}


class HelloThread extends Thread {
    int threadID;

    HelloThread(int threadID) {
	this.threadID = threadID;
    }

    public synchronized void run() {
       for (int i = 0; i < 100; i++) {
       Global.sharedBuffer[Global.in] = this.threadID;
       System.out.println("Thread " + this.threadID + " has written " 
		+ this.threadID + " to Global.sharedBuffer[" + Global.in + "]\n");
       Global.in++;
       }

    if (this.threadID == 4) {
       try {this.sleep(2000L);} catch (Throwable e) {e.printStackTrace();}
       System.out.println("The final buffer is **************\n");
       for (int i = 0; i < 300; i++) {
		System.out.println("Global.sharedBuffer[" + i + "] = " + 
							Global.sharedBuffer[i]);
       } // for
    } // if
   } // run

} // end Thread

