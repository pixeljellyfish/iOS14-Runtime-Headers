/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:41 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSIncrementalStore.h>
#import <libobjc.A.dylib/NSSQLModelProvider.h>
#import <libobjc.A.dylib/NSCoreDataKeyedArchivingDelegate.h>

@class NSDictionary, NSGenerationalRowCache, NSString, NSXPCStoreConnectionManager, NSSQLModel, NSSQLCore, NSXPCStoreNotificationObserver;

@interface NSXPCStore : NSIncrementalStore <NSSQLModelProvider, NSCoreDataKeyedArchivingDelegate> {

	NSDictionary* _metadata;
	NSGenerationalRowCache* _cache;
	NSString* _fileBackedFuturesDirectory;
	NSXPCStoreConnectionManager* _connectionManager;
	NSSQLModel* _model;
	NSSQLCore* _core;
	NSString* _sanityCheckToken;
	NSXPCStoreNotificationObserver* _observer;
	NSString* _remoteStoreChangedNotificationName;
	os_unfair_lock_s _stateLock;

}

@property (copy,readonly) NSString * remoteStoreChangedNotificationName;              //@synthesize remoteStoreChangedNotificationName=_remoteStoreChangedNotificationName - In the implementation block
+(BOOL)_allowCoreDataFutures;
+(void)initialize;
+(id)archiver:(id)arg1 willEncodeObject:(id)arg2 ;
+(id)replacementObjectForXPCConnection:(id)arg1 encoder:(id)arg2 object:(id)arg3 ;
+(void)setDebugDefault:(int)arg1 ;
+(int)debugDefault;
+(BOOL)_isOnExtendedTimeout;
-(id)initWithPersistentStoreCoordinator:(id)arg1 configurationName:(id)arg2 URL:(id)arg3 options:(id)arg4 ;
-(id)ancillaryModels;
-(id)entityForEntityDescription:(id)arg1 ;
-(id)_storeInfoForEntityDescription:(id)arg1 ;
-(void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1 generation:(id)arg2 ;
-(Class)_objectIDClass;
-(BOOL)_allowCoreDataFutures;
-(id)fileBackedFuturesDirectory;
-(id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(id)currentQueryGeneration;
-(id)objectIDFactoryForEntity:(id)arg1 ;
-(id)ancillarySQLModels;
-(BOOL)load:(id*)arg1 ;
-(BOOL)supportsConcurrentRequestHandling;
-(void)willRemoveFromPersistentStoreCoordinator:(id)arg1 ;
-(id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4 ;
-(id)newObjectIDForEntity:(id)arg1 pk:(long long)arg2 ;
-(id)connectionManager;
-(void)disconnect;
-(void)freeQueryGenerationWithIdentifier:(id)arg1 ;
-(id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)loadMetadata:(id*)arg1 ;
-(id)currentChangeToken;
-(id)sqlCore;
-(id)_newObjectIDForEntityDescription:(id)arg1 pk:(long long)arg2 ;
-(id)_rawMetadata__;
-(id)obtainPermanentIDsForObjects:(id)arg1 error:(id*)arg2 ;
-(Class)objectIDFactoryForSQLEntity:(id)arg1 ;
-(void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1 generation:(id)arg2 ;
-(id)reopenQueryGenerationWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)supportsGenerationalQuerying;
-(id)replacementObjectForXPCConnection:(id)arg1 encoder:(id)arg2 object:(id)arg3 ;
-(void)cacheFetchedRows:(id)arg1 forManagedObjects:(id)arg2 generation:(id)arg3 ;
-(void)setMetadata:(id)arg1 ;
-(void)_setMetadata:(id)arg1 includeVersioning:(BOOL)arg2 ;
-(void)_freeQueryGenerationWithIdentifier:(id)arg1 ;
-(void)_clearCachedRowForObjectWithID:(id)arg1 generation:(id)arg2 ;
-(id)metadata;
-(void)decodePrefetchResult:(id)arg1 forSources:(id)arg2 context:(id)arg3 ;
-(void)setIdentifier:(id)arg1 ;
-(void)dealloc;
-(void)decodePrefetchArray:(id)arg1 forSources:(id)arg2 context:(id)arg3 ;
-(id)_cachedRowForRelationship:(id)arg1 onObjectWithID:(id)arg2 generation:(id)arg3 ;
-(id)decodeResults:(id)arg1 forFetch:(id)arg2 context:(id)arg3 error:(id*)arg4 ;
-(id)model;
-(id)decodeResults:(id)arg1 forFaultOfObjectWithID:(id)arg2 context:(id)arg3 error:(id*)arg4 ;
-(id)_sanityCheckToken;
-(id)decodeValue:(id)arg1 forRelationship:(id)arg2 onSource:(id)arg3 inContext:(id)arg4 error:(id*)arg5 ;
-(void)setURL:(id)arg1 ;
-(id)unarchiver:(id)arg1 didDecodeObject:(id)arg2 ;
-(void)setSQLCore:(id)arg1 ;
-(void)setupRemoteStoreObserver;
-(id)type;
-(id)executeBatchInsertRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(id)executeSaveRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(id)executeBatchDeleteRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(id)sendMessage:(id)arg1 fromContext:(id)arg2 interrupts:(unsigned long long*)arg3 error:(id*)arg4 ;
-(id)executePersistentHistoryRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(void)cacheContents:(id)arg1 ofRelationship:(id)arg2 onObjectWithID:(id)arg3 generation:(id)arg4 ;
-(void)_commitChangesForRequestContext:(id)arg1 ;
-(id)executeBatchUpdateRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(NSString *)remoteStoreChangedNotificationName;
-(id)newForeignKeyID:(long long)arg1 entity:(id)arg2 ;
-(id)_cachedRowForObjectWithID:(id)arg1 generation:(id)arg2 ;
-(id)_executeSaveRequestForContext:(id)arg1 error:(id*)arg2 ;
-(id)_createAndCacheRowForObjectWithID:(id)arg1 propertyValues:(id)arg2 inContext:(id)arg3 error:(id*)arg4 ;
-(id)serviceName;
-(void)cacheContents:(id)arg1 ofRelationship:(id)arg2 onObjectWithID:(id)arg3 withTimestamp:(double)arg4 generation:(id)arg5 ;
-(id)executeFetchRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(void)_setSanityCheckToken:(id)arg1 ;
@end
