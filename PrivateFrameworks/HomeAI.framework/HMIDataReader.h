/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:20 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface HMIDataReader : NSObject {

	NSData* _data;
	unsigned long long _position;

}
-(void)seek:(unsigned long long)arg1 ;
-(id)readData:(unsigned long long)arg1 ;
-(unsigned long long)position;
-(unsigned long long)length;
-(unsigned long long)readUInt64;
-(id)initWithData:(id)arg1 ;
-(unsigned)readUInt32;
@end
