/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SASettingEntity.h>

@class NSString;

@interface SASettingNoiseManagementEntity : SASettingEntity

@property (nonatomic,copy) NSString * previousValue; 
@property (nonatomic,copy) NSString * value; 
+(id)noiseManagementEntity;
+(id)noiseManagementEntityWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(id)groupIdentifier;
-(void)setPreviousValue:(NSString *)arg1 ;
-(void)setValue:(NSString *)arg1 ;
-(NSString *)value;
-(NSString *)previousValue;
@end

