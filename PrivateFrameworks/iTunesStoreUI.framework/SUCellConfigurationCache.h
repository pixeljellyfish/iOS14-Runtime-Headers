/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:15 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface SUCellConfigurationCache : NSObject {

	id _cellContext;
	NSMutableArray* _configurations;

}

@property (nonatomic,retain) id cellContext;              //@synthesize cellContext=_cellContext - In the implementation block
-(void)dealloc;
-(void)reset;
-(void)resetLayoutCaches;
-(id)configurationForRow:(unsigned long long)arg1 ;
-(id)cellContext;
-(void)setCellContext:(id)arg1 ;
-(id)initWithClass:(Class)arg1 tableHeight:(double)arg2 ;
@end

