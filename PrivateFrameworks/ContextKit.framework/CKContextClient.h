/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:14 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ContextKit.framework/ContextKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CKContextServiceUpdateNotifications.h>

@protocol OS_dispatch_semaphore;
@class NSSet, NSString, NSMutableArray, NSObject, CKContextSemaphore;

@interface CKContextClient : NSObject <CKContextServiceUpdateNotifications> {

	NSSet* _capabilities;
	NSString* _indexVersionId;
	NSMutableArray* _updateHandlers;
	NSObject*<OS_dispatch_semaphore> _sema_capabilities;
	CKContextSemaphore* _serviceSemaphore;
	unsigned long long _defaultRequestType;

}

@property (nonatomic,readonly) unsigned long long defaultRequestType;              //@synthesize defaultRequestType=_defaultRequestType - In the implementation block
@property (nonatomic,readonly) NSSet * capabilities; 
+(id)new;
+(void)initialize;
+(double)timeIntervalBetweenMachTime:(unsigned long long)arg1 andMachTime:(unsigned long long)arg2 ;
+(BOOL)isLikelyUnsolicitedUserInteraction;
+(void)_observeApplicationStateNotifications;
+(id)clientWithDefaultRequestType:(unsigned long long)arg1 ;
-(unsigned long long)defaultRequestType;
-(long long)tryAcquireServiceSemaphore;
-(NSSet *)capabilities;
-(id)retrieveCapabilites;
-(void)ensureFullyInitialized;
-(void)ancestorsForTopics:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(id)init;
-(void)capabilitiesWithReply:(/*^block*/id)arg1 ;
-(void)workWithServiceSemaphore:(/*^block*/id)arg1 ;
-(id)initWithDefaultRequestType:(unsigned long long)arg1 ;
-(void)_updateCachedCapabilites;
-(void)didReceiveCKContextServiceUpdateNotification;
-(id)indexVersionId;
-(void)registerConfigurationUpdateHandler:(/*^block*/id)arg1 ;
-(id)newRequest;
@end

