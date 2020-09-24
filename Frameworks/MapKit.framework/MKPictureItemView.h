/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:23 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol GEOPictureItem;
@class UIImageView, NSString, UIVisualEffectView, UILabel;

@interface MKPictureItemView : UIView {

	BOOL _didDownloadImage;
	id<GEOPictureItem> _pictureItem;
	UIImageView* _imageView;
	NSString* _providerName;
	UIVisualEffectView* _effectView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	CGSize _imageSize;

}

@property (nonatomic,retain) id<GEOPictureItem> pictureItem;                 //@synthesize pictureItem=_pictureItem - In the implementation block
@property (nonatomic,copy) NSString * providerName;                          //@synthesize providerName=_providerName - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                        //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) UIVisualEffectView * effectView;              //@synthesize effectView=_effectView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * subtitleLabel;                      //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,readonly) CGSize imageSize;                             //@synthesize imageSize=_imageSize - In the implementation block
@property (assign,nonatomic) BOOL didDownloadImage;                          //@synthesize didDownloadImage=_didDownloadImage - In the implementation block
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(UIVisualEffectView *)effectView;
-(NSString *)providerName;
-(UILabel *)titleLabel;
-(void)setImageView:(UIImageView *)arg1 ;
-(CGSize)imageSize;
-(id<GEOPictureItem>)pictureItem;
-(void)updateLabelsSettings;
-(void)setTitleLabelProviderName;
-(BOOL)didDownloadImage;
-(void)setDidDownloadImage:(BOOL)arg1 ;
-(id)initWithPictureItem:(id)arg1 providerName:(id)arg2 ;
-(void)fetchImageIfNecessary;
-(void)updateUIForTheme:(id)arg1 ;
-(void)setPictureItem:(id<GEOPictureItem>)arg1 ;
-(UILabel *)subtitleLabel;
-(void)setProviderName:(NSString *)arg1 ;
-(void)setupSubviews;
-(UIImageView *)imageView;
@end
