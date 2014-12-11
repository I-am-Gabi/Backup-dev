/*******************************************************************************
 * Copyright (c) 2008, 2009 IBM Corporation and others.
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors:
 *     IBM Corporation - initial API and implementation
 *******************************************************************************/
package a.b.c;

/**
 * Test unsupported @noextend tag on methods in outer / inner annotations
 */
public enum test1 {
	A;
	enum inner {
		A;
		
		/**
		 * @noextend
		 * @return
		 */
		public int m1() {
			return 0;
		}
		
		/**
		 * @noextend
		 * @return
		 */
		public char m2() {
			return 's';
		}
		enum inner2 {
			A;
			
			/**
			 * @noextend
			 * @return
			 */
			public int m1() {
				return 0;
			}
			
			/**
			 * @noextend
			 * @return
			 */
			public char m2() {
				return 's';
			}
		}
	}
}

enum outer {
A;
	
	/**
	 * @noextend
	 * @return
	 */
	public int m1() {
		return 0;
	}
	
	/**
	 * @noextend
	 * @return
	 */
	public char m2() {
		return 's';
	}
}
