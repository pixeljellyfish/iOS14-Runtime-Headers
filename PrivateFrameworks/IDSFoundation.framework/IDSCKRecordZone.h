/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:57 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class IDSCKRecordZoneID;

@interface IDSCKRecordZone : NSObject <NSSecureCoding, NSCopying> {

	IDSCKRecordZoneID* _zoneID;

}

@property (nonatomic,readonly) IDSCKRecordZoneID * zoneID;              //@synthesize zoneID=_zoneID - In the implementation block
+(id)alloc;
+(Class)__class;
-(IDSCKRecordZoneID *)zoneID;
@end

