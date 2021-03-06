/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:20 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UILabel, UIStackView;

@interface AVExternalPlaybackIndicatorView : UIView {

	UIImageView* _imageView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIStackView* _containerView;
	UIStackView* _textLabelsContainer;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitleString:(id)arg1 subtitleString:(id)arg2 ;
@end

