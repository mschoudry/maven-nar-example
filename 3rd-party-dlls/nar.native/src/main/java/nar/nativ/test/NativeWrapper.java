package nar.nativ.test;


public class NativeWrapper {
	static{
		NarSystem.loadLibrary();
	}

	public native static int test();

	public int getValue() {
		return (int) test();
	}
}