/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:14 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, NSMutableDictionary, NSString, NSDictionary, UIColor, _UIBadgeVisualStyle;

@interface _UIBadgeView : UIView {

	UILabel* _label;
	NSMutableDictionary* _mergedTextAttributes;
	NSString* _text;
	NSDictionary* _textAttributes;
	UIColor* _badgeColor;
	_UIBadgeVisualStyle* _style;
	UIOffset _textOffset;

}

@property (nonatomic,copy) NSString * text;                            //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSDictionary * textAttributes;              //@synthesize textAttributes=_textAttributes - In the implementation block
@property (nonatomic,copy) UIColor * badgeColor;                       //@synthesize badgeColor=_badgeColor - In the implementation block
@property (assign,nonatomic) UIOffset textOffset;                      //@synthesize textOffset=_textOffset - In the implementation block
@property (nonatomic,retain) _UIBadgeVisualStyle * style;              //@synthesize style=_style - In the implementation block
-(void)setTextAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)textAttributes;
-(NSString *)text;
-(_UIBadgeVisualStyle *)style;
-(void)setText:(NSString *)arg1 ;
-(void)layoutSubviews;
-(UIOffset)textOffset;
-(UIColor *)badgeColor;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setTextOffset:(UIOffset)arg1 ;
-(void)_setUpLabelIfNecessary;
-(void)setBadgeColor:(UIColor *)arg1 ;
-(void)_applyTextToLabel;
-(void)setStyle:(_UIBadgeVisualStyle *)arg1 ;
-(id)initWithText:(id)arg1 ;
@end
