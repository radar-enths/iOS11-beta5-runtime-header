/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKKnowledgeStorage : NSObject <_DKCoreDataStorageDelegate, _DKKnowledgeDeleting, _DKKnowledgeEventStreamDeleting, _DKKnowledgeQuerying, _DKKnowledgeSaving> {
    NSObject<OS_dispatch_queue> * _defaultResponseQueue;
    NSString * _directory;
    NSObject<OS_dispatch_queue> * _executionQueue;
    unsigned long long  _insertsAndDeletesObserverCount;
    bool  _localOnly;
    NSURL * _modelURL;
    _DKCoreDataStorage * _storage;
    _DKCoreDataStorage * _syncStorage;
}

@property (nonatomic, readonly) unsigned long long finalMigrationVersion;
@property (nonatomic, readonly) bool localOnly;
@property (nonatomic, readonly) _DKCoreDataStorage *storage;
@property (nonatomic, readonly) _DKCoreDataStorage *syncStorage;

+ (id)storageWithDirectory:(id)arg1 readOnly:(bool)arg2;
+ (id)storageWithDirectory:(id)arg1 readOnly:(bool)arg2 localOnly:(bool)arg3;
+ (id)storeWithDirectory:(id)arg1 readOnly:(bool)arg2;

- (void).cxx_destruct;
- (void)_databaseChangedWithNotification:(id)arg1;
- (id)_requestForChangeSinceDate:(id)arg1;
- (void)_sendEventsNotificationName:(id)arg1 withObjects:(id)arg2;
- (void)_sendInsertEventsNotificationWithObjects:(id)arg1;
- (void)_sendInsertsAndDeletesNotificationWithNotification:(id)arg1;
- (void)closeStorage;
- (void)closeSyncStorage;
- (bool)copyValueToManagedObject:(id)arg1;
- (bool)coreDataStorage:(id)arg1 didAutoMigratePersistentStore:(id)arg2 toManagedObjectModel:(id)arg3 havingVersion:(unsigned long long)arg4 error:(id*)arg5;
- (id)coreDataStorage:(id)arg1 needsManagedObjectModelNameForVersion:(unsigned long long)arg2;
- (bool)coreDataStorage:(id)arg1 shouldCallDelegateAfterAutoMigrationToManagedObjectModelHavingVersion:(unsigned long long)arg2;
- (void)decrementInsertsAndDeletesObserverCount;
- (unsigned long long)deleteAllEventsInEventStream:(id)arg1 error:(id*)arg2;
- (unsigned long long)deleteAllEventsMatchingPredicate:(id)arg1 error:(id*)arg2;
- (unsigned long long)deleteEventsMatchingPredicate:(id)arg1 limit:(unsigned long long)arg2;
- (unsigned long long)deleteEventsStartingEarlierThanDate:(id)arg1 limit:(unsigned long long)arg2;
- (unsigned long long)deleteHistogram:(id)arg1;
- (bool)deleteObjects:(id)arg1 error:(id*)arg2;
- (void)deleteObjects:(id)arg1 responseQueue:(id)arg2 withCompletion:(id /* block */)arg3;
- (unsigned long long)deleteObjectsInEventStream:(id)arg1 ifNeededToLimitEventCount:(unsigned long long)arg2 batchLimit:(unsigned long long)arg3;
- (unsigned long long)deleteObjectsInEventStreams:(id)arg1 olderThanDate:(id)arg2 limit:(unsigned long long)arg3;
- (unsigned long long)deleteObjectsOlderThanDate:(id)arg1 limit:(unsigned long long)arg2;
- (unsigned long long)deleteOldObjectsIfNeededToLimitTotalNumber:(unsigned long long)arg1 limit:(unsigned long long)arg2;
- (unsigned long long)deleteOrphanedEntities;
- (bool)deleteStorage;
- (bool)deleteSyncStorage;
- (id)errorForException:(id)arg1;
- (unsigned long long)eventCount;
- (id)eventCountPerStreamName;
- (id)executeQuery:(id)arg1 error:(id*)arg2;
- (void)executeQuery:(id)arg1 responseQueue:(id)arg2;
- (void)executeQuery:(id)arg1 responseQueue:(id)arg2 withCompletion:(id /* block */)arg3;
- (id)fetchLocalChangesSinceDate:(id)arg1 error:(id*)arg2;
- (id)fetchSyncChangesSinceDate:(id)arg1 error:(id*)arg2;
- (unsigned long long)finalMigrationVersion;
- (void)handleNilArrayError:(id /* block */)arg1 queue:(id)arg2;
- (void)incrementInsertsAndDeletesObserverCount;
- (id)initWithDirectory:(id)arg1 readOnly:(bool)arg2 localOnly:(bool)arg3;
- (id)lastChangeSetWithEntityName:(id)arg1 error:(id*)arg2;
- (unsigned long long)lastSequenceNumberForChangeSetWithEntityName:(id)arg1 error:(id*)arg2;
- (bool)localOnly;
- (id)removeBadObjects:(id)arg1;
- (bool)saveChangeSetsForSync:(id)arg1 error:(id*)arg2;
- (void)saveHistogram:(id)arg1 responseQueue:(id)arg2 withCompletion:(id /* block */)arg3;
- (bool)saveObjects:(id)arg1 error:(id*)arg2;
- (void)saveObjects:(id)arg1 responseQueue:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)startSyncDownFromCloudWithResponseQueue:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)startSyncUpToCloudWithResponseQueue:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)storage;
- (id)syncStorage;
- (id)syncStorageAssertion;
- (id)syncStorageIfAvailable;
- (bool)updateDataAfterAutoMigrationToFinalVersionInPersistentStore:(id)arg1 error:(id*)arg2;
- (void)updateToFinalMetadata:(id)arg1;

@end
