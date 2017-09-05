[Uno.Compiler.UxGenerated]
public partial class FirstView: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    global::Uno.UX.Property<Fuse.Elements.Element> indicator_Element_LayoutMaster_inst;
    global::Uno.UX.Property<Fuse.Visual> navigation_Active_inst;
    [global::Uno.UX.UXGlobalResource("RobotoMedium")] public static readonly Fuse.Font RobotoMedium;
    internal global::Fuse.Controls.Rectangle indicator;
    internal global::Fuse.Controls.PageControl navigation;
    internal global::Fuse.Controls.Page page1;
    internal global::Fuse.Reactive.EventBinding temp_eb0;
    internal global::Fuse.Controls.Page page2;
    internal global::Fuse.Controls.Page page3;
    internal global::Fuse.Controls.Page page4;
    internal global::Fuse.Controls.Page page5;
    internal global::Fuse.Controls.Page page6;
    internal global::Fuse.Controls.Panel page1Tab;
    internal global::Fuse.Controls.Panel page2Tab;
    internal global::Fuse.Controls.Panel page3Tab;
    internal global::Fuse.Controls.Panel page4Tab;
    internal global::Fuse.Controls.Panel page5Tab;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "indicator",
        "navigation",
        "page1",
        "temp_eb0",
        "page2",
        "page3",
        "page4",
        "page5",
        "page6",
        "page1Tab",
        "page2Tab",
        "page3Tab",
        "page4Tab",
        "page5Tab"
    };
    static FirstView()
    {
        RobotoMedium = new global::Fuse.Font(new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Roboto-Medium.ttf")));
        global::Uno.UX.Resource.SetGlobalKey(RobotoMedium, "RobotoMedium");
    }
    [global::Uno.UX.UXConstructor]
    public FirstView(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        indicator = new global::Fuse.Controls.Rectangle();
        indicator_Element_LayoutMaster_inst = new garuda_FuseElementsElement_ElementLayoutMaster_Property(indicator, __selector0);
        var temp = new global::Fuse.Reactive.Data("bookClicked");
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        navigation = new global::Fuse.Controls.PageControl();
        navigation_Active_inst = new garuda_FuseControlsNavigationControl_Active_Property(navigation, __selector1);
        var temp1 = new global::Fuse.Triggers.LayoutAnimation();
        var temp2 = new global::Fuse.Animations.Move();
        var temp3 = new global::Fuse.Controls.DockPanel();
        var temp4 = new global::Fuse.Controls.StatusBarBackground();
        var temp5 = new global::Fuse.Controls.BottomBarBackground();
        page1 = new global::Fuse.Controls.Page();
        var temp6 = new global::Fuse.Navigation.WhileActive();
        var temp7 = new global::Fuse.Triggers.Actions.Set<Fuse.Elements.Element>(indicator_Element_LayoutMaster_inst);
        var temp8 = new global::PagePlaceholder();
        var temp9 = new global::page1Text();
        var temp10 = new global::page1TextBawah();
        var temp11 = new global::page1Text();
        var temp12 = new global::Fuse.Controls.Image();
        temp_eb0 = new global::Fuse.Reactive.EventBinding(temp, __g_nametable);
        var temp13 = new global::Fuse.Controls.Button();
        var temp14 = new global::Fuse.Gestures.Clicked();
        var temp15 = new global::Fuse.Navigation.NavigateTo();
        var temp16 = new global::Fuse.Drawing.StaticSolidColor(float4(1f, 1f, 1f, 1f));
        var temp17 = new global::Fuse.Controls.Rectangle();
        var temp18 = new global::Fuse.Controls.Image();
        var temp19 = new global::Fuse.Drawing.StaticSolidColor(float4(0.9333333f, 0.9333333f, 0.9333333f, 1f));
        page2 = new global::Fuse.Controls.Page();
        var temp20 = new global::Fuse.Navigation.WhileActive();
        var temp21 = new global::Fuse.Triggers.Actions.Set<Fuse.Elements.Element>(indicator_Element_LayoutMaster_inst);
        var temp22 = new global::WelcomeText();
        var temp23 = new global::Fuse.Drawing.StaticSolidColor(float4(0.6705883f, 0.7176471f, 0.7176471f, 1f));
        page3 = new global::Fuse.Controls.Page();
        var temp24 = new global::Fuse.Navigation.WhileActive();
        var temp25 = new global::Fuse.Triggers.Actions.Set<Fuse.Elements.Element>(indicator_Element_LayoutMaster_inst);
        var temp26 = new global::WelcomeText();
        var temp27 = new global::Fuse.Drawing.StaticSolidColor(float4(0.9490196f, 0.945098f, 0.9372549f, 1f));
        page4 = new global::Fuse.Controls.Page();
        var temp28 = new global::Fuse.Navigation.WhileActive();
        var temp29 = new global::Fuse.Triggers.Actions.Set<Fuse.Elements.Element>(indicator_Element_LayoutMaster_inst);
        var temp30 = new global::WelcomeText();
        var temp31 = new global::Fuse.Drawing.StaticSolidColor(float4(0.6705883f, 0.7176471f, 0.7176471f, 1f));
        page5 = new global::Fuse.Controls.Page();
        var temp32 = new global::Fuse.Navigation.WhileActive();
        var temp33 = new global::Fuse.Triggers.Actions.Set<Fuse.Elements.Element>(indicator_Element_LayoutMaster_inst);
        var temp34 = new global::WelcomeText();
        var temp35 = new global::Fuse.Drawing.StaticSolidColor(float4(0.9490196f, 0.945098f, 0.9372549f, 1f));
        page6 = new global::Fuse.Controls.Page();
        var temp36 = new global::Fuse.Navigation.WhileActive();
        var temp37 = new global::Fuse.Triggers.Actions.Set<Fuse.Elements.Element>(indicator_Element_LayoutMaster_inst);
        var temp38 = new global::WelcomeText();
        var temp39 = new global::Fuse.Drawing.StaticSolidColor(float4(0.9490196f, 0.945098f, 0.9372549f, 1f));
        var temp40 = new global::Fuse.Controls.Grid();
        page1Tab = new global::Fuse.Controls.Panel();
        var temp41 = new global::TabIcon();
        var temp42 = new global::Fuse.Gestures.Clicked();
        var temp43 = new global::Fuse.Triggers.Actions.Set<Fuse.Visual>(navigation_Active_inst);
        page2Tab = new global::Fuse.Controls.Panel();
        var temp44 = new global::TabIcon();
        var temp45 = new global::Fuse.Gestures.Clicked();
        var temp46 = new global::Fuse.Triggers.Actions.Set<Fuse.Visual>(navigation_Active_inst);
        page3Tab = new global::Fuse.Controls.Panel();
        var temp47 = new global::TabIcon();
        var temp48 = new global::Fuse.Gestures.Clicked();
        var temp49 = new global::Fuse.Triggers.Actions.Set<Fuse.Visual>(navigation_Active_inst);
        page4Tab = new global::Fuse.Controls.Panel();
        var temp50 = new global::TabIcon();
        var temp51 = new global::Fuse.Gestures.Clicked();
        var temp52 = new global::Fuse.Triggers.Actions.Set<Fuse.Visual>(navigation_Active_inst);
        page5Tab = new global::Fuse.Controls.Panel();
        var temp53 = new global::TabIcon();
        var temp54 = new global::Fuse.Gestures.Clicked();
        var temp55 = new global::Fuse.Triggers.Actions.Set<Fuse.Visual>(navigation_Active_inst);
        var temp56 = new global::Fuse.Drawing.StaticSolidColor(float4(0.7411765f, 0.7647059f, 0.7803922f, 1f));
        indicator.Color = float4(0.4235294f, 0.4784314f, 0.5372549f, 1f);
        indicator.Height = new Uno.UX.Size(4f, Uno.UX.Unit.Unspecified);
        indicator.Alignment = Fuse.Elements.Alignment.Top;
        indicator.Name = __selector2;
        global::Fuse.Controls.LayoutControl.SetLayoutMaster(indicator, page1Tab);
        indicator.Children.Add(temp1);
        temp1.Animators.Add(temp2);
        temp2.X = 2f;
        temp2.Duration = 0.6;
        temp2.RelativeTo = Fuse.Triggers.LayoutTransition.WorldPositionChange;
        temp2.Easing = Fuse.Animations.Easing.BackIn;
        temp3.Children.Add(temp4);
        temp3.Children.Add(temp5);
        temp3.Children.Add(navigation);
        temp3.Children.Add(temp40);
        global::Fuse.Controls.DockPanel.SetDock(temp4, Fuse.Layouts.Dock.Top);
        global::Fuse.Controls.DockPanel.SetDock(temp5, Fuse.Layouts.Dock.Bottom);
        navigation.Name = __selector3;
        navigation.Children.Add(page1);
        navigation.Children.Add(page2);
        navigation.Children.Add(page3);
        navigation.Children.Add(page4);
        navigation.Children.Add(page5);
        navigation.Children.Add(page6);
        page1.Name = __selector4;
        page1.Background = temp19;
        page1.Children.Add(temp6);
        page1.Children.Add(temp8);
        temp6.Threshold = 0.5f;
        temp6.Actions.Add(temp7);
        temp7.Value = page1Tab;
        temp8.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../stewardess3.png"));
        temp8.Children.Add(temp9);
        temp8.Children.Add(temp10);
        temp8.Children.Add(temp11);
        temp8.Children.Add(temp12);
        temp8.Children.Add(temp13);
        temp8.Children.Add(temp17);
        temp8.Children.Add(temp18);
        temp9.Value = "Good Afternoon";
        temp10.Value = "Login or Register";
        temp11.Value = "Let's plan your next trip";
        temp11.FontSize = 14f;
        temp11.X = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
        temp11.Y = new Uno.UX.Size(420f, Uno.UX.Unit.Unspecified);
        temp12.StretchMode = Fuse.Elements.StretchMode.UniformToFill;
        temp12.Width = new Uno.UX.Size(85f, Uno.UX.Unit.Unspecified);
        temp12.Height = new Uno.UX.Size(85f, Uno.UX.Unit.Unspecified);
        temp12.X = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        temp12.Y = new Uno.UX.Size(485f, Uno.UX.Unit.Unspecified);
        global::Fuse.Gestures.Clicked.AddHandler(temp12, temp_eb0.OnEvent);
        temp12.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../book.png"));
        temp12.Bindings.Add(temp_eb0);
        temp13.Text = "aaaaa";
        temp13.Width = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        temp13.Height = new Uno.UX.Size(70f, Uno.UX.Unit.Unspecified);
        temp13.Background = temp16;
        temp13.Children.Add(temp14);
        temp14.Actions.Add(temp15);
        temp15.Target = page6;
        temp17.Color = float4(0.827451f, 0.827451f, 0.827451f, 1f);
        temp17.Width = new Uno.UX.Size(4f, Uno.UX.Unit.Unspecified);
        temp17.Height = new Uno.UX.Size(70f, Uno.UX.Unit.Unspecified);
        temp17.Y = new Uno.UX.Size(490f, Uno.UX.Unit.Unspecified);
        temp18.StretchMode = Fuse.Elements.StretchMode.UniformToFill;
        temp18.Width = new Uno.UX.Size(80f, Uno.UX.Unit.Unspecified);
        temp18.Height = new Uno.UX.Size(80f, Uno.UX.Unit.Unspecified);
        temp18.X = new Uno.UX.Size(243f, Uno.UX.Unit.Unspecified);
        temp18.Y = new Uno.UX.Size(494f, Uno.UX.Unit.Unspecified);
        temp18.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../checkin.png"));
        page2.Name = __selector5;
        page2.Background = temp23;
        page2.Children.Add(temp20);
        page2.Children.Add(temp22);
        temp20.Threshold = 0.5f;
        temp20.Actions.Add(temp21);
        temp21.Value = page2Tab;
        temp22.Value = "Welcome to Page 2";
        page3.Name = __selector6;
        page3.Background = temp27;
        page3.Children.Add(temp24);
        page3.Children.Add(temp26);
        temp24.Threshold = 0.5f;
        temp24.Actions.Add(temp25);
        temp25.Value = page3Tab;
        temp26.Value = "Welcome to Page 3";
        page4.Name = __selector7;
        page4.Background = temp31;
        page4.Children.Add(temp28);
        page4.Children.Add(temp30);
        temp28.Threshold = 0.5f;
        temp28.Actions.Add(temp29);
        temp29.Value = page4Tab;
        temp30.Value = "Welcome to Page 4";
        page5.Name = __selector8;
        page5.Background = temp35;
        page5.Children.Add(temp32);
        page5.Children.Add(temp34);
        temp32.Threshold = 0.5f;
        temp32.Actions.Add(temp33);
        temp33.Value = page5Tab;
        temp34.Value = "Welcome to Page 5";
        page6.Name = __selector9;
        page6.Background = temp39;
        page6.Children.Add(temp36);
        page6.Children.Add(temp38);
        temp36.Threshold = 0.5f;
        temp36.Actions.Add(temp37);
        temp37.Value = page5Tab;
        temp38.Value = "Welcome to Page 5";
        temp40.ColumnCount = 5;
        temp40.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        global::Fuse.Controls.DockPanel.SetDock(temp40, Fuse.Layouts.Dock.Bottom);
        temp40.Background = temp56;
        temp40.Children.Add(page1Tab);
        temp40.Children.Add(page2Tab);
        temp40.Children.Add(page3Tab);
        temp40.Children.Add(page4Tab);
        temp40.Children.Add(page5Tab);
        page1Tab.Name = __selector10;
        page1Tab.Children.Add(temp41);
        temp41.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../flight.png"));
        temp41.Children.Add(temp42);
        temp42.Actions.Add(temp43);
        temp43.Value = page1;
        page2Tab.Name = __selector11;
        page2Tab.Children.Add(temp44);
        temp44.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../baggage.png"));
        temp44.Children.Add(temp45);
        temp45.Actions.Add(temp46);
        temp46.Value = page2;
        page3Tab.Name = __selector12;
        page3Tab.Children.Add(temp47);
        temp47.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../offers.png"));
        temp47.Children.Add(temp48);
        temp48.Actions.Add(temp49);
        temp49.Value = page3;
        page4Tab.Name = __selector13;
        page4Tab.Children.Add(temp50);
        temp50.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../account.png"));
        temp50.Children.Add(temp51);
        temp51.Actions.Add(temp52);
        temp52.Value = page4;
        page5Tab.Name = __selector14;
        page5Tab.Children.Add(temp53);
        temp53.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../more.png"));
        temp53.Children.Add(temp54);
        temp54.Actions.Add(temp55);
        temp55.Value = page5;
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(indicator);
        __g_nametable.Objects.Add(navigation);
        __g_nametable.Objects.Add(page1);
        __g_nametable.Objects.Add(temp_eb0);
        __g_nametable.Objects.Add(page2);
        __g_nametable.Objects.Add(page3);
        __g_nametable.Objects.Add(page4);
        __g_nametable.Objects.Add(page5);
        __g_nametable.Objects.Add(page6);
        __g_nametable.Objects.Add(page1Tab);
        __g_nametable.Objects.Add(page2Tab);
        __g_nametable.Objects.Add(page3Tab);
        __g_nametable.Objects.Add(page4Tab);
        __g_nametable.Objects.Add(page5Tab);
        this.Children.Add(indicator);
        this.Children.Add(temp3);
    }
    static global::Uno.UX.Selector __selector0 = "Element.LayoutMaster";
    static global::Uno.UX.Selector __selector1 = "Active";
    static global::Uno.UX.Selector __selector2 = "indicator";
    static global::Uno.UX.Selector __selector3 = "navigation";
    static global::Uno.UX.Selector __selector4 = "page1";
    static global::Uno.UX.Selector __selector5 = "page2";
    static global::Uno.UX.Selector __selector6 = "page3";
    static global::Uno.UX.Selector __selector7 = "page4";
    static global::Uno.UX.Selector __selector8 = "page5";
    static global::Uno.UX.Selector __selector9 = "page6";
    static global::Uno.UX.Selector __selector10 = "page1Tab";
    static global::Uno.UX.Selector __selector11 = "page2Tab";
    static global::Uno.UX.Selector __selector12 = "page3Tab";
    static global::Uno.UX.Selector __selector13 = "page4Tab";
    static global::Uno.UX.Selector __selector14 = "page5Tab";
}
