/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:12 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSuggestions/MapsSuggestionsBaseSource.h>
#import <MapsSuggestions/MapsSuggestionsSourceDelegateProxy.h>
#import <MapsSuggestions/MapsSuggestionsSource.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSString;

@interface MapsSuggestionsRemoteSource : MapsSuggestionsBaseSource <MapsSuggestionsSourceDelegateProxy, MapsSuggestionsSource> {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _started;
	/*^block*/id _oneShotCallback;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MapsSuggestionsSourceDelegate> delegate; 
@property (nonatomic,readonly) NSString * uniqueName; 
+(BOOL)isEnabled;
+(unsigned long long)disposition;
-(BOOL)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)feedbackForMapItem:(id)arg1 action:(long long)arg2 ;
-(double)updateSuggestionEntriesWithHandler:(/*^block*/id)arg1 ;
-(void)feedbackForContact:(id)arg1 action:(long long)arg2 ;
-(BOOL)canProduceEntriesOfType:(long long)arg1 ;
-(double)updateSuggestionEntriesOfType:(long long)arg1 handler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)start;
-(void)feedbackForEntry:(id)arg1 action:(long long)arg2 ;
-(id)initFromResourceDepot:(id)arg1 name:(id)arg2 ;
-(void)Debug_updateGraph;
-(void)stop;
-(void)addOrUpdateSuggestionEntriesData:(id)arg1 sourceNameData:(id)arg2 handler:(/*^block*/id)arg3 ;
@end

