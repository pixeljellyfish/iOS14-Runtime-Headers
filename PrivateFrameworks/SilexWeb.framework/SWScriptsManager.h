/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:17 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SWScriptsManager.h>

@protocol SWScriptsManager <NSObject>
@required
-(void)executeScript:(id)arg1;
-(void)addScript:(id)arg1;
-(void)removeAllScripts;
-(void)removeScript:(id)arg1;

@end


@protocol SWLogger;
@class WKWebView, NSMutableArray, NSString;

@interface SWScriptsManager : NSObject <SWScriptsManager> {

	BOOL _readyToExecuteScripts;
	WKWebView* _webView;
	id<SWLogger> _logger;
	NSMutableArray* _queuedExecutableScripts;

}

@property (nonatomic,readonly) WKWebView * webView;                                   //@synthesize webView=_webView - In the implementation block
@property (nonatomic,readonly) id<SWLogger> logger;                                   //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) NSMutableArray * queuedExecutableScripts;              //@synthesize queuedExecutableScripts=_queuedExecutableScripts - In the implementation block
@property (assign,nonatomic) BOOL readyToExecuteScripts;                              //@synthesize readyToExecuteScripts=_readyToExecuteScripts - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SWLogger>)logger;
-(WKWebView *)webView;
-(void)executeScript:(id)arg1 ;
-(void)addScript:(id)arg1 ;
-(void)removeAllScripts;
-(void)removeScript:(id)arg1 ;
-(id)initWithWebView:(id)arg1 documentStateProvider:(id)arg2 logger:(id)arg3 ;
-(void)setReadyToExecuteScripts:(BOOL)arg1 ;
-(void)executeQueuedScripts;
-(BOOL)readyToExecuteScripts;
-(void)queueExecutableScript:(id)arg1 ;
-(NSMutableArray *)queuedExecutableScripts;
@end

