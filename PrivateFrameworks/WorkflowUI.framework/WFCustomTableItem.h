/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:02 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowUI/WFTableItem.h>

@class NSMapTable;

@interface WFCustomTableItem : WFTableItem {

	/*^block*/id _configurationBlock;
	NSMapTable* _representedObjectChangeTargetSelectorTable;

}

@property (nonatomic,readonly) NSMapTable * representedObjectChangeTargetSelectorTable;              //@synthesize representedObjectChangeTargetSelectorTable=_representedObjectChangeTargetSelectorTable - In the implementation block
@property (nonatomic,retain) id representedObject; 
@property (nonatomic,copy,readonly) id configurationBlock;                                           //@synthesize configurationBlock=_configurationBlock - In the implementation block
-(void)setRepresentedObject:(id)arg1 ;
-(id)configurationBlock;
-(BOOL)isEqual:(id)arg1 ;
-(id)representedObject;
-(void)addRepresentedObjectChangeObserver:(id)arg1 action:(SEL)arg2 ;
-(void)configureCell:(id)arg1 ;
-(id)initWithCellClass:(Class)arg1 style:(long long)arg2 representedObject:(id)arg3 configurationBlock:(/*^block*/id)arg4 ;
-(void)setRepresentedObject:(id)arg1 updatingCell:(BOOL)arg2 ;
-(NSMapTable *)representedObjectChangeTargetSelectorTable;
@end

