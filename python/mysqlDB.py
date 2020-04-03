import mysql.connector
from mysql.connector import errorcode

class mysqlDb:
    def __init__(self, user, host, passwd, database):
        self.user = user
        self.host = host
        self.passwd = passwd
        self.database = database

    def connectMysql(self):
        try:
            cnx = mysql.connector.connect(user = self.user,
                                            host = self.host,
                                            password = self.passwd,
                                            #database = self.database,不指定数据库名称
                                            raise_on_warnings = True,
                                            )                 
            return cnx
        except mysql.connector.Error as err:
            if err.errno == errorcode.ER_ACCESS_DENIED_ERROR:
                print("Somethin is wrong with your user name or password")
            elif err.errno == errorcode.ER_BAD_DB_ERROR:
                print("Database does not exist")
            else:
                print(err)

        else:
            return None
    
    def connectDatabase(self):
        try:
            cnx = mysql.connector.connect(user = self.user,
                                            host = self.host,
                                            password = self.passwd,
                                            database = self.database,
                                            raise_on_warnings = True,
                                            )
            return cnx
        except mysql.connector.Error as err:
            if err.errno == errorcode.ER_ACCESS_DENIED_ERROR:
                print("Somethin is wrong with your user name or password")
            elif err.errno == errorcode.ER_BAD_DB_ERROR:
                print("Database does not exist")
            else:
                print(err)

        else:
            return None

    def createDatabase(self):
        cnx = self.connectMysql()
        cursor = cnx.cursor()

        #sql = "create database {} default character set 'utf-8'".format(self.database)
        cursor.execute("CREATE DATABASE {} DEFAULT CHARACTER SET 'UTF8MB4'".format(self.database))
        cursor.close()
        cnx.close()


    def createTable(self, sql):
        pass

    def insert(self, sql, *params):
        pass

    def update(self, sql, *params):
        pass

    def delete(self, sql, *params):
        pass


