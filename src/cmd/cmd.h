#ifndef CMD_H
#define CMD_H

void cmd_help(int argc, char *argv[]);
void cmd_clear(int argc, char *argv[]);
void cmd_echo(int argc, char *argv[]);
void cmd_ver(int argc, char *argv[]);
void cmd_grep(int argc, char *argv[]);
void cmd_ls(int argc, char *argv[]);
void cmd_cd(int argc, char *argv[]);
void cmd_mkdir(int argc, char *argv[]);
void cmd_touch(int argc, char *argv[]);
void cmd_file(int argc, char *argv[]);
void cmd_find(int argc, char *argv[]);
void cmd_rm(int argc, char *argv[]);

void execute_command(int argc, char *argv[]);

#endif

