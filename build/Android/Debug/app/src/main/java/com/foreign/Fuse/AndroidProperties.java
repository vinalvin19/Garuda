package com.foreign.Fuse;

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

public class AndroidProperties
{
    static void debug_log(Object message)
    {
        android.util.Log.d("garuda", (message==null ? "null" : message.toString()));
    }

    public static int GetBuildVersion364()
    {
        return android.os.Build.VERSION.SDK_INT;
    }
    
    public static String GetReleaseVersion365()
    {
        return android.os.Build.VERSION.RELEASE;
    }
    
}
