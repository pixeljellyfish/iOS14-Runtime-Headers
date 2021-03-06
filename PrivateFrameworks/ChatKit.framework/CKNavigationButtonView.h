/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:35 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIButton.h>

@class UIButton, UIImage, UIImageView, UILabel, UIVisualEffectView, UIVisualEffect, NSString;

@interface CKNavigationButtonView : UIButton {

	BOOL _wantsVibrancy;
	BOOL _wantsLongPress;
	long long _joinButtonStyle;
	UIButton* _imageButton;
	UIImage* _image;
	UIImage* _defaultImage;
	UIImage* _disabledImage;
	UIImageView* _iconImageView;
	UILabel* _textLabel;
	UIVisualEffectView* _vibrancyView;
	UIVisualEffect* _vibrancyEffect;
	UIVisualEffect* _disabledVibrancyEffect;
	NSString* _text;

}

@property (assign,nonatomic) BOOL wantsLongPress;                                  //@synthesize wantsLongPress=_wantsLongPress - In the implementation block
@property (nonatomic,retain) UIImage * image;                                      //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) UIImage * defaultImage;                               //@synthesize defaultImage=_defaultImage - In the implementation block
@property (nonatomic,retain) UIImage * disabledImage;                              //@synthesize disabledImage=_disabledImage - In the implementation block
@property (nonatomic,retain) UIImageView * iconImageView;                          //@synthesize iconImageView=_iconImageView - In the implementation block
@property (nonatomic,retain) UILabel * textLabel;                                  //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * vibrancyView;                    //@synthesize vibrancyView=_vibrancyView - In the implementation block
@property (nonatomic,retain) UIVisualEffect * vibrancyEffect;                      //@synthesize vibrancyEffect=_vibrancyEffect - In the implementation block
@property (nonatomic,retain) UIVisualEffect * disabledVibrancyEffect;              //@synthesize disabledVibrancyEffect=_disabledVibrancyEffect - In the implementation block
@property (nonatomic,copy) NSString * text;                                        //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) long long joinButtonStyle;                            //@synthesize joinButtonStyle=_joinButtonStyle - In the implementation block
@property (assign,nonatomic) BOOL wantsVibrancy;                                   //@synthesize wantsVibrancy=_wantsVibrancy - In the implementation block
@property (nonatomic,readonly) UIButton * imageButton;                             //@synthesize imageButton=_imageButton - In the implementation block
-(UIImageView *)iconImageView;
-(void)setImage:(UIImage *)arg1 ;
-(void)setIconImageView:(UIImageView *)arg1 ;
-(BOOL)wantsVibrancy;
-(CGSize)intrinsicContentSize;
-(UIButton *)imageButton;
-(NSString *)text;
-(UIImage *)disabledImage;
-(UIVisualEffect *)vibrancyEffect;
-(void)setWantsLongPress:(BOOL)arg1 ;
-(void)setDefaultImage:(UIImage *)arg1 ;
-(void)_setupIconImageView;
-(id)_imageForCurrentState;
-(UIVisualEffect *)disabledVibrancyEffect;
-(void)setDisabledVibrancyEffect:(UIVisualEffect *)arg1 ;
-(BOOL)wantsLongPress;
-(void)setDisabledImage:(UIImage *)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(void)layoutSubviews;
-(UIImage *)defaultImage;
-(UIImage *)image;
-(void)setTextLabel:(UILabel *)arg1 ;
-(void)setJoinButtonStyle:(long long)arg1 ;
-(void)setWantsVibrancy:(BOOL)arg1 ;
-(void)setVibrancyEffect:(UIVisualEffect *)arg1 ;
-(id)initWithImage:(id)arg1 disabledImage:(id)arg2 text:(id)arg3 wantsLongPress:(BOOL)arg4 ;
-(id)initWithImage:(id)arg1 text:(id)arg2 wantsLongPress:(BOOL)arg3 ;
-(long long)joinButtonStyle;
-(UIVisualEffectView *)vibrancyView;
-(void)setVibrancyView:(UIVisualEffectView *)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(UILabel *)textLabel;
@end

