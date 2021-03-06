/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:27 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CAMSuggestionDelegate <NSObject>
@required
-(void)captureController:(id)arg1 didOutputFlashActive:(BOOL)arg2;
-(void)captureController:(id)arg1 didOutputTorchActive:(BOOL)arg2;
-(void)captureController:(id)arg1 didOutputLowLightStatus:(long long)arg2;
-(void)captureController:(id)arg1 didOutputLowLightModeDurationMapping:(CGSize)arg2;
-(void)captureController:(id)arg1 didOutputHDRSuggestion:(BOOL)arg2;

@end

