/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:59 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable, NSArray;

@interface SBSwitcherDisplayItemRemovalResolutionRequest : NSObject {

	NSMapTable* _displayItemToRemovalIntentType;

}

@property (nonatomic,copy,readonly) NSArray * displayItems; 
-(NSArray *)displayItems;
-(long long)removalIntentTypeForDisplayItem:(id)arg1 ;
-(void)setRemovalIntentType:(long long)arg1 forDisplayItem:(id)arg2 ;
@end
