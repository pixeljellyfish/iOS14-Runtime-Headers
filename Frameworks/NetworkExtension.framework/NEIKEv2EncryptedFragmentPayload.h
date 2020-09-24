/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:19 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NEIKEv2EncryptedPayload.h>

@interface NEIKEv2EncryptedFragmentPayload : NEIKEv2EncryptedPayload {

	unsigned _fragmentNumber;
	unsigned _totalFragments;
	unsigned long long _nextPayload;

}

@property (assign) unsigned fragmentNumber;                     //@synthesize fragmentNumber=_fragmentNumber - In the implementation block
@property (assign) unsigned totalFragments;                     //@synthesize totalFragments=_totalFragments - In the implementation block
@property (assign) unsigned long long nextPayload;              //@synthesize nextPayload=_nextPayload - In the implementation block
+(id)copyTypeDescription;
-(BOOL)hasRequiredFields;
-(BOOL)parsePayloadData;
-(unsigned)fragmentNumber;
-(unsigned)totalFragments;
-(void)setFragmentNumber:(unsigned)arg1 ;
-(void)setTotalFragments:(unsigned)arg1 ;
-(unsigned long long)nextPayload;
-(void)setNextPayload:(unsigned long long)arg1 ;
-(unsigned long long)type;
@end
