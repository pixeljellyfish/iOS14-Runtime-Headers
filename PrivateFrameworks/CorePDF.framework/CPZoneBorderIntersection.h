/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:02 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/CPCopying.h>

@class CPZoneBorder;

@interface CPZoneBorderIntersection : NSObject <NSCopying, CPCopying> {

	CGRect intersectionRect;
	CPZoneBorder* intersectingBorder;
	BOOL forwardVector;
	BOOL backwardVector;

}
-(BOOL)forwardVector;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initSuper;
-(void)setIntersectionRect:(CGRect)arg1 ;
-(void)setIntersectingBorder:(id)arg1 ;
-(long long)comparePositionLengthwise:(id)arg1 ;
-(id)intersectingBorder;
-(CGRect)intersectionRect;
-(BOOL)backwardVector;
-(void)setForwardVector:(BOOL)arg1 ;
-(void)setBackwardVector:(BOOL)arg1 ;
@end

