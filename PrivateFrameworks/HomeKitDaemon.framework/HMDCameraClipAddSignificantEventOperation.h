/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:09 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDCameraClipOperation.h>
#import <libobjc.A.dylib/HMBLocalZoneMirrorOutputObserver.h>

@class HMDCameraRecordingSessionSignificantEvent, NSDictionary, NSString;

@interface HMDCameraClipAddSignificantEventOperation : HMDCameraClipOperation <HMBLocalZoneMirrorOutputObserver> {

	HMDCameraRecordingSessionSignificantEvent* _significantEvent;
	NSDictionary* _homePresenceByPairingIdentity;

}

@property (copy,readonly) HMDCameraRecordingSessionSignificantEvent * significantEvent;              //@synthesize significantEvent=_significantEvent - In the implementation block
@property (readonly) NSDictionary * homePresenceByPairingIdentity;                                   //@synthesize homePresenceByPairingIdentity=_homePresenceByPairingIdentity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id)attributeDescriptions;
-(HMDCameraRecordingSessionSignificantEvent *)significantEvent;
-(void)main;
-(void)localZone:(id)arg1 willPerformMirrorOutputForModel:(id)arg2 ;
-(NSDictionary *)homePresenceByPairingIdentity;
-(id)modelsToUpdate;
-(id)initWithClipModelID:(id)arg1 localZone:(id)arg2 significantEvent:(id)arg3 homePresenceByPairingIdentity:(id)arg4 dataSource:(id)arg5 ;
-(id)initWithClipModelID:(id)arg1 localZone:(id)arg2 significantEvent:(id)arg3 homePresenceByPairingIdentity:(id)arg4 ;
@end
