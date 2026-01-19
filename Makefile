SRC = src/main.c src/kernel/kernel.c src/ui/ui.c src/cmd/cmd.c \
      src/cmd/bin/cmd_help.c src/cmd/bin/cmd_clear.c src/cmd/bin/cmd_echo.c \
      src/cmd/bin/cmd_ver.c src/cmd/bin/cmd_grep.c src/cmd/bin/cmd_ls.c \
      src/cmd/bin/cmd_cd.c src/cmd/bin/cmd_mkdir.c src/cmd/bin/cmd_touch.c \
      src/cmd/bin/cmd_file.c src/cmd/bin/cmd_find.c src/cmd/bin/cmd_rm.c

build/mysteryos: $(SRC)
	mkdir -p build
	gcc -Wall -Wextra -std=c99 -I src/cmd $(SRC) -o build/mysteryos
