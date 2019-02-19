make -C libft/ fclean && make -C libft/
gcc  -g3 -fsanitize=address -I libft/ -o get_next_line.o -c get_next_line.c
gcc  -g3 -fsanitize=address -I libft/ -o main.o -c main.c
gcc  -g3 -fsanitize=address -o test_gnl main.o get_next_line.o -I libft/ -L libft/ -lft