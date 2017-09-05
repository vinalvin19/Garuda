[Uno.Compiler.UxGenerated]
public partial class PagePlaceholder: Fuse.Controls.Image
{
    static PagePlaceholder()
    {
    }
    [global::Uno.UX.UXConstructor]
    public PagePlaceholder()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        this.StretchMode = Fuse.Elements.StretchMode.Fill;
        this.ContentAlignment = Fuse.Elements.Alignment.Top;
        this.Margin = float4(0f, 0f, 0f, 0f);
        this.Layer = Fuse.Layer.Overlay;
    }
}
