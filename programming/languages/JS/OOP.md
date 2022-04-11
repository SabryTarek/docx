OOP in JS
=======
import this

when you use es6 classes these are basically it's called
syntactic sugar or a convenient syntax
and the reason for that is because your writing thing you're writing it in a different way using classes which relates more to other languages like Java c-sharp PHP and so on but under the hood it's still using those prototypes it's still using that es5 syntax and
I'll show you that in the browser tools now when it comes to
objects in JavaScript basically and this
isn't real code I'm going to type I'm
gonna I'm going to delete this after but
basically we have an object and we can
do dot and we can you either call it
property on it so if it has a property
associated with it or if it has a
function associated with it it's
actually called a method okay so we can
either have a property like a string or
an array or another or an object literal
something like that or it can be a
function that actually executes now
there are languages where you hear
everything is an object such as Ruby in
JavaScript it's a



const s1 = "hello"
console.log(typeof s1) //--> string

const s2 = new String("hello")
console.log(typeof s2) //--> object


s1.toUpperCase -> behind the scenes -> toUpperCase(s1) // because string is a primtive type not an object
s1.toUpperCase -> behind the scenes js convert a primitive type to an object -> new String("hello").toUpperCase() // because string is a primtive type not an object


Object
- . values // return array
- .keys
- .prototype

- .call
- .create


> tight coupling
"Having code build on other code is exactly what modularity isn't."
inheritance allows you to leverage to
use code from your base classes into
your subclasses so that you can in
theory reuse the code and reuse the
functionality of the base classes now
sounds good in theory but the problem is
you're creating a very tight
relationship tight coupling as they call
it between your base class and your
subclasses as they would call them or
the classes that are based on top of it
so what happens is that they become very
brittle because if anything changes with
this this underlying class it will break
your top little classes your subclasses




