/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:25 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WebFormDelegate <NSObject>
@required
-(void)frame:(id)arg1 sourceFrame:(id)arg2 willSubmitForm:(id)arg3 withValues:(id)arg4 submissionListener:(id)arg5;
-(void)textFieldDidBeginEditing:(id)arg1 inFrame:(id)arg2;
-(void)textFieldDidEndEditing:(id)arg1 inFrame:(id)arg2;
-(void)didFocusTextField:(id)arg1 inFrame:(id)arg2;
-(void)textDidChangeInTextField:(id)arg1 inFrame:(id)arg2;
-(void)textDidChangeInTextArea:(id)arg1 inFrame:(id)arg2;
-(BOOL)textField:(id)arg1 doCommandBySelector:(SEL)arg2 inFrame:(id)arg3;
-(void)willSendSubmitEventToForm:(id)arg1 inFrame:(id)arg2 withValues:(id)arg3;

@end

