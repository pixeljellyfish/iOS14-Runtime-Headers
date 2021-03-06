/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:39 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ATXClientXPCInterface.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue, ATXPredictionContextBuilderProtocol;
@class NSString, NSObject, NSXPCListener, NSMutableDictionary;

@interface ATXServer : NSObject <ATXClientXPCInterface, NSXPCListenerDelegate> {

	NSString* _cacheFileBasePath;
	NSString* _machServiceName;
	NSObject*<OS_dispatch_queue> _queue;
	NSXPCListener* _listener;
	NSMutableDictionary* _cacheFileDescriptors;
	id<ATXPredictionContextBuilderProtocol> _contextBuilder;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)consumerSubTypesToUpdate;
-(void)generateNewAppPredictionsForConsumerSubType:(unsigned char)arg1 intent:(id)arg2 candidateBundleIdentifiers:(id)arg3 candidateIntentTypeIdentifiers:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)updateBlendingLayerForAllConsumerSubTypes;
-(void)updateAppPredictionsWithConsumerSubTypes:(id)arg1 featureCache:(id)arg2 reply:(/*^block*/id)arg3 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)dealloc;
-(id)initWithCacheFileBasePath:(id)arg1 machServiceName:(id)arg2 predictionContextBuilder:(id)arg3 ;
-(void)generateNewAppPredictionsForConsumerSubType:(unsigned char)arg1 intent:(id)arg2 candidateBundleIdentifiers:(id)arg3 candidateIntentTypeIdentifiers:(id)arg4 featureCache:(id)arg5 reply:(/*^block*/id)arg6 ;
-(id)init;
-(void)sendFeedbackForConsumerType:(unsigned long long)arg1 consumerSubType:(unsigned char)arg2 atxResponse:(id)arg3 engagementType:(unsigned long long)arg4 engagedBundleId:(id)arg5 bundleIdsShown:(id)arg6 explicitlyRejectedBundleIds:(id)arg7 reply:(/*^block*/id)arg8 ;
-(id)consumerSubTypesToUpdateWithRefreshRate:(double)arg1 disabledConsumerSubTypes:(id)arg2 shouldOverrideRefreshRateForDisabledConsumerSubTypes:(BOOL)arg3 ;
-(void)sortAppsByLaunches:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)getAppPredictorAssetMappingDescriptionWithReply:(/*^block*/id)arg1 ;
@end

