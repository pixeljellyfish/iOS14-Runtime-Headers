/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:09 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@interface HMDAnalyticsPresenceEventData : HMFObject {

	int _presenceEventGranularity;
	int _presenceEventType;

}

@property (assign,nonatomic) int presenceEventGranularity;              //@synthesize presenceEventGranularity=_presenceEventGranularity - In the implementation block
@property (assign,nonatomic) int presenceEventType;                     //@synthesize presenceEventType=_presenceEventType - In the implementation block
-(int)presenceEventType;
-(void)setPresenceEventType:(int)arg1 ;
-(int)presenceEventGranularity;
-(void)setPresenceEventGranularity:(int)arg1 ;
@end

