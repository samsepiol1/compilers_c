enum token{EOF, ID, NUM, PLUS, MINUS};
union tokenval{string id, int num};

enum token tok;
union tokenval tokval;

int lookup(String id){};

int F_follow[] = {PLUS, TIMES, RPAREN, EOF, -1};
if F(void) {switch (tok)
{
case ID: {int i = lookup(tokval.id); advance() return i;}
case NUM: {int i = tokval.num; advance(); return i;}
case LPAREN:  eat(LPAREN); {
    int i = E();
    eatOrSkipTo(RPAREN, F_follow);
    return i;
}

case EOF:
default: printf("expected ID, NUM, or left-paren")
         skipto(T_follow);
         return 0;
}}