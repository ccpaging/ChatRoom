void is_sqlite(int rc);  //测试数据库
void is_malloc_ok(vpChat *list);
void is_sqlite_ok(int rc);
void open_db(sqlite3 **db);//打开数据库
void creat_user_db(sqlite3 *db,char **errmsg);//建立user数据表
void creat_data_db(sqlite3 *db,char **errmsg);//建立data数据表
void creat_online_db(sqlite3 *db,char **errmsg);//建立online数据表
void creat_server_db(sqlite3 *db,char **errmsg);//建立server数据表
void insert_server_db(sqlite3 *db,char *time,char **errmsg);//縮erver靠靠靠�
void read_db_ok(sqlite3 *db,char *errmsg,char*tablename);//靠靠靠�
void delete_clean_db(sqlite3 *db,char *tablename,char **errmsg);
int read_online_fd(sqlite3 *db,char **errmsg,char *user);//靠靠靠
int read_online_flag(sqlite3 *db,char **errmsg,char *user);//靠靠靠
void write_online_all(sqlite3 *db,char **errmsg,vpChat temp);
int update_passwd(sqlite3 *db,char **errmsg,char *name,char *passwd);
void insert_data_db(sqlite3 *db,char **errmsg,char *time,vpChat temp);
int update_flag(sqlite3 *db,char **errmsg,char *name,int flag);
int delete_user(sqlite3 *db,char **errmsg,char *name);
void read_online_all(sqlite3 *db,char **errmsg,vpChat temp);//靠靠靠靠�
void read_data(sqlite3 *db,char **errmsg,vpChat temp);//靠靠靠靠�
int update_user(sqlite3 *db,char **errmsg,char *name,char *toname);//靠靠
int update_db_data(sqlite3 *db,char **errmsg,char *name,char *toname);//靠靠
