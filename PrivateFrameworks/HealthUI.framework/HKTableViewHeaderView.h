/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel;

@interface HKTableViewHeaderView : UIView {

	UILabel* _label;
	double _preferredMaxLayoutWidth;
	UIEdgeInsets _contentInsets;

}

@property (nonatomic,readonly) UILabel * label;                           //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                  //@synthesize contentInsets=_contentInsets - In the implementation block
@property (assign,nonatomic) double preferredMaxLayoutWidth;              //@synthesize preferredMaxLayoutWidth=_preferredMaxLayoutWidth - In the implementation block
-(CGSize)intrinsicContentSize;
-(UIEdgeInsets)contentInsets;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(void)layoutSubviews;
-(id)init;
-(double)preferredMaxLayoutWidth;
-(void)updateFont;
-(void)setPreferredMaxLayoutWidth:(double)arg1 ;
-(UILabel *)label;
@end

