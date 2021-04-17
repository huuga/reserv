#include "libft.h"
#include <ctype.h>

int		main()
{
	char s[] = "123456";
	printf("strlen 6 : %lu\n", ft_strlen(s));

	char *rt = ft_memset(s, 'g', 3);
	printf("memset ggg456 : %s\n", rt);



	char *mem;


	mem = malloc(1);
	char	*mem2 = malloc(1);

	// ft_bzero(s, 3);
	// printf("%c", s[0]);
	// printf("%c", s[1]);
	// printf("%c", s[2]);
	// printf("%c", s[3]);
	// printf("%c", s[4]);
	// printf("%c\n", s[5]);

	
	char str1f[50] = "I am going from Delhi to Gorakhpur";
	printf("memmove going from Delhi to Gorakhpur : %s\n", ft_memmove( str1f + 11, str1f + 5, 29 ));
	char da[] = "abcdefg";

	char nba[] = "jordan";
	char nkf[20];
	printf("memcpy jordan : %s\n", ft_memcpy(nkf, nba, 7));

	char *yoyo = ft_memccpy(mem2, da, 'e', 9);
	if (yoyo == NULL)
	{
		write (1, "yoyo is null\n", 13);
		return (1);
	}
	else 
		printf("memccpy %s\n", yoyo);
	printf("memchr defg : %s\n", (char *)ft_memchr(da, 'd', 5));
	char f1[] = "12345";
	char f2[] = "123";
	printf("memcmp 0 : %d\n", ft_memcmp(f2, f1, 0));
	printf("memcmp -52 : %d\n", ft_memcmp(f2, f1, 4));
	    char *s1 = "\xff\xaa\xde\xffMACOSX\xff";
        char *s2 = "\xff\xaa\xde\x02";
        size_t size = 8;
        int i1 = memcmp(s1, s2, size);
        int i2 = ft_memcmp(s1, s2, size);
		printf("origin memcmp %d\n", i1);
		printf("my memcmp %d\n", i2);
	free(mem2);
	free(mem);

	char *slovo = "lisma";
	char *duppy = ft_strdup(slovo);
	if (duppy == NULL)
	{
		write(1, "strdup is NULL\n", 14);
		return  (1);
	}
	printf("strdup lisma : %s\n", duppy);
	free(duppy);

	

	printf("---------------------\n");
	char fger[] = "12345678";
	char shorty[] = "";
	printf("strchr 5678 : %s\n", ft_strchr(fger, '5'));
	if ((ft_strchr(fger, 'h')) == NULL)
		printf("NULL good\n");
	else 
		printf ("NULL is bad\n");
	if (*(ft_strchr(fger, 0)) == 0)
		printf("null terminator good\n");
	else 
		printf("null terminator is bad\n");
	if (*(ft_strchr(shorty, 0)) == 0)
		printf("shorty good\n");
	else 
		printf("shorty is bad\n");
	
	printf("---------------------\n");
	char fgerd[] = "123454321";
	printf("strrchr 21 : %s\n", ft_strrchr(fgerd, '2'));
	if ((ft_strrchr(fgerd, 'h')) == NULL)
		printf("NULL good\n");
	else 
		printf ("NULL is bad\n");
	if (*(ft_strrchr(fgerd, 0)) == 0)
	 	printf("null terminator good\n");
	else 
		printf ("null terminator is bad\n");
	if (*(ft_strrchr(shorty, 0)) == 0)
	 	printf("shorty good\n");
	else 
		printf("shorty is bad\n");

	
	printf("---------------------\n");
	char ffe[] = "ban bar bal";
    printf("strnstr bar bal : %s\n", ft_strnstr(ffe, "bar", 7));
	if ((ft_strnstr(ffe, "bar", 6)) == NULL)
		printf("NULL good\n");
	else 
		printf("NULL is bad\n");
	if ((ft_strnstr(ffe, "bas", 16)) == NULL)
		printf("NULL is good\n");
	else 
		printf("NULL is bad\n");

	printf("---------------------\n");
	char sr1[] = "12345";
	char sr2[] = "1234g";

	printf("---------------------\n");
	printf("strncmp -4 : %d\n", ft_strncmp(sr1, sr2, 10));
	printf("strncmp 0 : %d\n", ft_strncmp(sr1, sr2, 4));

	printf("---------------------\n");
	printf("atoi 12345 : %d\n", ft_atoi(sr1));
	printf("atoi -235 : %d\n", ft_atoi("    -235dfg54"));
	printf("atoi 2 : %d\n", ft_atoi("    +2 35dfg54"));
	printf("atoi 2 : %d\n", ft_atoi(" 		  +2 35dfg54"));
	printf("atoi 0 : %d\n", ft_atoi("    +-235dfg54"));
	printf("atoi 0 : %d\n", ft_atoi(""));
	printf("my atoi  : %d\n", ft_atoi("-99999999999999999"));
	printf("orig atoi  : %d\n", atoi("-9999999999999999"));

	printf("---------------------\n");
	printf("isalpha 0 : %d\n", ft_isalpha('3'));
	printf("isalpha 1 : %d\n", ft_isalpha('b'));

	printf("---------------------\n");
	printf("isdigit 0 : %d\n", ft_isdigit('b'));
	printf("isdigit 1 : %d\n", ft_isdigit('5'));

	printf("---------------------\n");
	printf("isalnum 8 : %d\n", ft_isalnum('b'));
	printf("isalnum 8 : %d\n", ft_isalnum('4'));
	printf("isalnum 0 : %d\n", ft_isalnum(' '));

	printf("---------------------\n");
	printf("isascii 1 : %d\n", ft_isascii(' '));
	printf("isascii 1 : %d\n", ft_isascii('b'));
	printf("isascii 0 : %d\n", ft_isascii(-128));
	printf("isascii 1 : %d\n", ft_isascii(0));

	printf("---------------------\n");
	printf("isprint 0 : %d\n", ft_isprint(31));
	printf("isprint 1 : %d\n", ft_isprint(32));
	printf("isprint 1 : %d\n", ft_isprint(126));
	printf("isprint 0 : %d\n", ft_isprint(127));

	printf("---------------------\n");
	printf("toupper F : %c\n", ft_toupper('f'));	
	printf("toupper F : %c\n", ft_toupper('F'));	
	printf("toupper 5 : %c\n", ft_toupper('5'));	
	printf("toupper M-^A : %c\n", ft_toupper(129));

	printf("---------------------\n");
	printf("tolower f : %c\n", ft_tolower('f'));	
	printf("tolower f : %c\n", ft_tolower('F'));	
	printf("tolower 5 : %c\n", ft_tolower('5'));	
	printf("tolower M-^A : %c\n", ft_tolower(129));


	printf("---------------------\n");
	printf("ft_substr chak : %s\n", ft_substr("boom-chaka", 5, 4));
	char *str = "01234";
    size_t sizeg = 10;
    char *ret = ft_substr(str, 5, sizeg);
	if (*ret == 0) printf("salvatore\n");

	printf("---------------------\n");
	const char klm1[] = "nakatomi";
	const char klm2[] = "plaza";
	printf("ft_strjoin nakatomiplaza : %s\n", ft_strjoin(klm1, klm2));

	printf("---------------------\n");
	char *dsgg;
	if ((dsgg = ft_strtrim("  abdgabcdefg", "  ")) != NULL)
		printf("strtrim %s\n", dsgg);
	else
		printf("strtrim is NULL\n");
	printf("---------------------\n");
	//ft_split("   asd   sdfsd  a sdf ggh   ", ' ');

}
