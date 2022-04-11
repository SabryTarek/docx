ChatBots
===

- Telegram 
    - Telegraf
    - Telegram-bot
- Discord
    - Discord.js


- Web Hooks
- Http Polling
- Event-Drivan

- Need to Server


https://typedoc.org/




[Telegraf]()
===


bot.use((ctx) => ctx.replay('fixed-response-to-all-messages-and-actions'))
bot.start((ctx) => ctx.replay('response-to-start-command'))
bot.help((ctx) => ctx.replay('response-to-help-command'))
bot.help((ctx) => ctx.replay('this bot can perform the following commands \n - /start\n - /help\n'))



bot.on(('message | photo ||||', ctx) => ctx.replay('response-to-start-command'))



update types

