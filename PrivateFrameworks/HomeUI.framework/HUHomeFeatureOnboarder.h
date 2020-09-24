/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:27 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUFeatureOnboarder.h>

@class HMHome;

@interface HUHomeFeatureOnboarder : HUFeatureOnboarder {

	HMHome* _home;

}

@property (nonatomic,retain) HMHome * home;              //@synthesize home=_home - In the implementation block
-(id)_subclass_buildAllFlowGroupsFromFeatureGroups:(id)arg1 usageOptions:(id)arg2 ;
-(id)getPostProcessingFlowsForResults:(id)arg1 ;
-(id)initWithFeatures:(id)arg1 home:(id)arg2 usageOptions:(id)arg3 ;
-(id)initWithGroupedFeatures:(id)arg1 home:(id)arg2 usageOptions:(id)arg3 ;
-(void)setHome:(HMHome *)arg1 ;
-(HMHome *)home;
@end
