[Uno.Compiler.UxGenerated]
public partial class BookView: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    static BookView()
    {
    }
    [global::Uno.UX.UXConstructor]
    public BookView(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new global::Fuse.Controls.Panel();
        var temp1 = new global::Fuse.Controls.Text();
        var temp2 = new global::Fuse.Drawing.StaticSolidColor(float4(0.9333333f, 0.9333333f, 0.9333333f, 1f));
        temp.Children.Add(temp1);
        temp1.Value = "This child will be drawn over the other child";
        this.Background = temp2;
        this.Children.Add(temp);
    }
}
