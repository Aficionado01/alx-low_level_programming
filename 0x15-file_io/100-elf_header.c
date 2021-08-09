#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#include <fcntl.h>
#include <elf.h>
#include <sys/stat.h>

/**
 * paddr - prints address
 * @__buf: buffer.
 * Return: void.
 */
void paddr(char *__buf)
{
int i;
int srt;
char sys;

printf("  Entry point address:               0x");

sys = __buf[4] + '0';
if (sys == '1')
{
srt = 26;
printf("80");
for (i = srt; i >= 22; i--)
{
if (__buf[i] > 0)
printf("%x", __buf[i]);
else if (__buf[i] < 0)
printf("%x", 256 + __buf[i]);
}
if (__buf[7] == 6)
printf("00");
}

if (sys == '2')
{
srt = 2
for (i = srt; i > 23; i--)
{
if (__buf[i] >= 0)
printf("%02x", __buf[i]);

else if (__buf[i] < 0)
printf("%02x", 256 + __buf[i]);
}
}
printf("\n");
}

/**
 * ptype - prints type
 * @__buf: buffer.
 * Return: void.
 */
void ptype(char *__buf)
{
char _type = __buf[16];

if (__buf[5] == 1)
_type = __buf[16];
else
_type = __buf[17];

printf("  Type:                              ");
switch (_type)
{
case 0:
printf("NONE (No file type)\n");
break;
case 1:
printf("REL (Relocatable file)\n");
break;
case 2:
printf("EXEC (Executable file)\n");
break;
case 3:
printf("DYN (Shared object file)\n");
break;
case 4:
printf("CORE (Core file)\n");
break;
default:
printf("<unknown: %x>\n", _type);
break;
}


}

/**
 * posabi - prints osabi
 * @__buf: buffer.
 * Return: void.
 */
void posabi(char *__buf)
{
char os = __buf[7];

printf("  OS/ABI:                            ");
if (os == 0)
printf("UNIX - System V\n");
else if (os == 2)
printf("UNIX - NetBSD\n");
else if (os == 6)
printf("UNIX - Solaris\n");
else
printf("<unknown: %x>\n", os);


}

/**
 * pver - prints version
 * @__buf: buffer.
 * Return: void.
 */
void pver(char *__buf)
{
int ver = __buf[6];

printf("  Version:                   %d", ver);

if (ver == EV_CURRENT)
printf(" (current)");

printf("\n");
}
/**
 * pdata - prints data
 * @__buf: buffer.
 * Return: void.
 */
void pdata(char *__buf)
{
char dt = __buf[5];

printf("  Data:                              2's complement");
if (dt == 1)
printf(", little endian\n");

if (dt == 2)
printf(", big endian\n");
}
/**
 * pmagic - prints magic info.
 * @__buf: buffer.
 * Return: void.
 */
void pmagic(char *__buf)
{
int bytes;

printf("  Magic:  ");

for (bytes = 0; bytes < 16; bytes++)
printf(" %02x", __buf[bytes]);

printf("\n");
}

/**
 * verif_sys - verif the system version.
 * @__buf: buffer.
 * Return: void.
 */
void verif_sys(char *__buf)
{
char sys = __buf[4] + '0';

if (sys == '0')
exit(98);

printf("ELF Header:\n");
pmagic(__buf);

if (sys == '1')
printf("  Class:                             ELF32\n");

if (sys == '2')
printf("  Class:                      ELF64\n");

pdata(__buf);
pver(__buf);
posabi(__buf);
printf("  ABI Version:                %d\n", __buf[8]);
ptype(__buf);
paddr(__buf);
}

/**
 * verif_elf - verif if it is an elf file.
 * @__buf: buffer.
 * Return: 1 if it is an elf file. 0 if not.
 */
int verif_elf(char *__buf)
{
int addr = (int)__buf[0];
char E = __buf[1], L = __buf[2], F = __buf[3];

if (addr == 127 && E == 'E' && L == 'L' && F == 'F')
return (1);

return (0);
}

/**
 * main - check the code for Holberton School students.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */
main(int argc, char *argv[])
{
int __fd, _read;
char __buf[27];

if (argc != 2)
{
dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
exit(98);
}

__fd = open(argv[1], O_RDONLY);

if (__fd < 0)
{
dprintf(STDERR_FILENO, "Err: file can not be open\n");
exit(98);
}

lseek(__fd, 0, SEEK_SET);
_read = read(__fd, __buf, 27);

if (_read == -1)
{
dprintf(STDERR_FILENO, "Err: The file can not be read\n");
exit(98);
}

if (!verif_elf(__buf))
{
dprintf(STDERR_FILENO, "Err: It is not an ELF\n");
exit(98);
}

verif_sys(__buf);
close(__fd);

return (0);
}
