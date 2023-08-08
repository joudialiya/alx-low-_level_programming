#include "main.h"
#define N_IDENT 16

int check_fmt(int fd)
{
	const unsigned char magic[] = {0x7F, 0x45, 0x4c, 0x46};
	unsigned char buf[4];
	int i = 0;

	if (read(fd, buf, 4) != 4)
	{
		dprintf(STDERR_FILENO, "Can't read the file\n");
		exit(98);
	}
	while (i < 4)
	{
		if (magic[i] != buf[i])
		{
			dprintf(STDERR_FILENO, "Not an elf file\n");
			exit(98);
		}
		++i;
	}
	lseek(fd, 0, SEEK_SET);
	return (0);
}
void _magic(unsigned char *ident)
{
	int i = 0;

	printf("  Magic:   ");
	while(i < N_IDENT)
	{
		printf("%02x", ident[i]);
		++i;
		if (i != N_IDENT)
			printf(" ");
	}
	printf("\n");
}
void _data(unsigned char *ident)
{
	printf("  Data:                              ");
	switch (ident[5])
	{
		case (1):
			printf("2's complement, little endian\n");
			break;
		case (2):
			printf("2's complement, big endian\n");
			break;
	}
}
void _class(unsigned char *ident)
{
	printf("  Class:                             ");
	switch (ident[4])
	{
		case (1):
			printf("ELF32\n");
			break;
		case (2):
			printf("ELF64\n");
			break;
	}
}
void _version(unsigned char *ident)
{
	printf("  Version:                           %d", ident[6]);
	switch (ident[6])
	{

		case (1):
			printf(" (current)\n");
			break;
		default:
			printf("\n");
			break;
	}
}
void _os_abi(unsigned char *ident)
{	
	printf("  OS/ABI:                            ");
	switch (ident[7])
	{
		case (0):
			printf("UNIX - System V\n");
			break;
		case (2):
			printf("UNIX - NetBSD\n");
			break;
		case (3):
			printf("UNIX - LINUX\n");
			break;
		case (6):
			printf("UNIX - Solaris\n");
			break;
		case (9):
			printf("UNIX - FreeBSD\n");
			break;
		default:
			printf("<unkown: %x>\n", ident[7]);
			break;
	}
}
void _os_ver(unsigned char *ident)
{
	printf("  ABI Version:                       %d\n", ident[8]);
}
void _type(unsigned short int type, unsigned char *ident)
{
	if (ident[4] == 2)
		type = ((type & 0x00ff) << 8) | ((type & 0xff00) >> 8);

	printf("  Type:                              ");

	switch (type)
	{
		case 1:
			printf("REL (Relocatable file)\n");
			break;
		case 2:
			printf("EXEC (Executable file)\n");
			break;
		case 3:
			printf("DYN (Sheard object file)\n");
			break;
		case 4:
			printf("Core (Core file)\n");
			break;
		default:
			printf("<unkown: %hx>\n", type);
			break;
	}
}
void _entry(unsigned long int addr, unsigned char *ident)
{
	if (ident[4] == 2)
	{
		unsigned long int p0, p1, p2, p3, p4, p5, p6, p7;

		p0 = (addr & 0x00000000000000ff) << 56; 
		p1 = (addr & 0x000000000000ff00) << 36; 
		p2 = (addr & 0x0000000000ff0000) << 18; 
		p3 = (addr & 0x00000000ff000000) << 8;
		p4 = (addr & 0x000000ff00000000) >> 8;
		p5 = (addr & 0x0000ff0000000000) >> 18;
		p6 = (addr & 0x00ff000000000000) >> 36;
		p7 = (addr & 0xff00000000000000) >> 56;
		
		addr = p0 | p1 | p2 | p3 | p4 | p5 | p6 | p7;
	}
	if (ident[5] == 1)
		addr &= 0x00000000ffffffff;
	printf("  Entry point address:               %#lx\n", addr);
}

int main(int argc, char *argv[])
{
	int fd = 0;
	ssize_t r = 0;
	elf64_t elf64;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Can't open the file\n");
		exit(98);
	}
	check_fmt(fd);
	r = read(fd, &elf64, sizeof(elf64_t));
	if (r < 0)
	{
		dprintf(STDERR_FILENO, "Can't read from the file\n");
		exit(98);	
	}
	close(fd);
	printf("ELF Header:\n");
	_magic(elf64.e_ident);
	_class(elf64.e_ident);
	_data(elf64.e_ident);
	_version(elf64.e_ident);
	_os_abi(elf64.e_ident);
	_os_ver(elf64.e_ident);
	_type(*((unsigned short int *)elf64.e_type), elf64.e_ident);
	_entry(*((unsigned long int *)elf64.e_entry), elf64.e_ident);
	
	return (0);
}
