using Uno;
using Uno.Collections;
using Uno.UX;
using Uno.IO;
using Outracks.Simulator;
using Outracks.Simulator.Bytecode;
using Outracks.Simulator.Runtime;
namespace Outracks.Simulator 
{ 
	public class GeneratedApplication : Outracks.Simulator.Client.Application
	{
		public GeneratedApplication()
			: base(
				new [] 
				{new Uno.Net.IPEndPoint(Uno.Net.IPAddress.Parse("127.0.0.1"), 12124), new Uno.Net.IPEndPoint(Uno.Net.IPAddress.Parse("192.168.26.2"), 12124), new Uno.Net.IPEndPoint(Uno.Net.IPAddress.Parse("192.168.47.2"), 12124), new Uno.Net.IPEndPoint(Uno.Net.IPAddress.Parse("192.168.144.2"), 12124), new Uno.Net.IPEndPoint(Uno.Net.IPAddress.Parse("192.168.56.201"), 12124), new Uno.Net.IPEndPoint(Uno.Net.IPAddress.Parse("192.168.2.48"), 12124), new Uno.Net.IPEndPoint(Uno.Net.IPAddress.Parse("169.254.129.50"), 12124), new Uno.Net.IPEndPoint(Uno.Net.IPAddress.Parse("169.254.233.24"), 12124)},"C:\\Users\\Lotus\\Documents\\Fuse\\garuda\\garuda.unoproj",new string[] 
				{ })
		{
			Runtime.Bundle.Initialize("garuda");

			if defined(DotNet)
				Reflection = new UnoHostReflection();
			if defined(CPLUSPLUS)
				Reflection = new NativeReflection(new SimpleTypeMap());
		}
	}
}