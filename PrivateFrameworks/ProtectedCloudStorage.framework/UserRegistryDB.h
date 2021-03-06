/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
 */

@interface UserRegistryDB : NSObject {
    struct sqlite3_stmt { } * _deleteStatment;
    NSString * _dsid;
    struct sqlite3_stmt { } * _insertMirrorKey;
    struct sqlite3_stmt { } * _insertWatch;
    struct sqlite3_stmt { } * _insertWatchKey;
    NSObject<OS_os_log> * _oslog;
    struct sqlite3_stmt { } * _queryMissingKeys;
    struct sqlite3_stmt { } * _queryWatches;
    struct sqlite3_stmt { } * _recordIDStatment;
    struct sqlite3_stmt { } * _replaceStatment;
    struct sqlite3_stmt { } * _resetCurrentMirrorKey;
    struct sqlite3 { } * _sqliteHandle;
    struct sqlite3_stmt { } * _updateMirrorKey;
    struct sqlite3_stmt { } * _updateWatch;
}

@property struct sqlite3_stmt { }*deleteStatment;
@property (retain) NSString *dsid;
@property struct sqlite3_stmt { }*insertMirrorKey;
@property struct sqlite3_stmt { }*insertWatch;
@property struct sqlite3_stmt { }*insertWatchKey;
@property (retain) NSObject<OS_os_log> *oslog;
@property struct sqlite3_stmt { }*queryMissingKeys;
@property struct sqlite3_stmt { }*queryWatches;
@property struct sqlite3_stmt { }*recordIDStatment;
@property struct sqlite3_stmt { }*replaceStatment;
@property struct sqlite3_stmt { }*resetCurrentMirrorKey;
@property struct sqlite3 { }*sqliteHandle;
@property struct sqlite3_stmt { }*updateMirrorKey;
@property struct sqlite3_stmt { }*updateWatch;

- (void).cxx_destruct;
- (bool)beginExclusiveTransaction;
- (void)dealloc;
- (bool)deleteRecordAll;
- (bool)deleteRecordID:(id)arg1;
- (struct sqlite3_stmt { }*)deleteStatment;
- (id)dsid;
- (bool)endTransaction:(bool)arg1;
- (id)getConfigData:(id)arg1;
- (id)getData:(id)arg1 type:(int)arg2;
- (id)getRecordIDData:(id)arg1;
- (id)initWithDSID:(id)arg1;
- (struct sqlite3_stmt { }*)insertMirrorKey;
- (struct sqlite3_stmt { }*)insertWatch;
- (struct sqlite3_stmt { }*)insertWatchKey;
- (id)missingKeysFromDevice:(id)arg1 type:(int)arg2;
- (id)oslog;
- (bool)prepare:(const char *)arg1 statement:(struct sqlite3_stmt {}**)arg2;
- (struct sqlite3_stmt { }*)queryMissingKeys;
- (struct sqlite3_stmt { }*)queryWatches;
- (struct sqlite3_stmt { }*)recordIDStatment;
- (bool)replaceConfigRecord:(id)arg1 data:(id)arg2;
- (bool)replaceRecord:(id)arg1 type:(int)arg2 data:(id)arg3 publicKey:(id)arg4;
- (bool)replaceRecordID:(id)arg1 data:(id)arg2 publicKey:(id)arg3;
- (struct sqlite3_stmt { }*)replaceStatment;
- (struct sqlite3_stmt { }*)resetCurrentMirrorKey;
- (void)setDeleteStatment:(struct sqlite3_stmt { }*)arg1;
- (void)setDsid:(id)arg1;
- (void)setInsertMirrorKey:(struct sqlite3_stmt { }*)arg1;
- (void)setInsertWatch:(struct sqlite3_stmt { }*)arg1;
- (void)setInsertWatchKey:(struct sqlite3_stmt { }*)arg1;
- (bool)setMirrorKey:(id)arg1 service:(int)arg2 type:(int)arg3 publicIdentity:(id)arg4;
- (void)setOslog:(id)arg1;
- (void)setQueryMissingKeys:(struct sqlite3_stmt { }*)arg1;
- (void)setQueryWatches:(struct sqlite3_stmt { }*)arg1;
- (void)setRecordIDStatment:(struct sqlite3_stmt { }*)arg1;
- (void)setReplaceStatment:(struct sqlite3_stmt { }*)arg1;
- (void)setResetCurrentMirrorKey:(struct sqlite3_stmt { }*)arg1;
- (void)setSqliteHandle:(struct sqlite3 { }*)arg1;
- (void)setUpdateMirrorKey:(struct sqlite3_stmt { }*)arg1;
- (void)setUpdateWatch:(struct sqlite3_stmt { }*)arg1;
- (bool)setUserVersion:(int)arg1;
- (bool)setupDatabase;
- (struct sqlite3 { }*)sqliteHandle;
- (id)syncDevices;
- (bool)syncedKeyToDevice:(id)arg1 type:(int)arg2 device:(id)arg3;
- (struct sqlite3_stmt { }*)updateMirrorKey;
- (bool)updateMirrorKey:(id)arg1 service:(int)arg2 type:(int)arg3 current:(bool)arg4;
- (bool)updateSyncDevice:(id)arg1 seen:(id)arg2 version:(id)arg3;
- (struct sqlite3_stmt { }*)updateWatch;
- (int)userVersion;

@end
