/*******************************************************************************
 * Copyright (c) 2008 IBM Corporation and others.
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors:
 *     IBM Corporation - initial API and implementation
 *******************************************************************************/


/**
 * Test supported @noreference tag on fields in a class in the default package
 */
public class test8 {
	/**
	 * @noreference
	 */
	public Object f1;
	/**
	 * @noreference
	 */
	protected int f2;
}
