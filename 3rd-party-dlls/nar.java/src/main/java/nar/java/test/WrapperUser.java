package nar.java.test;

import nar.nativ.test.NativeWrapper;

public class WrapperUser {

	public int getWrapperValue(){
		return (new NativeWrapper()).getValue();
	}
	
}
