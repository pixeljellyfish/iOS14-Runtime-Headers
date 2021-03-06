/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:07 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AudioServerApplication.framework/AudioServerApplication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioServerApplication/ASAControl.h>

@class NSArray;

@interface ASASelectorControl : ASAControl {

	NSArray* _currentItems;

}

@property (assign,nonatomic) unsigned currentItem; 
@property (assign,nonatomic) NSArray * currentItems;                       //@synthesize currentItems=_currentItems - In the implementation block
@property (nonatomic,copy,readonly) NSArray * availableItems; 
-(unsigned)currentItem;
-(void)setCurrentItem:(unsigned)arg1 ;
-(void)setCurrentItems:(NSArray *)arg1 ;
-(NSArray *)availableItems;
-(NSArray *)currentItems;
-(id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(BOOL)arg2 ;
-(id)coreAudioClassName;
-(id)nameForItem:(unsigned)arg1 ;
@end

