/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:35 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIStackView.h>

@class HKLegendEntry, UILabel, _HKLegendDot, UIImageView;

@interface _HKLegendEntryView : UIStackView {

	HKLegendEntry* _currentLegendEntry;
	UILabel* _legendLabel;
	_HKLegendDot* _legendDot;
	UIImageView* _legendIcon;
	HKLegendEntry* _legendEntry;

}

@property (nonatomic,retain) HKLegendEntry * legendEntry;              //@synthesize legendEntry=_legendEntry - In the implementation block
-(void)setLegendEntry:(HKLegendEntry *)arg1 ;
-(id)initWithLegendEntry:(id)arg1 ;
-(HKLegendEntry *)legendEntry;
@end

