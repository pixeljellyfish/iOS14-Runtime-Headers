/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:20 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityPlatformTranslation.framework/AccessibilityPlatformTranslation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityPlatformTranslation/AccessibilityPlatformTranslation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSObjectNSCopyingNSSecureCoding;
@class AXPTranslationObject, NSArray;

@interface AXPTranslatorResponse : NSObject <NSCopying, NSSecureCoding> {

	id<NSObject><NSCopying><NSSecureCoding> _resultData;
	unsigned long long _attribute;
	unsigned long long _notification;
	AXPTranslationObject* _associatedNotificationObject;
	unsigned long long _error;

}

@property (nonatomic,retain) id<NSObject><NSCopying><NSSecureCoding> resultData;               //@synthesize resultData=_resultData - In the implementation block
@property (assign,nonatomic) unsigned long long attribute;                                     //@synthesize attribute=_attribute - In the implementation block
@property (assign,nonatomic) unsigned long long notification;                                  //@synthesize notification=_notification - In the implementation block
@property (nonatomic,retain) AXPTranslationObject * associatedNotificationObject;              //@synthesize associatedNotificationObject=_associatedNotificationObject - In the implementation block
@property (assign,nonatomic) unsigned long long error;                                         //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) AXPTranslationObject * translationResponse; 
@property (nonatomic,readonly) BOOL boolResponse; 
@property (nonatomic,readonly) NSArray * translationsResponse; 
+(BOOL)supportsSecureCoding;
+(id)emptyResponse;
+(id)allowedDecodableClasses;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<NSObject><NSCopying><NSSecureCoding>)resultData;
-(unsigned long long)notification;
-(unsigned long long)error;
-(void)setError:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setNotification:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setResultData:(id<NSObject><NSCopying><NSSecureCoding>)arg1 ;
-(void)setAttribute:(unsigned long long)arg1 ;
-(unsigned long long)attribute;
-(id)description;
-(AXPTranslationObject *)translationResponse;
-(AXPTranslationObject *)associatedNotificationObject;
-(void)setAssociatedNotificationObject:(AXPTranslationObject *)arg1 ;
-(NSArray *)translationsResponse;
-(BOOL)boolResponse;
@end

