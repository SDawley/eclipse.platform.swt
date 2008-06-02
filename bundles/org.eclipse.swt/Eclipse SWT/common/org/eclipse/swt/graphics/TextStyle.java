/*******************************************************************************
 * Copyright (c) 2000, 2007 IBM Corporation and others.
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors:
 *     IBM Corporation - initial API and implementation
 *******************************************************************************/
package org.eclipse.swt.graphics;

import org.eclipse.swt.*;

/**
 * <code>TextStyle</code> defines a set of styles that can be applied
 * to a range of text.
 * <p>
 * The hashCode() method in this class uses the values of the public
 * fields to compute the hash value. When storing instances of the
 * class in hashed collections, do not modify these fields after the
 * object has been inserted.  
 * </p>
 * <p>
 * Application code does <em>not</em> need to explicitly release the
 * resources managed by each instance when those instances are no longer
 * required, and thus no <code>dispose()</code> method is provided.
 * </p>
 * 
 * @see TextLayout
 * @see Font
 * @see Color
 *  
 * @since 3.0
 */
public class TextStyle {

	/**
	 * the font of the style
	 */
	public Font font;

	/**
	 * the foreground of the style
	 */
	public Color foreground;

	/**
	 * the background of the style
	 */
	public Color background;

	/**
	 * the underline flag of the style. The default underline
	 * style is <code>SWT.UNDERLINE_SINGLE</code>.
	 * 
	 * 
	 * @since 3.1
	 */	
	public boolean underline;
	
	/**
	 * the underline color of the style
	 * 
	 * @since 3.4
	 */	
	public Color underlineColor;

	/**
	 * the underline style. This style is ignored when
	 * <code>underline</code> is false.
	 * <p> 
	 * This value should be one of <code>SWT.UNDERLINE_SINGLE</code>,
	 * <code>SWT.UNDERLINE_DOUBLE</code>, <code>SWT.UNDERLINE_ERROR</code>,
	 * or <code>SWT.UNDERLINE_SQUIGGLE</code>.
	 * </p>
	 * 
	 * @see SWT#UNDERLINE_SINGLE
	 * @see SWT#UNDERLINE_DOUBLE 
	 * @see SWT#UNDERLINE_ERROR
	 * @see SWT#UNDERLINE_SQUIGGLE
	 * 
	 * @since 3.4
	 */	
	public int underlineStyle;

	/**
	 * the strikeout flag of the style
	 * 
	 * @since 3.1
	 */	
	public boolean strikeout;
	
	/**
	 * the strikeout color of the style
	 * 
	 * @since 3.4
	 */	
	public Color strikeoutColor;
	
	/**
	 * the border style. The default border style is <code>SWT.NONE</code>.
	 * <p> 
	 * This value should be one of <code>SWT.BORDER_SOLID</code>,
	 * <code>SWT.BORDER_DASH</code>,<code>SWT.BORDER_DOT</code> or
	 * <code>SWT.NONE</code>.
	 * </p>
	 * 
	 * @see SWT#BORDER_SOLID
	 * @see SWT#BORDER_DASH 
	 * @see SWT#BORDER_DOT
	 * @see SWT#NONE
	 * 
	 * @since 3.4
	 */	
	public int borderStyle;
	
	/**
	 * the border color of the style
	 * 
	 * @since 3.4
	 */	
	public Color borderColor;
	
	/**
	 * the GlyphMetrics of the style
	 * 
	 * @since 3.2
	 */	
	public GlyphMetrics metrics;
	
	/**
	 * the baseline rise of the style. 
	 * 
	 * @since 3.2
	 */	
	public int rise;

/** 
 * Create an empty text style.
 *
 * @since 3.4
 */
public TextStyle () {
}
	
/** 
 * Create a new text style with the specified font, foreground
 * and background.
 *
 * @param font the font of the style, <code>null</code> if none 
 * @param foreground the foreground color of the style, <code>null</code> if none 
 * @param background the background color of the style, <code>null</code> if none
 */
public TextStyle (Font font, Color foreground, Color background) {
	if (font != null && font.isDisposed()) SWT.error (SWT.ERROR_INVALID_ARGUMENT);
	if (foreground != null && foreground.isDisposed()) SWT.error (SWT.ERROR_INVALID_ARGUMENT);
	if (background != null && background.isDisposed()) SWT.error (SWT.ERROR_INVALID_ARGUMENT);	
	this.font = font;
	this.foreground = foreground;
	this.background = background;
}


/** 
 * Create a new text style from an existing text style.
 * 
 * @param style the style to copy 
 *
 * @since 3.4
 */
public TextStyle (TextStyle style) {
	if (style == null) SWT.error (SWT.ERROR_INVALID_ARGUMENT);
	font = style.font;
	foreground = style.foreground;
	background = style.background;
	underline = style.underline;
	underlineColor = style.underlineColor;
	underlineStyle = style.underlineStyle;
	strikeout = style.strikeout;
	strikeoutColor = style.strikeoutColor;
	borderStyle = style.borderStyle;
	borderColor = style.borderColor;
	metrics = style.metrics;
	rise = style.rise;
}

/**
 * Compares the argument to the receiver, and returns true
 * if they represent the <em>same</em> object using a class
 * specific comparison.
 *
 * @param object the object to compare with this object
 * @return <code>true</code> if the object is the same as this object and <code>false</code> otherwise
 *
 * @see #hashCode()
 */
public boolean equals(Object object) {
	if (object == this) return true;
	if (object == null) return false;
	if (!(object instanceof TextStyle)) return false;
	TextStyle style = (TextStyle)object;	
	if (foreground != null) {
		if (!foreground.equals(style.foreground)) return false;
	} else if (style.foreground != null) return false;
	if (background != null) {
		if (!background.equals(style.background)) return false;
	} else if (style.background != null) return false;
	if (font != null) {
		if (!font.equals(style.font)) return false;
	} else if (style.font != null) return false;
	if (metrics != null || style.metrics != null) return false;
	if (underline != style.underline) return false;
	if (underlineStyle != style.underlineStyle) return false;
	if (borderStyle != style.borderStyle) return false;
	if (strikeout != style.strikeout) return false;
	if (rise != style.rise) return false;
	if (underlineColor != null) {
		if (!underlineColor.equals(style.underlineColor)) return false;
	} else if (style.underlineColor != null) return false;
	if (strikeoutColor != null) {
		if (!strikeoutColor.equals(style.strikeoutColor)) return false;
	} else if (style.strikeoutColor != null) return false;
	if (underlineStyle != style.underlineStyle) return false;
	if (borderColor != null) {
		if (!borderColor.equals(style.borderColor)) return false;
	} else if (style.borderColor != null) return false;
	return true;
}

/**
 * Returns an integer hash code for the receiver. Any two 
 * objects that return <code>true</code> when passed to 
 * <code>equals</code> must return the same value for this
 * method.
 *
 * @return the receiver's hash
 *
 * @see #equals(Object)
 */
public int hashCode() {
	int hash = 0;
	if (foreground != null) hash ^= foreground.hashCode();
	if (background != null) hash ^= background.hashCode();	
	if (font != null) hash ^= font.hashCode();
	if (metrics != null) hash ^= metrics.hashCode();
	if (underline) hash ^= hash;
	if (strikeout) hash ^= hash;
	hash ^= rise;
	if (underlineColor != null) hash ^= underlineColor.hashCode();
	if (strikeoutColor != null) hash ^= strikeoutColor.hashCode();
	if (borderColor != null) hash ^= borderColor.hashCode();
	hash ^= underlineStyle;
	return hash;
}

boolean isAdherentBorder(TextStyle style) {
	if (this == style) return true;
	if (style == null) return false;
	if (borderStyle != style.borderStyle) return false;
	if (borderColor != null) {
		if (!borderColor.equals(style.borderColor)) return false;
	} else if (style.borderColor != null) return false;
	return true;
}

boolean isAdherentUnderline(TextStyle style) {
	if (this == style) return true;
	if (style == null) return false;
	if (underline != style.underline) return false;
	if (underlineStyle != style.underlineStyle) return false;
	if (underlineColor != null) {
		if (!underlineColor.equals(style.underlineColor)) return false;
	} else if (style.underlineColor != null) return false;
	return true;
}

boolean isAdherentStrikeout(TextStyle style) {
	if (this == style) return true;
	if (style == null) return false;
	if (strikeout != style.strikeout) return false;
	if (strikeoutColor != null) {
		if (!strikeoutColor.equals(style.strikeoutColor)) return false;
	} else if (style.strikeoutColor != null) return false;
	return true;
}

/**
 * Returns a string containing a concise, human-readable
 * description of the receiver.
 *
 * @return a string representation of the <code>TextStyle</code>
 */
public String toString () {
	StringBuffer buffer = new StringBuffer("TextStyle {");
	int startLength = buffer.length();
	if (font != null) {
		if (buffer.length() > startLength) buffer.append(", ");
		buffer.append("font=");
		buffer.append(font);
	}
	if (foreground != null) {
		if (buffer.length() > startLength) buffer.append(", ");
		buffer.append("foreground=");
		buffer.append(foreground);
	}
	if (background != null) {
		if (buffer.length() > startLength) buffer.append(", ");
		buffer.append("background=");
		buffer.append(background);
	}
	if (underline) {
		if (buffer.length() > startLength) buffer.append(", ");
		buffer.append("underlined");
	}
	if (strikeout) {
		if (buffer.length() > startLength) buffer.append(", ");
		buffer.append("striked out");
	}
	if (rise != 0) {
		if (buffer.length() > startLength) buffer.append(", ");
		buffer.append("rise=");
		buffer.append(rise);
	}
	if (metrics != null) {
		if (buffer.length() > startLength) buffer.append(", ");
		buffer.append("metrics=");
		buffer.append(metrics);
	}
	buffer.append("}");
	return buffer.toString();
}

}
