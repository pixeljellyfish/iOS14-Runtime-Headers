/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:05 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirTraffic/ATMessageLink.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/ATMessageLinkObserver.h>
#import <libobjc.A.dylib/ATMessageLinkRequestHandler.h>

@class NSXPCConnection, NSXPCListenerEndpoint, NSHashTable, NSMutableDictionary, NSMutableSet, NSString;

@interface ATMessageLinkProxy : ATMessageLink <NSSecureCoding, ATMessageLinkObserver, ATMessageLinkRequestHandler> {

	NSXPCConnection* _connection;
	NSXPCListenerEndpoint* _endpoint;
	NSHashTable* _observers;
	NSMutableDictionary* _requestHandlers;
	NSMutableSet* _streams;
	BOOL _open;
	BOOL _initialized;
	NSString* _identifier;
	int _endpointType;

}

@property (assign,getter=isInitialized,nonatomic) BOOL initialized;              //@synthesize initialized=_initialized - In the implementation block
@property (assign,getter=isOpen,nonatomic) BOOL open;                            //@synthesize open=_open - In the implementation block
@property (assign,nonatomic) int endpointType;                                   //@synthesize endpointType=_endpointType - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isOpen;
-(NSString *)identifier;
-(void)setEndpointType:(int)arg1 ;
-(void)setOpen:(BOOL)arg1 ;
-(BOOL)isInitialized;
-(void)setInitialized:(BOOL)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)dealloc;
-(void)sendRequest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)messageLink:(id)arg1 didReceiveRequest:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)addRequestHandler:(id)arg1 forDataClass:(id)arg2 ;
-(void)removeRequestHandlerForDataClass:(id)arg1 ;
-(int)endpointType;
-(id)initWithEndpoint:(id)arg1 ;
-(void)messageLinkWasOpened:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)sendResponse:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)messageLinkWasClosed:(id)arg1 ;
-(void)messageLinkWasInitialized:(id)arg1 ;
-(NSString *)description;
@end
