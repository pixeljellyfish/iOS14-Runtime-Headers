/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:22 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Transparency/GPBMessage.h>

@class NSData;

@interface VRFPublicKey : GPBMessage

@property (assign) BOOL needsRefresh; 
@property (nonatomic,copy) NSData * vrfKey; 
@property (assign,nonatomic) int type; 
+(id)descriptor;
-(BOOL)needsRefresh;
-(void)setNeedsRefresh:(BOOL)arg1 ;
@end
