/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:27 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBSWorkspaceFencing <NSObject>
@required
-(id)requestSystemAnimationFence;
-(BOOL)trackSystemAnimationFence:(id)arg1;
-(void)synchronizeSystemAnimationFencesWithCleanUpBlock:(/*^block*/id)arg1;
-(BOOL)isTrackingAnySystemAnimationFence;

@end

