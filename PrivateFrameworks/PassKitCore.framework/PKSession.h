/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:40 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKSession <NSObject>
@property (nonatomic,readonly) unsigned long long state; 
@property (assign,nonatomic,__weak) id<PKSessionDelegate> delegate; 
@required
-(void)setDelegate:(id)arg1;
-(id<PKSessionDelegate>)delegate;
-(unsigned long long)state;
-(void)endSession;

@end
