SRC = main.c kernel/kernel.c ui/ui.c cmd/cmd.c \
      cmd/bin/cmd_help.c cmd/bin/cmd_clear.c cmd/bin/cmd_echo.c \
      cmd/bin/cmd_ver.c cmd/bin/cmd_grep.c cmd/bin/cmd_ls.c \
      cmd/bin/cmd_cd.c cmd/bin/cmd_mkdir.c cmd/bin/cmd_touch.c \
      cmd/bin/cmd_file.c cmd/bin/cmd_find.c cmd/bin/cmd_rm.c \
      cmd/bin/cmd_cat.c cmd/bin/cmd_mynano.c cmd/bin/cmd_mystery.c

build/mysteryos: $(SRC)
	mkdir -p build
	gcc -Wall -Wextra -std=c99 -I cmd $(SRC) -o build/mysteryos
