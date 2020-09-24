/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:32 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface CKServerChangeToken : NSObject <NSCopying, NSSecureCoding> {

	NSData* _data;

}

@property (nonatomic,retain) NSData * data;              //@synthesize data=_data - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)data;
-(id)CKPropertiesDescription;
-(void)setData:(NSData *)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end
