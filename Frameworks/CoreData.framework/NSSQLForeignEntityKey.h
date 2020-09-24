/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSSQLColumn.h>

@class NSString, NSSQLForeignKey, NSNumber;

@interface NSSQLForeignEntityKey : NSSQLColumn {

	NSString* _name;
	NSSQLForeignKey* _foreignKey;
	NSNumber* _columnValue;

}
-(void)_setName:(id)arg1 ;
-(void)copyValuesForReadOnlyFetch:(id)arg1 ;
-(id)foreignKey;
-(id)initWithEntity:(id)arg1 propertyDescription:(id)arg2 ;
-(void)dealloc;
-(id)initForReadOnlyFetchingOfEntity:(id)arg1 toOneRelationship:(id)arg2 ;
-(void)setFKForReadOnlyFetch:(id)arg1 ;
-(id)toOneRelationship;
-(void)_setColumnValue:(id)arg1 ;
-(id)columnValue;
-(id)initWithEntity:(id)arg1 foreignKey:(id)arg2 ;
-(id)name;
@end
