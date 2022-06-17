Org-mode part of GNU Emacs so you should install Emacs to run it or use vim-orgmode with vim


trello orgmode



- emacs killer feature
- outliner/note taking/todolist


- C-c C-l add link
- C-c C-e === M-x org-publish
- M-x org-babletangle

#+TITLE:
#+aUTHOR:
#+HTML_HEAD: <link rel="stylesheet" type="text/css" href="http://gongzhitaao.org/orgcss/org.css"/>



-e EMAIL="ss.tarek97@gmail.com"     -e ADDRESS="s.storj.ddns.net:28967"     -e STORAGE="1.5TB"     --mount type=bind,source="/root/.local/share/storj/identity/",destination=/app/identity     --mount type=bind,source="/usr/share/src/docker",destination=/app/config     --name storagenode storjlabs/storagenode:latest



docker run -d --restart unless-stopped --stop-timeout 300 \
-p 28967:28967/tcp \
-p 28967:28967/udp \
-p 127.0.0.1:14002:14002 \
-e WALLET="0xC838D5D71b82C38770fc517B63586e98b88b28C6" \
-e EMAIL="ss.tarek97@gmail.com" \
-e ADDRESS="174.141.228.232:28967" \
-e STORAGE="1.7TB" \
--mount type=bind,source="/root/.local/share/storj/identity/storagenode/",destination=/app/identity \
--mount type=bind,source="/usr/share/src/docker",destination=/app/config \
--name storagenode storjlabs/storagenode:latest



docker run --rm -e SETUP="true" \
    --mount type=bind,source="/root/.local/share/storj/identity/storagenode/",destination=/app/identity \
    --mount type=bind,source="/usr/share/src/docker",destination=/app/config \
    --name storagenode storjlabs/storagenode:latest