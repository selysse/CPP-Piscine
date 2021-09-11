NAME		=	SuperTrap
		
SRCS		=	main.cpp FragTrap.cpp ClapTrap.cpp ScavTrap.cpp NinjaTrap.cpp SuperTrap.cpp

HEADERS		=	FragTrap.hpp ClapTrap.hpp ScavTrap.hpp NinjaTrap.hpp SuperTrap.hpp

INCLUDES	=	-I$(HEADERS)

OBJS		=	$(SRCS:.cpp=.o)

CPP_C		=	clang++

FLAGS		=	-std=c++98 -Wall -Wextra -Werror


all: $(NAME)

%.o: %.cpp $(HEADERS)
	@$(CPP_C) $(FLAGS) -c $< -o $@
	@$(PRINT) "\r$(FGREEN)COMPILE: $<                   $(PNULL)"

$(NAME): $(OBJS)
	@$(CPP_C) $(FLAGS) $(OBJS) -o $(NAME)
	@$(PRINT) "\r$(FGREEN)MAKE: ${NAME}                 $(PNULL)\n"

clean:
	@$(PRINT) "$(addprefix \n$(FRED)REMOVE: $(FYELLOW), $(FILES:.c=.o))$(PNULL)"
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)
	@$(PRINT) "\r$(FRED)REMOVE: $(FYELLOW)$(NAME)$(PNULL)\n"

re:	fclean all

.PHONY: all clean fclean re 

# **************************************************************************** #
#								Utilits										   #
# **************************************************************************** #

# Цвета шрифта
FBLACK		= \033[30m
FRED		= \033[31m
FGREEN		= \033[32m
FYELLOW		= \033[33m
FBLUE		= \033[34m
FMAGENTA	= \033[35m
FCYAN		= \033[36m
FGREY		= \033[37m

# Цвета фона
BGBLACK		= \033[40m
BGRED		= \033[41m
BGGREEN		= \033[42m
BGYELLOW	= \033[43m
BGBLUE		= \033[44m
BGMAGENTA	= \033[45m
BGCYAN		= \033[46m
BGGREY		= \033[47m

# Свойства текста
PBOLD		= \033[1m#	жирный шрифт
PDBOLD		= \033[2m#	полу яркий цвет
PNBOLD		= \033[22m#	нормальная интенсивность
PUNDERLINE	= \033[4m#	подчеркивание
PBLINK		= \033[5m#	мигание
PINVERSE	= \033[7m#	инверсия
PNULL		= \033[0m#	отмена

PRINT		= printf
