/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:45 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDictionary;


@protocol EKProtocolObject <NSObject>
@property (nonatomic,readonly) BOOL canBeConvertedToFullObject; 
@property (nonatomic,readonly) BOOL isPartialObject; 
@property (nonatomic,readonly) NSDictionary * preFrozenRelationshipObjects; 
@required
+(id)propertiesUnavailableForPartialObjects;
-(BOOL)isNew;
-(BOOL)isPropertyUnavailable:(id)arg1;
-(BOOL)isFrozen;
-(BOOL)isPartialObject;
-(BOOL)canBeConvertedToFullObject;
-(NSDictionary *)preFrozenRelationshipObjects;

@end

