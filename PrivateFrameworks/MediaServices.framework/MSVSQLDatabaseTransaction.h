/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:10 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaServices/MediaServices-Structs.h>
#import <libobjc.A.dylib/MSVSQLExecutable.h>

@class NSString, MSVSQLDatabase;

@interface MSVSQLDatabaseTransaction : NSObject <MSVSQLExecutable> {

	BOOL _invalid;
	NSString* _name;
	MSVSQLDatabase* _database;
	sqlite3Ref _databaseHandle;

}

@property (nonatomic,copy,readonly) NSString * name;                //@synthesize name=_name - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)commit;
-(void)dealloc;
-(id)createSavepoint;
-(BOOL)rollbackToSavepoint:(id)arg1 ;
-(BOOL)_releaseSavepoint:(id)arg1 ;
-(BOOL)executeStatement:(id)arg1 error:(id*)arg2 ;
-(BOOL)rollback;
-(NSString *)name;
-(id)statementWithString:(id)arg1 error:(id*)arg2 ;
-(id)resultsForStatement:(id)arg1 ;
-(NSString *)description;
@end

