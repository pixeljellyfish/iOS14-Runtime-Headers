/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SABackgroundContextObject.h>

@class NSString;

@interface SAHACurrentHome : AceObject <SABackgroundContextObject>

@property (nonatomic,copy) NSString * currentHomeIdentifier; 
@property (nonatomic,copy) NSString * currentHomeName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)currentHomeWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)currentHome;
-(id)shortDescription;
-(id)encodedClassName;
-(id)groupIdentifier;
-(NSString *)currentHomeName;
-(void)setCurrentHomeName:(NSString *)arg1 ;
-(void)setCurrentHomeIdentifier:(NSString *)arg1 ;
-(NSString *)currentHomeIdentifier;
@end

