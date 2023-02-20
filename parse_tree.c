%{
    typedef struct table *Table_;
    Table_ {string id; int value; Table_ tail};
    Table_ Table (string id, int value, struct table *tail);
    Table_ table=NULL

    int lookup(Table_ table, string id){
        assert(table!=NULL);
        if(id == table.id) return table.value;
        else return lookup(table.tail, id);

    }

    void update(Table_ *tabptr, string id, int value){
        *tabptr = Table(id, value, *tabptr);
    }
%}
%union{int num; string id;}