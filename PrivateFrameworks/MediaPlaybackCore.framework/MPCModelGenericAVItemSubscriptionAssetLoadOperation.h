/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:07 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAsyncOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, MPCModelGenericAVItemAssetLoadProperties, ICStoreRequestContext, ICMusicSubscriptionLeaseSession;

@interface MPCModelGenericAVItemSubscriptionAssetLoadOperation : MPAsyncOperation {

	NSObject*<OS_dispatch_queue> _accessQueue;
	/*^block*/id _cancellationHandler;
	MPCModelGenericAVItemAssetLoadProperties* _assetLoadProperties;
	long long _operationType;
	ICStoreRequestContext* _requestContext;
	/*^block*/id _responseHandler;
	ICMusicSubscriptionLeaseSession* _subscriptionLeaseSession;

}

@property (nonatomic,retain) MPCModelGenericAVItemAssetLoadProperties * assetLoadProperties;              //@synthesize assetLoadProperties=_assetLoadProperties - In the implementation block
@property (assign,nonatomic) long long operationType;                                                     //@synthesize operationType=_operationType - In the implementation block
@property (nonatomic,copy) ICStoreRequestContext * requestContext;                                        //@synthesize requestContext=_requestContext - In the implementation block
@property (nonatomic,copy) id responseHandler;                                                            //@synthesize responseHandler=_responseHandler - In the implementation block
@property (nonatomic,retain) ICMusicSubscriptionLeaseSession * subscriptionLeaseSession;                  //@synthesize subscriptionLeaseSession=_subscriptionLeaseSession - In the implementation block
-(ICStoreRequestContext *)requestContext;
-(void)cancel;
-(/*^block*/id)cancellationHandler;
-(id)responseHandler;
-(long long)operationType;
-(void)setResponseHandler:(id)arg1 ;
-(void)setOperationType:(long long)arg1 ;
-(id)init;
-(void)setRequestContext:(ICStoreRequestContext *)arg1 ;
-(void)setCancellationHandler:(/*^block*/id)arg1 ;
-(id)description;
-(void)execute;
-(void)setAssetLoadProperties:(MPCModelGenericAVItemAssetLoadProperties *)arg1 ;
-(void)setSubscriptionLeaseSession:(ICMusicSubscriptionLeaseSession *)arg1 ;
-(MPCModelGenericAVItemAssetLoadProperties *)assetLoadProperties;
-(ICMusicSubscriptionLeaseSession *)subscriptionLeaseSession;
-(id)_handlePlaybackResponse:(id)arg1 withPlaybackCacheRequest:(id)arg2 error:(id*)arg3 ;
@end
