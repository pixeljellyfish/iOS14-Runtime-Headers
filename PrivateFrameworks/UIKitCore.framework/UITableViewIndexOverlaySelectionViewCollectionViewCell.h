/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:40 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIButton, NSString, UILabel;

@interface UITableViewIndexOverlaySelectionViewCollectionViewCell : UICollectionViewCell {

	UIButton* _button;
	double _rightMargin;
	BOOL _rightMarginAdjusted;
	id _tapTarget;
	SEL _tapAction;

}

@property (nonatomic,copy) NSString * text; 
@property (assign,nonatomic) long long textAlignment; 
@property (assign,nonatomic) double rightMargin; 
@property (readonly) UILabel * label; 
@property (readonly) UIButton * button;                            //@synthesize button=_button - In the implementation block
-(void)setTextAlignment:(long long)arg1 ;
-(long long)textAlignment;
-(void)tintColorDidChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)text;
-(UIButton *)button;
-(void)setText:(NSString *)arg1 ;
-(void)layoutSubviews;
-(double)rightMargin;
-(UILabel *)label;
-(void)setRightMargin:(double)arg1 ;
-(void)applyLayoutAttributes:(id)arg1 ;
@end

