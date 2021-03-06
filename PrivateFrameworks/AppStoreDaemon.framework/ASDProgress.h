/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:00 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface ASDProgress : NSObject <NSCopying, NSSecureCoding> {

	BOOL _reportRemotely;
	NSString* _bundleID;
	long long _completedUnitCount;
	long long _totalUnitCount;

}

@property (retain) NSString * bundleID;                       //@synthesize bundleID=_bundleID - In the implementation block
@property (assign) long long completedUnitCount;              //@synthesize completedUnitCount=_completedUnitCount - In the implementation block
@property (assign) BOOL reportRemotely;                       //@synthesize reportRemotely=_reportRemotely - In the implementation block
@property (assign) long long totalUnitCount;                  //@synthesize totalUnitCount=_totalUnitCount - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)completedUnitCount;
-(void)setTotalUnitCount:(long long)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCompletedUnitCount:(long long)arg1 ;
-(long long)totalUnitCount;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setReportRemotely:(BOOL)arg1 ;
-(BOOL)reportRemotely;
-(NSString *)bundleID;
-(id)description;
@end

