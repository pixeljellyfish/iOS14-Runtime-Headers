/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:24 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PDSAgent.framework/PDSAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSSet;

@interface PDSCDUser : NSManagedObject

@property (nonatomic,copy) NSString * userID; 
@property (assign,nonatomic) short userType; 
@property (nonatomic,retain) NSSet * registrations; 
+(id)fetchRequest;
+(id)insertIntoManagedObjectContext:(id)arg1 ;
+(id)userFromUser:(id)arg1 insertIntoManagedObjectContext:(id)arg2 ;
+(id)predicateForUserID:(id)arg1 userType:(short)arg2 ;
-(id)user;
@end

