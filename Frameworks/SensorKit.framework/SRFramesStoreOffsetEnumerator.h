/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:49:54 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/SensorKit.framework/SensorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SensorKit/SensorKit-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class SRFrameStore;

@interface SRFramesStoreOffsetEnumerator : NSObject <NSFastEnumeration> {

	SRFrameStore* _framesStore;
	unsigned long long _offset;

}
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_SR3*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)dealloc;
@end
