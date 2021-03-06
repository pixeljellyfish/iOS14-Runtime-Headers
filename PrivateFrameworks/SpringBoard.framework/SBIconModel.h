/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:01 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardHome/SBHIconModel.h>

@protocol SBIconModelApplicationDataSource;
@interface SBIconModel : SBHIconModel {

	BOOL _iconsHaveBeenLoadedOnce;
	BOOL _createsIconsForInternalApps;
	id<SBIconModelApplicationDataSource> _applicationDataSource;
	BOOL _allowsWebClips;

}

@property (nonatomic,readonly) id<SBIconModelApplicationDataSource> applicationDataSource;              //@synthesize applicationDataSource=_applicationDataSource - In the implementation block
@property (assign,nonatomic) BOOL allowsWebClips;                                                       //@synthesize allowsWebClips=_allowsWebClips - In the implementation block
+(id)migratedIdentifierForLeafIdentifier:(id)arg1 ;
-(void)localeChanged;
-(id)placeholdersByDisplayID;
-(id)applicationWithBundleIdentifier:(id)arg1 ;
-(void)loadAllIcons;
-(id)bookmarkIconForWebClipIdentifier:(id)arg1 ;
-(id)indexPathForIconInPlatformState:(id)arg1 ;
-(id)initWithStore:(id)arg1 applicationDataSource:(id)arg2 ;
-(BOOL)_shouldSkipAddingIcon:(id)arg1 toRootFolder:(id)arg2 ;
-(void)willLayout;
-(id)exportPendingState:(BOOL)arg1 includeMissingIcons:(BOOL)arg2 ;
-(BOOL)importState:(id)arg1 ;
-(id)addBookmarkIconForWebClip:(id)arg1 ;
-(void)dealloc;
-(id)_applicationIcons;
-(void)setAllowsWebClips:(BOOL)arg1 ;
-(BOOL)isIconVisible:(id)arg1 ;
-(id)forecastedLayoutForIconState:(id)arg1 includeMissingIcons:(BOOL)arg2 ;
-(void)updateExistingBookmarkIcon:(id)arg1 forUpdatedWebClip:(id)arg2 ;
-(BOOL)shouldAvoidCreatingIconForApplication:(id)arg1 ;
-(id)addDownloadingIconForDownload:(id)arg1 ;
-(void)_replaceAppIconsWithDownloadingIcons:(id)arg1 ;
-(id<SBIconModelApplicationDataSource>)applicationDataSource;
-(id)applicationIconForBundleIdentifier:(id)arg1 ;
-(id)modernizeRootArchive:(id)arg1 ;
-(id)expectedIconForDisplayIdentifier:(id)arg1 createIfNecessary:(BOOL)arg2 ;
-(id)exportState:(BOOL)arg1 ;
-(BOOL)shouldAvoidPlacingIconOnFirstPage:(id)arg1 ;
-(id)addIconForApplication:(id)arg1 force:(BOOL)arg2 ;
-(id)expectedIconForDisplayIdentifier:(id)arg1 ;
-(id)addIconForApplication:(id)arg1 ;
-(void)_replaceAppIconsWithDownloadingIcons;
-(id)exportFlattenedState:(BOOL)arg1 includeMissingIcons:(BOOL)arg2 ;
-(BOOL)allowsWebClips;
-(void)adjustIconsToShow:(id)arg1 iconsToHide:(id)arg2 afterChangeToVisibleIconTags:(id)arg3 hiddenIconTags:(id)arg4 ;
-(void)_noteApplicationIconImageChanged:(id)arg1 ;
-(id)description;
@end

