/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:49 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <StoreServices/StoreServices-Structs.h>
@class SSSQLiteDatabase, SSSQLiteQueryDescriptor;

@interface SSSQLiteQuery : NSObject {

	SSSQLiteDatabase* _database;
	SSSQLiteQueryDescriptor* _descriptor;

}

@property (readonly) SSSQLiteDatabase * database; 
@property (readonly) SSSQLiteQueryDescriptor * queryDescriptor; 
@property (readonly) long long countOfEntities; 
-(SSSQLiteDatabase *)database;
-(long long)countOfEntities;
-(void)bindToSelectStatement:(sqlite3_stmtRef)arg1 bindingIndex:(inout int*)arg2 ;
-(void)dealloc;
-(void)enumeratePersistentIDsAndProperties:(const id*)arg1 count:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)copySelectSQLWithProperties:(const id*)arg1 count:(unsigned long long)arg2 ;
-(id)_newSelectSQLWithProperties:(const id*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)createTemporaryTableWithName:(id)arg1 properties:(const id*)arg2 count:(unsigned long long)arg3 ;
-(void)enumerateMemoryEntitiesWithProperties:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)copyEntityIdentifiers;
-(BOOL)deleteAllEntities;
-(void)enumerateMemoryEntitiesUsingBlock:(/*^block*/id)arg1 ;
-(SSSQLiteQueryDescriptor *)queryDescriptor;
-(id)initWithDatabase:(id)arg1 descriptor:(id)arg2 ;
-(void)enumeratePersistentIDsUsingBlock:(/*^block*/id)arg1 ;
@end
