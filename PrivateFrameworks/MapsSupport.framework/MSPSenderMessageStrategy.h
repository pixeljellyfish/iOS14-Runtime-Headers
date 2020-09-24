/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:34 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSupport/MSPSenderStrategy.h>

@protocol MSPSenderMessageStrategyDelegate;
@class NSMutableSet;

@interface MSPSenderMessageStrategy : MSPSenderStrategy {

	id<MSPSenderMessageStrategyDelegate> _delegate;
	NSMutableSet* _messagesParticipants;

}

@property (nonatomic,retain) NSMutableSet * messagesParticipants;                               //@synthesize messagesParticipants=_messagesParticipants - In the implementation block
@property (assign,nonatomic,__weak) id<MSPSenderMessageStrategyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)addParticipants:(id)arg1 ;
-(void)setState:(id)arg1 ;
-(id)participants;
-(void)setDelegate:(id<MSPSenderMessageStrategyDelegate>)arg1 ;
-(id<MSPSenderMessageStrategyDelegate>)delegate;
-(void)removeParticipants:(id)arg1 ;
-(void)sendMessageIfNeeded;
-(void)_addMessagesParticipants:(id)arg1 ;
-(void)_removeMessagesParticipants:(id)arg1 ;
-(NSMutableSet *)messagesParticipants;
-(void)setMessagesParticipants:(NSMutableSet *)arg1 ;
@end
