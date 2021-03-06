/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:20 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NEAgentTunnelExtension.h>
#import <libobjc.A.dylib/NEExtensionAppProxyProviderHostDelegate.h>
#import <libobjc.A.dylib/NEFlowDivertPluginDriver.h>

@class NSString;

@interface NEAgentAppProxyExtension : NEAgentTunnelExtension <NEExtensionAppProxyProviderHostDelegate, NEFlowDivertPluginDriver>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)driverInterface;
-(void)extension:(id)arg1 didRequestFlowDivertControlSocketWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)connectWithParameters:(id)arg1 ;
-(id)managerInterface;
-(void)setDelegateInterface:(unsigned)arg1 ;
@end

