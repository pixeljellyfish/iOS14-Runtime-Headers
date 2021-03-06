/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:50 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/VUITextBadgeViewDelegate.h>

@class VUIUpNextOverlayLayout, VUIProgressView, _TVImageView, VUILabel, VUITextBadgeView, UIView, CALayer, IKViewElement, NSNumber, VUICountDownProgressIndicator, NSString;

@interface VUIUpNextOverlayView : UIView <VUITextBadgeViewDelegate> {

	BOOL _progressViewShowOnlyOnFocus;
	BOOL _appImageViewShowOnlyOnFocus;
	BOOL _logoImageViewShowOnlyOnFocus;
	BOOL _textLabelShowOnlyOnFocus;
	BOOL _subtitleLabelShowOnlyOnFocus;
	BOOL _badgeShowOnlyOnFocus;
	BOOL _isFocused;
	VUIUpNextOverlayLayout* _overlayLayout;
	VUIProgressView* _progressView;
	_TVImageView* _appImageView;
	_TVImageView* _logoImageView;
	VUILabel* _textLabel;
	VUILabel* _subtitleLabel;
	_TVImageView* _badgeView;
	VUITextBadgeView* _textBadge;
	UIView* _gradientView;
	CALayer* _gradientLayer;
	IKViewElement* _viewElement;
	IKViewElement* _progressViewElement;
	IKViewElement* _appImageElement;
	IKViewElement* _logoImageElement;
	IKViewElement* _textElement;
	IKViewElement* _subtitleElement;
	IKViewElement* _badgeElement;
	IKViewElement* _textBadgeElement;
	NSNumber* _autoPlayDuration;
	VUICountDownProgressIndicator* _autoPlayIndicator;
	double _gradientSizeHeightMultiplier;

}

@property (nonatomic,retain) IKViewElement * viewElement;                                    //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,retain) IKViewElement * progressViewElement;                            //@synthesize progressViewElement=_progressViewElement - In the implementation block
@property (nonatomic,retain) IKViewElement * appImageElement;                                //@synthesize appImageElement=_appImageElement - In the implementation block
@property (nonatomic,retain) IKViewElement * logoImageElement;                               //@synthesize logoImageElement=_logoImageElement - In the implementation block
@property (nonatomic,retain) IKViewElement * textElement;                                    //@synthesize textElement=_textElement - In the implementation block
@property (nonatomic,retain) IKViewElement * subtitleElement;                                //@synthesize subtitleElement=_subtitleElement - In the implementation block
@property (nonatomic,retain) IKViewElement * badgeElement;                                   //@synthesize badgeElement=_badgeElement - In the implementation block
@property (nonatomic,retain) IKViewElement * textBadgeElement;                               //@synthesize textBadgeElement=_textBadgeElement - In the implementation block
@property (nonatomic,retain) NSNumber * autoPlayDuration;                                    //@synthesize autoPlayDuration=_autoPlayDuration - In the implementation block
@property (nonatomic,retain) VUICountDownProgressIndicator * autoPlayIndicator;              //@synthesize autoPlayIndicator=_autoPlayIndicator - In the implementation block
@property (assign,nonatomic) double gradientSizeHeightMultiplier;                            //@synthesize gradientSizeHeightMultiplier=_gradientSizeHeightMultiplier - In the implementation block
@property (nonatomic,retain) VUIUpNextOverlayLayout * overlayLayout;                         //@synthesize overlayLayout=_overlayLayout - In the implementation block
@property (nonatomic,retain) VUIProgressView * progressView;                                 //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) _TVImageView * appImageView;                                    //@synthesize appImageView=_appImageView - In the implementation block
@property (nonatomic,retain) _TVImageView * logoImageView;                                   //@synthesize logoImageView=_logoImageView - In the implementation block
@property (nonatomic,retain) VUILabel * textLabel;                                           //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,retain) VUILabel * subtitleLabel;                                       //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) _TVImageView * badgeView;                                       //@synthesize badgeView=_badgeView - In the implementation block
@property (nonatomic,retain) VUITextBadgeView * textBadge;                                   //@synthesize textBadge=_textBadge - In the implementation block
@property (nonatomic,retain) UIView * gradientView;                                          //@synthesize gradientView=_gradientView - In the implementation block
@property (nonatomic,retain) CALayer * gradientLayer;                                        //@synthesize gradientLayer=_gradientLayer - In the implementation block
@property (assign,nonatomic) BOOL progressViewShowOnlyOnFocus;                               //@synthesize progressViewShowOnlyOnFocus=_progressViewShowOnlyOnFocus - In the implementation block
@property (assign,nonatomic) BOOL appImageViewShowOnlyOnFocus;                               //@synthesize appImageViewShowOnlyOnFocus=_appImageViewShowOnlyOnFocus - In the implementation block
@property (assign,nonatomic) BOOL logoImageViewShowOnlyOnFocus;                              //@synthesize logoImageViewShowOnlyOnFocus=_logoImageViewShowOnlyOnFocus - In the implementation block
@property (assign,nonatomic) BOOL textLabelShowOnlyOnFocus;                                  //@synthesize textLabelShowOnlyOnFocus=_textLabelShowOnlyOnFocus - In the implementation block
@property (assign,nonatomic) BOOL subtitleLabelShowOnlyOnFocus;                              //@synthesize subtitleLabelShowOnlyOnFocus=_subtitleLabelShowOnlyOnFocus - In the implementation block
@property (assign,nonatomic) BOOL badgeShowOnlyOnFocus;                                      //@synthesize badgeShowOnlyOnFocus=_badgeShowOnlyOnFocus - In the implementation block
@property (assign,nonatomic) BOOL isFocused;                                                 //@synthesize isFocused=_isFocused - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)overlayViewFromElement:(id)arg1 overlayLayout:(id)arg2 existingView:(id)arg3 ;
-(_TVImageView *)badgeView;
-(void)setBadgeView:(_TVImageView *)arg1 ;
-(CALayer *)gradientLayer;
-(VUIProgressView *)progressView;
-(void)setGradientLayer:(CALayer *)arg1 ;
-(void)setSubtitleLabel:(VUILabel *)arg1 ;
-(void)dealloc;
-(void)reset;
-(void)layoutSubviews;
-(void)setLogoImageView:(_TVImageView *)arg1 ;
-(VUILabel *)subtitleLabel;
-(void)setProgressView:(VUIProgressView *)arg1 ;
-(void)setTextLabel:(VUILabel *)arg1 ;
-(void)setTextElement:(IKViewElement *)arg1 ;
-(IKViewElement *)textElement;
-(UIView *)gradientView;
-(void)setGradientView:(UIView *)arg1 ;
-(BOOL)isFocused;
-(_TVImageView *)logoImageView;
-(VUILabel *)textLabel;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(void)setOverlayLayout:(VUIUpNextOverlayLayout *)arg1 ;
-(VUITextBadgeView *)textBadge;
-(VUIUpNextOverlayLayout *)overlayLayout;
-(void)setTextBadge:(VUITextBadgeView *)arg1 ;
-(IKViewElement *)badgeElement;
-(void)setBadgeElement:(IKViewElement *)arg1 ;
-(void)setTextBadgeElement:(IKViewElement *)arg1 ;
-(IKViewElement *)textBadgeElement;
-(VUICountDownProgressIndicator *)autoPlayIndicator;
-(void)setAutoPlayIndicator:(VUICountDownProgressIndicator *)arg1 ;
-(NSNumber *)autoPlayDuration;
-(void)setAutoPlayDuration:(NSNumber *)arg1 ;
-(void)setAppImageView:(_TVImageView *)arg1 ;
-(_TVImageView *)appImageView;
-(void)textBadgeViewContentsUpdated:(id)arg1 ;
-(void)setAppImageElement:(IKViewElement *)arg1 ;
-(void)setLogoImageElement:(IKViewElement *)arg1 ;
-(void)setProgressViewElement:(IKViewElement *)arg1 ;
-(void)setSubtitleElement:(IKViewElement *)arg1 ;
-(void)setProgressViewShowOnlyOnFocus:(BOOL)arg1 ;
-(void)setAppImageViewShowOnlyOnFocus:(BOOL)arg1 ;
-(void)setLogoImageViewShowOnlyOnFocus:(BOOL)arg1 ;
-(void)setTextLabelShowOnlyOnFocus:(BOOL)arg1 ;
-(void)setSubtitleLabelShowOnlyOnFocus:(BOOL)arg1 ;
-(void)setBadgeShowOnlyOnFocus:(BOOL)arg1 ;
-(BOOL)progressViewShowOnlyOnFocus;
-(BOOL)appImageViewShowOnlyOnFocus;
-(BOOL)logoImageViewShowOnlyOnFocus;
-(BOOL)textLabelShowOnlyOnFocus;
-(BOOL)subtitleLabelShowOnlyOnFocus;
-(BOOL)badgeShowOnlyOnFocus;
-(void)setIsFocused:(BOOL)arg1 ;
-(IKViewElement *)progressViewElement;
-(IKViewElement *)appImageElement;
-(IKViewElement *)logoImageElement;
-(IKViewElement *)subtitleElement;
-(double)gradientSizeHeightMultiplier;
-(void)setGradientSizeHeightMultiplier:(double)arg1 ;
@end

