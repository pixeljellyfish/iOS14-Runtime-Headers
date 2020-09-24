/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:42 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSSQLIndex.h>

@class NSString;

@interface NSSQLRTreeIndex : NSSQLIndex {

	NSString* _tableName;

}

@property (nonatomic,retain,readonly) NSString * tableName;              //@synthesize tableName=_tableName - In the implementation block
-(NSString *)tableName;
-(id)dropStatementsForStore:(id)arg1 ;
-(void)dealloc;
-(id)bulkUpdateStatementsForStore:(id)arg1 ;
-(id)generateStatementsForStore:(id)arg1 ;
-(id)initForIndexDescription:(id)arg1 sqlEntity:(id)arg2 ;
-(void)generateSQLStrings;
@end
