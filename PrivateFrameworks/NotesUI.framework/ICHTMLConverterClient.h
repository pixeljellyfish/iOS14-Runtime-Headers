/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject;

@interface ICHTMLConverterClient : NSObject {

	NSXPCConnection* _connectionToService;
	NSObject*<OS_dispatch_queue> _requestCountQueue;
	unsigned long long _requestCount;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> requestCountQueue;              //@synthesize requestCountQueue=_requestCountQueue - In the implementation block
@property (assign,nonatomic) unsigned long long requestCount;                             //@synthesize requestCount=_requestCount - In the implementation block
+(id)sharedClient;
-(unsigned long long)requestCount;
-(void)setRequestCount:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)init;
-(void)attributedStringFromHTMLString:(id)arg1 baseURL:(id)arg2 timeoutDate:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)attributedStringFromHTMLString:(id)arg1 ;
-(void)resumeConnectionIfNeeded;
-(void)suspendConnectionIfNeeded;
-(NSObject*<OS_dispatch_queue>)requestCountQueue;
-(void)setRequestCountQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

