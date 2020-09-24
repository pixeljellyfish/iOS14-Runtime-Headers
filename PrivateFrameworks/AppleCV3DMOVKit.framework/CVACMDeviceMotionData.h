/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:15 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppleCV3DMOVKit.framework/AppleCV3DMOVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CVACMMotionTypeDeviceMotionData;

@interface CVACMDeviceMotionData : NSObject <NSSecureCoding> {

	CVACMMotionTypeDeviceMotionData* _deviceMotion;
	double _timestamp;

}

@property (nonatomic,retain) CVACMMotionTypeDeviceMotionData * deviceMotion;              //@synthesize deviceMotion=_deviceMotion - In the implementation block
@property (assign,nonatomic) double timestamp;                                            //@synthesize timestamp=_timestamp - In the implementation block
+(BOOL)supportsSecureCoding;
-(CVACMMotionTypeDeviceMotionData *)deviceMotion;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(void)setDeviceMotion:(CVACMMotionTypeDeviceMotionData *)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionary;
-(id)initWithCMDeviceMotion:(id)arg1 ;
@end
