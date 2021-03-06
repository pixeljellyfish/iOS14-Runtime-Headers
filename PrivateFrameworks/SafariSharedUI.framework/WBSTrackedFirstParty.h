/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:40 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariSharedUI/WBSTrackingCapableFirstParty.h>

@class NSArray;

@interface WBSTrackedFirstParty : WBSTrackingCapableFirstParty {

	NSArray* _trackers;

}

@property (nonatomic,copy) NSArray * trackers;              //@synthesize trackers=_trackers - In the implementation block
-(NSArray *)trackers;
-(id)initWithDomain:(id)arg1 ;
-(id)initWithDomain:(id)arg1 trackers:(id)arg2 ;
-(void)setTrackers:(NSArray *)arg1 ;
@end

