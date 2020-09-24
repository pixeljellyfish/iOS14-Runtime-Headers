/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:00 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NWNetworkAgent, OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSUUID;

@interface NWNetworkAgentRegistration : NSObject {

	int _registrationSocket;
	Class _networkAgentClass;
	NSObject*<NWNetworkAgent> _networkAgent;
	NSUUID* _registeredUUID;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _readSource;

}

@property (assign) Class networkAgentClass;                                      //@synthesize networkAgentClass=_networkAgentClass - In the implementation block
@property (retain) NSObject*<NWNetworkAgent> networkAgent;                       //@synthesize networkAgent=_networkAgent - In the implementation block
@property (retain) NSUUID * registeredUUID;                                      //@synthesize registeredUUID=_registeredUUID - In the implementation block
@property (assign) int registrationSocket;                                       //@synthesize registrationSocket=_registrationSocket - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;                           //@synthesize queue=_queue - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> readSource;                     //@synthesize readSource=_readSource - In the implementation block
@property (getter=isRegistered,nonatomic,readonly) BOOL registered; 
@property (assign,nonatomic) unsigned long long useCount; 
+(int)newRegistrationFileDescriptor;
+(BOOL)addActiveAssertionToNetworkAgent:(id)arg1 ;
+(BOOL)useNetworkAgent:(id)arg1 returnUseCount:(unsigned long long*)arg2 ;
+(BOOL)removeActiveAssertionFromNetworkAgent:(id)arg1 ;
-(BOOL)isRegistered;
-(BOOL)createReadSourceWithRegistrationSocket:(int)arg1 ;
-(void)handleMessageFromAgent;
-(void)setNetworkAgentClass:(Class)arg1 ;
-(void)setNetworkAgent:(NSObject*<NWNetworkAgent>)arg1 ;
-(void)setUseCount:(unsigned long long)arg1 ;
-(id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2 ;
-(void)setRegisteredUUID:(NSUUID *)arg1 ;
-(NSUUID *)registeredUUID;
-(void)dealloc;
-(BOOL)addNetworkAgentToInterfaceNamed:(id)arg1 ;
-(NSObject*<OS_dispatch_source>)readSource;
-(NSObject*<NWNetworkAgent>)networkAgent;
-(BOOL)assignNexusData:(id)arg1 toClient:(id)arg2 ;
-(BOOL)registerNetworkAgent:(id)arg1 withFileDescriptor:(int)arg2 ;
-(void)setReadSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setRegistrationSocket:(int)arg1 ;
-(int)registrationSocket;
-(BOOL)assignResolvedEndpoints:(id)arg1 toClient:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)assignDiscoveredEndpoints:(id)arg1 toClient:(id)arg2 ;
-(int)dupRegistrationFileDescriptor;
-(Class)networkAgentClass;
-(BOOL)setRegisteredNetworkAgent:(id)arg1 fileDescriptor:(int)arg2 ;
-(BOOL)registerNetworkAgent:(id)arg1 ;
-(BOOL)removeNetworkAgentFromInterfaceNamed:(id)arg1 ;
-(id)initWithNetworkAgentClass:(Class)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithNetworkAgentClass:(Class)arg1 queue:(id)arg2 ;
-(BOOL)unregisterNetworkAgent;
-(unsigned long long)useCount;
-(id)description;
-(BOOL)updateNetworkAgent:(id)arg1 ;
@end
