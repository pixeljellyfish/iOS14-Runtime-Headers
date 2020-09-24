/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:39 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol HKNumberFormatter;
@class UIColor, UIFont;

@interface HKAxisLabelStyle : NSObject <NSCopying> {

	UIColor* _textColor;
	UIFont* _font;
	long long _horizontalAlignment;
	long long _verticalAlignment;
	id<HKNumberFormatter> _numberFormatter;

}

@property (nonatomic,copy) UIColor * textColor;                                  //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) UIFont * font;                                      //@synthesize font=_font - In the implementation block
@property (assign,nonatomic) long long horizontalAlignment;                      //@synthesize horizontalAlignment=_horizontalAlignment - In the implementation block
@property (assign,nonatomic) long long verticalAlignment;                        //@synthesize verticalAlignment=_verticalAlignment - In the implementation block
@property (nonatomic,retain) id<HKNumberFormatter> numberFormatter;              //@synthesize numberFormatter=_numberFormatter - In the implementation block
+(id)labelStyleWithColor:(id)arg1 font:(id)arg2 horizontalAlignment:(long long)arg3 verticalAlignment:(long long)arg4 numberFormatter:(id)arg5 ;
+(id)labelStyleWithColor:(id)arg1 font:(id)arg2 horizontalAlignment:(long long)arg3 verticalAlignment:(long long)arg4 ;
-(void)setNumberFormatter:(id<HKNumberFormatter>)arg1 ;
-(id<HKNumberFormatter>)numberFormatter;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(long long)verticalAlignment;
-(UIFont *)font;
-(UIColor *)textColor;
-(void)setVerticalAlignment:(long long)arg1 ;
-(long long)horizontalAlignment;
-(void)setHorizontalAlignment:(long long)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
@end
