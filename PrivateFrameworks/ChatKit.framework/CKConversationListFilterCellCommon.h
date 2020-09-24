/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:28 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKConversationListFilterCellCommon <NSObject>
@property (assign,nonatomic,__weak) id<CKConversationListFilterDelegate> filterDelegate; 
@optional
-(void)updateFilterModeTitle:(id)arg1;

@required
+(id)identifier;
+(double)defaultHeight:(long long)arg1;
+(long long)defaultCellStyle;
-(id<CKConversationListFilterDelegate>)filterDelegate;
-(void)updateControl:(id)arg1 selectedIndex:(unsigned long long)arg2 isEnabeld:(BOOL)arg3;
-(void)setFilterDelegate:(id)arg1;

@end
