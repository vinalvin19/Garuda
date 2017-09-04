package com.foreign.Fuse.Android;

// fuse defined imports
import com.uno.UnoObject;
import com.uno.BoolArray;
import com.uno.ByteArray;
import com.uno.CharArray;
import com.uno.DoubleArray;
import com.uno.FloatArray;
import com.uno.IntArray;
import com.uno.LongArray;
import com.uno.ObjectArray;
import com.uno.ShortArray;
import com.uno.StringArray;
import com.Bindings.UnoHelper;
import com.Bindings.UnoWrapped;
import com.Bindings.ExternedBlockHost;

public class StaticLayout
{
    static void debug_log(Object message)
    {
        android.util.Log.d("garuda", (message==null ? "null" : message.toString()));
    }

    public static Object Create336(final String text,final int bufStart,final int bufEnd,final Object paintHandle,final int outerWidth,final int align,final float spacingMult,final float spacingAdd,final boolean includePad,final int truncateAt,final int ellipsizedWith)
    {
        // Be careful, doing stupid enum conversion
        android.text.Layout.Alignment alignment = android.text.Layout.Alignment.ALIGN_CENTER;
        if (align == 1) alignment = android.text.Layout.Alignment.ALIGN_NORMAL;
        else if (align == 2) alignment = android.text.Layout.Alignment.ALIGN_OPPOSITE;
        
        // Be careful, doing stupid enum conversion
        android.text.TextUtils.TruncateAt truncate = android.text.TextUtils.TruncateAt.END;
        if (truncateAt == 1) truncate = android.text.TextUtils.TruncateAt.MARQUEE;
        else if (truncateAt == 2) truncate = android.text.TextUtils.TruncateAt.MIDDLE;
        else if (truncateAt == 3) truncate = android.text.TextUtils.TruncateAt.START;
        
        android.text.TextPaint paint = (android.text.TextPaint)paintHandle;
        
        return new android.text.StaticLayout(text, bufStart, bufEnd, paint, outerWidth, alignment, spacingMult, spacingAdd, includePad, truncate, ellipsizedWith);
    }
    
    public static Object Create1337(final String text,final Object paintHandle,final int width,final int align,final float spacingMult,final float spacingAdd,final boolean includePad)
    {
        // Be careful, doing stupid enum conversion
        android.text.Layout.Alignment alignment = android.text.Layout.Alignment.ALIGN_CENTER;
        if (align == 1) alignment = android.text.Layout.Alignment.ALIGN_NORMAL;
        else if (align == 2) alignment = android.text.Layout.Alignment.ALIGN_OPPOSITE;
        
        android.text.TextPaint paint = (android.text.TextPaint)paintHandle;
        
        return new android.text.StaticLayout(text, paint, width, alignment, spacingMult, spacingAdd, includePad);
    }
    
    public static void Draw1338(final Object layoutHandle,final Object canvasHandle)
    {
        ((android.text.StaticLayout)layoutHandle).draw(((android.graphics.Canvas)canvasHandle));
    }
    
    public static float GetDesiredWidthImpl339(final String text,final Object paintHandle)
    {
        android.text.TextPaint paint = (android.text.TextPaint)paintHandle;
        return android.text.StaticLayout.getDesiredWidth(text, paint);
    }
    
    public static int GetEllipsizedWidth340(final Object handle)
    {
        return ((android.text.StaticLayout)handle).getEllipsizedWidth();
    }
    
    public static int GetHeight341(final Object handle)
    {
        return ((android.text.StaticLayout)handle).getHeight();
    }
    
    public static int GetLineBaseline1342(final Object handle,final int line)
    {
        return ((android.text.StaticLayout)handle).getLineBaseline(line);
    }
    
    public static int GetLineCount343(final Object handle)
    {
        return ((android.text.StaticLayout)handle).getLineCount();
    }
    
    public static int GetLineEnd1344(final Object handle,final int line)
    {
        return ((android.text.StaticLayout)handle).getLineEnd(line);
    }
    
    public static float GetLineLeft1345(final Object handle,final int line)
    {
        return ((android.text.StaticLayout)handle).getLineLeft(line);
    }
    
    public static int GetLineStart1346(final Object handle,final int line)
    {
        return ((android.text.StaticLayout)handle).getLineStart(line);
    }
    
    public static int GetWidth347(final Object handle)
    {
        return ((android.text.StaticLayout)handle).getWidth();
    }
    
}
