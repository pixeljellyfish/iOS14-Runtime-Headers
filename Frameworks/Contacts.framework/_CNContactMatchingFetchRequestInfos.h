/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:39 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSPredicate, NSArray;

@interface _CNContactMatchingFetchRequestInfos : NSObject {

	NSPredicate* _predicate;
	NSArray* _properties;

}

@property (nonatomic,retain) NSPredicate * predicate;              //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,retain) NSArray * properties;                 //@synthesize properties=_properties - In the implementation block
+(id)fetchRequestInfoForPredicate:(id)arg1 properties:(id)arg2 ;
-(void)setProperties:(NSArray *)arg1 ;
-(NSArray *)properties;
-(NSPredicate *)predicate;
-(void)setPredicate:(NSPredicate *)arg1 ;
@end
