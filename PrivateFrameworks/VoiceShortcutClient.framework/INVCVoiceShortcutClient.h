/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:09 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol INVCVoiceShortcutClient <NSObject>
@required
-(void)getVoiceShortcutsWithCompletion:(/*^block*/id)arg1;
-(void)getVoiceShortcutWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)setShortcutSuggestions:(id)arg1 forAppWithBundleIdentifier:(id)arg2;
-(void)setInteger:(long long)arg1 forKey:(id)arg2 inDomain:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)sendAceCommandDictionary:(id)arg1 completion:(/*^block*/id)arg2;

@end

