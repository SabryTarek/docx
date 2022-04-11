[Svelte]()
===

* Breif
    + Svelte is a compiler that generates minimal and highly optimized JavaScript code from our sources
    + setup a local Svelte development environment + create and build a starter app + understand the basics of how it works
    + In Svelte, an application is composed from one or more components. A component is a reusable self-contained block of code that encapsulates HTML, CSS and JavaScript that belong together, written into a .svelte file


* Work on:
    + Build-Time: Svelte
    + Run-Time: Angluar - React - Vue
Nested-Component



```javascript
// FileName: Greeting.svelte

<script>
	let name = 'sabry'
</script>

<h1>Hello {name.toUpperCase()}!</h1> // Inside the curly braces, we can put any JavaScript we want
```





notice that the component name Nested is capitalised. This convention has been adopted to allow us to differentiate between user-defined components and regular HTML tags.

<p>{@html string}</p>


compiler turns each component into a regular JavaScript class — just import it and instantiate with new

reactive declarations/value:
	$: doubled = count * 2;



Because Svelte's reactivity is triggered by assignments, using array methods like push and splice won't automatically cause updates.



	const pkg = {
		name: 'svelte',
		version: 3,
		speed: 'blazing',
		website: 'https://svelte.dev'
	};
</script>

<Info name={pkg.name} version={pkg.version} speed={pkg.speed} website={pkg.website}/>
<Info {...pkg}/>






# Svelte directives

 all the syntax Svelte adds to HTML.

 {}
 {ahtml }

{#if x > 10}
	<p>{x} is greater than 10</p>
{:else if 5 > x}
	<p>{x} is less than 5</p>
{:else}
	<p>{x} is between 5 and 10</p>
{/if}


<button on:click={toggle}>


* DOM:
    + Elements
    + Events
        + Events List:
            - on:click
            - on:mousemove
        + Handler Modifiers List:
            - preventDefault
            - stopPropagation
            - passive
            - nonpassive
            - capture
            - once
            - self
            - trusted






The full list of modifiers:

preventDefault — calls event.preventDefault() before running the handler. Useful for client-side form handling, for example.
stopPropagation — calls event.stopPropagation(), preventing the event reaching the next element
passive — improves scrolling performance on touch/wheel events (Svelte will add it automatically where it's safe to do so)
nonpassive — explicitly set passive: false
capture — fires the handler during the capture phase instead of the bubbling phase (MDN docs)
once — remove the handler after the first time it runs
self — only trigger handler if event.target is the element itself
trusted — only trigger handler if event.isTrusted is true. I.e. if the event is triggered by a user action.
You can chain modifiers together, e.g. on:click|once|capture={...}.





- Data Flow from top/parent component to bottom
- 


- HTML Interpolation
- Event Handling









Scoped style: only elements inside this component will effected and svelte does that by appending or pre-pending
these different random strings to classnames in a particular component