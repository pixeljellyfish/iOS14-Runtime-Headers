/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:49:54 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/SensorKit.framework/SensorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SensorKit/SensorKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSDictionary;

@interface SRFetchResult : NSObject <NSCopying> {

	double _timestamp;
	NSData* _sampleData;
	NSDictionary* _metadata;
	Class _sampleClass;

}

@property (retain) NSData * sampleData;                  //@synthesize sampleData=_sampleData - In the implementation block
@property (retain) NSDictionary * metadata;              //@synthesize metadata=_metadata - In the implementation block
@property (retain) Class sampleClass;                    //@synthesize sampleClass=_sampleClass - In the implementation block
@property (copy,readonly) id sample; 
@property (readonly) double timestamp;                   //@synthesize timestamp=_timestamp - In the implementation block
+(id)new;
+(void)initialize;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(id)sample;
-(NSDictionary *)metadata;
-(void)dealloc;
-(double)timestamp;
-(id)init;
-(void)setSampleClass:(Class)arg1 ;
-(Class)sampleClass;
-(id)initWithData:(id)arg1 timestamp:(double)arg2 metadata:(id)arg3 sampleClass:(Class)arg4 ;
-(void)setSampleData:(NSData *)arg1 ;
-(NSData *)sampleData;
@end

