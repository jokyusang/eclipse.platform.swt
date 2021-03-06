/*******************************************************************************
 * Copyright (c) 2000, 2010 IBM Corporation and others.
 *
 * This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License 2.0
 * which accompanies this distribution, and is available at
 * https://www.eclipse.org/legal/epl-2.0/
 *
 * SPDX-License-Identifier: EPL-2.0
 *
 * Contributors:
 *     IBM Corporation - initial API and implementation
 *******************************************************************************/

/* Special sizeof's */
#define ELEMDESC_sizeof() sizeof(ELEMDESC)
#define TYPEDESC_sizeof() sizeof(TYPEDESC)

/* Libraries for dynamic loaded functions */
#define AccessibleChildren_LIB "oleacc.dll"
#define AccessibleObjectFromWindow_LIB "oleacc.dll"
#define CreateStdAccessibleObject_LIB "oleacc.dll"
#define LresultFromObject_LIB "oleacc.dll"
