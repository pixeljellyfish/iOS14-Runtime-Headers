/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:42 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Preferences/Preferences-Structs.h>
@interface PSSystemConfigurationDynamicStoreWifiWatcher : NSObject {

	SCDynamicStoreRef _prefs;
	CFStringRef _wifiKey;
	CFStringRef _wifiInterface;
	CFStringRef _tetheringLink;

}
+(id)sharedInstance;
+(BOOL)wifiEnabled;
-(id)_wifiPowerWithState:(id)arg1 ;
-(void)dealloc;
-(id)_wifiNameWithState:(id)arg1 ;
-(void)findKeysAirPortState:(id*)arg1 andTetheringState:(id*)arg2 ;
-(id)_wifiTetheringWithState:(id)arg1 ;
-(id)wifiConfig;
-(id)init;
@end
