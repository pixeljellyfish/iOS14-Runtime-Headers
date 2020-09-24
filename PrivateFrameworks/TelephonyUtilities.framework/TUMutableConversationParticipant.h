/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:37 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUtilities/TUConversationParticipant.h>

@class TUHandle;

@interface TUMutableConversationParticipant : TUConversationParticipant

@property (assign,nonatomic) unsigned long long identifier; 
@property (nonatomic,copy) TUHandle * handle; 
@property (assign,getter=isMuted,nonatomic) BOOL muted; 
@property (assign,getter=isAudioEnabled,nonatomic) BOOL audioEnabled; 
@property (assign,getter=isVideoEnabled,nonatomic) BOOL videoEnabled; 
@property (assign,nonatomic) long long streamToken; 
+(BOOL)supportsSecureCoding;
@end
