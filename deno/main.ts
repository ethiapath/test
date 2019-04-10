import { serve } from "https://deno.land/std/http/server.ts";
const s = serve("0.0.0.0:8000");

async function main() {
  for await (const req of s) {
    console.log("req: ");
    req.respond({ body: new TextEncoder().encode("Hello world\n")});
  }
}

main();