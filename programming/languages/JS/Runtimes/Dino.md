[Dino](https://deno.land/)
===
- Deno is a simple, modern and secure runtime
- for JavaScript and TypeScript
- uses V8 and is built in Rust


### [Installation](https://github.com/denoland/deno_install)

```bash
$ curl -fsSL https://deno.land/install.sh | sh
$ export DENO_INSTALL="/root/.deno"
$ export PATH="$DENO_INSTALL/bin:$PATH"
$ deno --help
$ deno run https://deno.land/std/examples/welcome.ts
```

```bash
$ deno install --allow-read --allow-run --allow-write -f --unstable https://deno.land/x/denon/denon.ts === deno install -qAf --unstable https://deno.land/x/denon/denon.ts
$ denon run --allow-env --allow-net app.ts
```



```bash
$ 
$ 
$ 
$ 
$ 
$ 
$ deno upgrade
```

```deno
import { serve } from "https://deno.land/std@0.132.0/http/server.ts";

console.log("http://localhost:8000/");
serve((req) => new Response("Hello World\n"), { port: 8000 });
```