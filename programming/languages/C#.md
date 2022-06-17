C# (CSharp)
===========
- C# was developed by Anders Hejlsberg and his team during the development of .Net Framework.
- C# programming is very much based on C and C++ programming languages
- developed by Microsoft and approved by European Computer Manufacturers Association (ECMA) and International Standards Organization (ISO)



The .Net framework is a revolutionary platform that helps you to write the following types of applications:
- Windows applications
- Web applications
- Web services





> study basic building blocks of the C# programming language

bare minimum C# program structure


- Class methods = Static method

- namespace is a collection of classes. The HelloWorldApplication namespace contains the class HelloWorld.






It is worth to note the following points:
- C# is case sensitive.
- All statements and expression must end with a semicolon (;).
- The program execution starts at the Main method.
- Unlike Java, program file name could be different from the class name.



csc helloworld.cs
./helloworld
----------------------------------------------------------------------------------------------------------------------------------
> Hello World:

using System;

public class Hello
{
    public static void Main()
    {
        Console.WriteLine("Hello, World!");
    }
}


----------------------------------------------------------------------------------------------------------------------------------
public enum CarType
{
    Toyota = 1,
    Honda = 2,
    Ford = 3,
}

public class Tutorial
{
    public static void Main()
    {
        CarType myCarType = CarType.Toyota;
    }
}
----------------------------------------------------------------------------------------------------------------------------------
- statically-typed: we must define the types of variables before using them
- type inference -> var x = 1;
- strong-type
----------------------------------------------------------------------------------------------------------------------------------
# defining a floating point number requires an explicit f letter after the number > float myFloat = 1f;

----------------------------------------------------------------------------------------------------------------------------------
Reference:
using System;


Console:
- .Write()
- .WriteLine()
- .ReadLine()
- .Read()

----------------------------------------------------------------------------------------------------------------------------------
C# was designed by Microsoft on top of the dotnet framework





https://www.youtube.com/watch?v=1uR4tL-OSNI




https://www.youtube.com/watch?v=M3lqkuZQBcM



https://www.youtube.com/watch?v=aKShnpOXqn0





Parallel [Processing - Computing - Programming] with CUDA
=========================================================


nano sec clock speed

http://www.gpgpu-sim.org/





.net
- framework (2002)
    - be open source
- core (2016)
    - open source
    - cross platform
- C#
- F#
- VB

- PCL(Portable Class Library) -> standard
- native

- ASP
    - MVC === ASP.net version 5



visual studio
- community
- express
- enterprise

> ecosystem

- Linq.net
- ADO.net
- Entity Framework # ORM

- windows forms -> WPF(Window Presentation Framework) # Desktop Applications (GUI)
- WCF(Window Communication Foundation) # API
- Blazer # template engine for asp.net
- Nuget # package manager for asp.net

- sql Server
    - express


visual studio
- 2013
- 2015
- 2017
- 2019
mono develop -> xamarin studio -> visual studio for MAC
visual studio code





--------------------------------------------------------------------------------------------------------------------------------------------
[dnotnet core]()
===
- SDK
    + C#
    + F#
    + VB
- Runtime

- ";" Mandatory
- 

```bash
$ apt install dotnet-sdk-6.0
$ dornet --help
```



```bash
$ dotnet --version
$ dotnet tool install --global dotnet-ef
$ dotnet new mvc -n "ASP.netCore CRUD App" --lang "C#"
```
```bash
$ dotnet add package Microsoft.AspNetCore.Identity.EntityFrameworkCore --version 5.0.1
$ dotnet add package Microsoft.EntityFrameworkCore.sqlite --version 5.0.1
$ dotnet add package Microsoft.EntityFrameworkCore.tools --version 5.0.1
$ dotnet add package Microsoft.AspNetCore.Diagnostics.EntityFrameworkCore --version 5.0.1
```

```C#
int myInt = 1;
float myFloat = 1f;
bool myBoolean = true;
string myName = "John";
char myChar = 'a';
double myDouble = 1.75;


// C# supports type inference
var x = 1;
var y = 2;
var sum = x + y;    // sum will also be defined as an integer


// Type Conversion | Casting => {Automaticly=Implictly | Manually=Explictly}
int myVar = (int) 1.0; // === var mtVar = Convert.ToInt32(1.0)
string myVar = Convert.ToString(10); // === var mtVar = Convert.ToString(1.0)
```

PascalCase for:
    - Files
    - Modules
    - Classes
    - Functions
CamelCase
    - Variables

| .net framework | .net core |
|----------------|-----------|
| CLR(Common Language Runtime) | |
| FCL(Framework Class Library) | core fx|
| windows forms & WPF | UWP (Universal Window Platform) |
| WCF & ASP.net web forms| ASP.net Core = [ASP.net MVC] + [ASP.net web API] |
| Entity Framework | Entity Framework core |




composser require
composser global require
composser update
composser global update


dotnet sdk
dotnet

- info
- version
- new console
- run

Cmder


Generic repository pattern
Inversion of Control (IOC)
Dependency Injection (DI)
    - Manual
    - Automatic









> Resources:
    * Youtube:
        - https://www.youtube.com/watch?v=vN9NRqv7xmY
        - https://www.youtube.com/channel/UCeWYkSdr9dNIqgSQWmB6q7w/playlists