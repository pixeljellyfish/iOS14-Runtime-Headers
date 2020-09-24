/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:37 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WelcomeKitCore/WelcomeKitCore-Structs.h>
@interface WLWiFiDeviceClient : NSObject {

	WiFiDeviceClientRef _ref;

}

@property (assign,nonatomic) WiFiDeviceClientRef ref;              //@synthesize ref=_ref - In the implementation block
-(WiFiDeviceClientRef)ref;
-(void)dealloc;
-(void)setRef:(WiFiDeviceClientRef)arg1 ;
-(id)hostedNetworkMatchingSSID:(id)arg1 ;
-(void)disassociate;
-(void)startNetworkWithHostRole:(int)arg1 request:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)stopNetwork:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_hostedNetworks;
-(int)_startNetworkWithRole:(int)arg1 request:(id)arg2 session:(id)arg3 ;
-(int)_stopNetwork:(id)arg1 session:(id)arg2 ;
-(id)initWithWiFiDeviceClientRef:(WiFiDeviceClientRef)arg1 ;
-(id)_initWithoutWiFiDeviceClientRef;
-(BOOL)_completionMapsAreEmpty;
@end
