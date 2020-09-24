/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:49 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUIHorizontallyScrollingContainerButtonController.h>

@class SearchUIImageView, SearchUILabel;

@interface SearchUIHorizontallyScrollingVerticalLayoutButtonController : SearchUIHorizontallyScrollingContainerButtonController {

	SearchUIImageView* thumbnailView;
	SearchUILabel* _titleLabel;
	SearchUILabel* _footnoteLabel;

}

@property (nonatomic,retain) SearchUILabel * titleLabel;                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) SearchUILabel * footnoteLabel;              //@synthesize footnoteLabel=_footnoteLabel - In the implementation block
-(SearchUILabel *)titleLabel;
-(void)setCardSectionRowModel:(id)arg1 ;
-(double)spacing;
-(void)setTitleLabel:(SearchUILabel *)arg1 ;
-(SearchUILabel *)footnoteLabel;
-(void)setFootnoteLabel:(SearchUILabel *)arg1 ;
-(id)thumbnailView;
-(void)setThumbnailView:(id)arg1 ;
-(id)setupContentView;
@end
