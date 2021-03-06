/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:34 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKOverlayRoomViewControllerIntegratedContext.h>

@protocol HKOverlayRoomViewControllerIntegratedContextDelegate;
@class HKInteractiveChartOverlayPredicate, NSDictionary;

@interface HKOverlayRoomViewControllerDistributionContext : HKOverlayRoomViewControllerIntegratedContext {

	long long _distributionStyle;
	id<HKOverlayRoomViewControllerIntegratedContextDelegate> _optionalDelegate;
	long long _options;
	HKInteractiveChartOverlayPredicate* _namedPredicate;
	NSDictionary* _styleToMetricColors;

}

@property (assign,nonatomic) long long distributionStyle;                                                                   //@synthesize distributionStyle=_distributionStyle - In the implementation block
@property (assign,nonatomic,__weak) id<HKOverlayRoomViewControllerIntegratedContextDelegate> optionalDelegate;              //@synthesize optionalDelegate=_optionalDelegate - In the implementation block
@property (assign,nonatomic) long long options;                                                                             //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) HKInteractiveChartOverlayPredicate * namedPredicate;                                           //@synthesize namedPredicate=_namedPredicate - In the implementation block
@property (nonatomic,retain) NSDictionary * styleToMetricColors;                                                            //@synthesize styleToMetricColors=_styleToMetricColors - In the implementation block
-(void)setOptions:(long long)arg1 ;
-(long long)options;
-(BOOL)isEqual:(id)arg1 ;
-(long long)distributionStyle;
-(id)_representativeDisplayTypeForStyle:(long long)arg1 ;
-(id)valueString:(id)arg1 applicationItems:(id)arg2 representativeDisplayType:(id)arg3 ;
-(id<HKOverlayRoomViewControllerIntegratedContextDelegate>)optionalDelegate;
-(id)unitString:(id)arg1 applicationItems:(id)arg2 representativeDisplayType:(id)arg3 ;
-(id)representativeDisplayType;
-(id)_computeTitleFromStyleAndPredicate;
-(id)_selectedMetricColorsForDistributionStyle:(long long)arg1 ;
-(HKInteractiveChartOverlayPredicate *)namedPredicate;
-(NSDictionary *)styleToMetricColors;
-(id)initWithStyle:(long long)arg1 namedPredicate:(id)arg2 overlayChartController:(id)arg3 applicationItems:(id)arg4 optionalDelegate:(id)arg5 options:(long long)arg6 mode:(long long)arg7 ;
-(id)buildContextItemWithValue:(id)arg1 unit:(id)arg2 valueContext:(id)arg3 forTimeScope:(long long)arg4 ;
-(id)buildOverlayDisplayTypeForTimeScope:(long long)arg1 ;
-(void)fetchCachedDataForTimeScope:(long long)arg1 dateInterval:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setDistributionStyle:(long long)arg1 ;
-(void)setOptionalDelegate:(id<HKOverlayRoomViewControllerIntegratedContextDelegate>)arg1 ;
-(void)setNamedPredicate:(HKInteractiveChartOverlayPredicate *)arg1 ;
-(void)setStyleToMetricColors:(NSDictionary *)arg1 ;
@end

