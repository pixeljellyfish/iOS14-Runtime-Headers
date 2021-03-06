/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:53 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DeviceManagement/DMFTaskRequest.h>

@class NSString;

@interface DMFFetchControlGroupIdentifiersRequest : DMFTaskRequest {

	BOOL _includeTemporary;
	NSString* _leaderIdentifier;

}

@property (nonatomic,copy) NSString * leaderIdentifier;              //@synthesize leaderIdentifier=_leaderIdentifier - In the implementation block
@property (assign,nonatomic) BOOL includeTemporary;                  //@synthesize includeTemporary=_includeTemporary - In the implementation block
+(BOOL)supportsSecureCoding;
+(Class)whitelistedClassForResultObject;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)includeTemporary;
-(NSString *)leaderIdentifier;
-(void)setLeaderIdentifier:(NSString *)arg1 ;
-(void)setIncludeTemporary:(BOOL)arg1 ;
@end

