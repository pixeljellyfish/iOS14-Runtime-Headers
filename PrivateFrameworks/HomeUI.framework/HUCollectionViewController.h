/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:28 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UICollectionViewController.h>
#import <libobjc.A.dylib/HUResizableCellDelegate.h>

@class NSMapTable, NSString;

@interface HUCollectionViewController : UICollectionViewController <HUResizableCellDelegate> {

	NSMapTable* _installedChildViewControllersKeyedByCell;

}

@property (nonatomic,retain) NSMapTable * installedChildViewControllersKeyedByCell;              //@synthesize installedChildViewControllersKeyedByCell=_installedChildViewControllersKeyedByCell - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithCollectionViewLayout:(id)arg1 ;
-(void)didUpdateRequiredHeightForCell:(id)arg1 ;
-(void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1 ;
-(NSMapTable *)installedChildViewControllersKeyedByCell;
-(void)setInstalledChildViewControllersKeyedByCell:(NSMapTable *)arg1 ;
@end

