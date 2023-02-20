
enum token{IF, THEN, BEGIN, END, PRINT, SEMI, NUM, EQ, ELSE};
extern enum token getToken(void);
enum token tok;

void advance() {tok-getToken();}
void eat(enum token t) {if (tok==t) advance(); else error();}

void S(void) {switch(tok){
    case IF:         eat(IF); eat(THEN); S();
                              eat(ELSE); S(); break;
    case BEGIN:      eat(BEGIN); S(); L(); break;
    case PRINT:      eat(PRINT); E(); break;
    default:         error();

    
}}

void L(void) {switch(tok){
       case END:     eat(END); break;
       case SEMI:    eat(SEMI); S(); L(); break;
       default:      error();
}}
void E(void) {eat(NUM); eat(EQ); eat(NUM);}

