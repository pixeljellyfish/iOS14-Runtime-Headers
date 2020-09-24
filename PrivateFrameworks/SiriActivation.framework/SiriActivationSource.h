/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:46 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SiriActivation/SiriActivation-Structs.h>
@class BSServiceConnection, NSString;

@interface SiriActivationSource : NSObject {

	BSServiceConnection* _connection;
	os_unfair_lock_s _lock;
	BOOL _active;
	BOOL _knowsIfActive;
	NSString* _identifier;

}

@property (nonatomic,retain) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
-(NSString *)identifier;
-(void)invalidate;
-(BOOL)isEnabled;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)dealloc;
-(BOOL)isActive;
-(id)init;
-(oneway void)activeChangedTo:(id)arg1 ;
@end
