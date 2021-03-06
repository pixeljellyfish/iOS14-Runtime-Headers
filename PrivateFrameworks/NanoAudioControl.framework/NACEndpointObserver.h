/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, _NACAVRoutingDiscoverySession;

@interface NACEndpointObserver : NSObject {

	NSObject*<OS_dispatch_queue> _serialQueue;
	_NACAVRoutingDiscoverySession* _nacDiscoverySession;

}
+(id)sharedObserver;
-(id)init;
-(void)fetchRouteForOriginIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)invalidateDiscoverySession;
@end

