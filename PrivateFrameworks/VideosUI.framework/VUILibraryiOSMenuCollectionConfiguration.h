/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:48 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VUICollectionConfiguration.h>

@class UICollectionViewCell;

@interface VUILibraryiOSMenuCollectionConfiguration : VUICollectionConfiguration {

	BOOL _isDesignedForIpadEnabled;
	UICollectionViewCell* _menuItemSizingCell;

}

@property (nonatomic,retain) UICollectionViewCell * menuItemSizingCell;              //@synthesize menuItemSizingCell=_menuItemSizingCell - In the implementation block
@property (assign,nonatomic) BOOL isDesignedForIpadEnabled;                          //@synthesize isDesignedForIpadEnabled=_isDesignedForIpadEnabled - In the implementation block
-(id)_layout;
-(id)init;
-(double)minimumLineSpacing;
-(UICollectionViewCell *)menuItemSizingCell;
-(void)setMenuItemSizingCell:(UICollectionViewCell *)arg1 ;
-(id)generateCollectionView;
-(id)configureCollectionViewCellForCollectionView:(id)arg1 ForItem:(id)arg2 AtIndexPath:(id)arg3 ;
-(id)configureSizingCellForItem:(id)arg1 AtIndexPath:(id)arg2 ;
-(Class)classForCollectionViewCell;
-(BOOL)isDesignedForIpadEnabled;
-(void)setIsDesignedForIpadEnabled:(BOOL)arg1 ;
@end

