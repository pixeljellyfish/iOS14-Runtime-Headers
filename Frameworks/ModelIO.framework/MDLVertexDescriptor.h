/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:24 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ModelIO/ModelIO-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface MDLVertexDescriptor : NSObject <NSCopying> {

	NSMutableArray* _attributes;
	NSMutableArray* _layouts;

}

@property (nonatomic,retain) NSMutableArray * attributes;              //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,retain) NSMutableArray * layouts;                 //@synthesize layouts=_layouts - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMutableArray *)layouts;
-(NSMutableArray *)attributes;
-(void)addOrReplaceAttribute:(id)arg1 ;
-(void)setLayouts:(NSMutableArray *)arg1 ;
-(void)reset;
-(id)init;
-(id)attributeNamed:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setAttributes:(NSMutableArray *)arg1 ;
-(id)description;
-(void)setPackedOffsets;
-(void)setPackedStrides;
-(void)debugPrintToFile:(_sFILE*)arg1 ;
-(id)initWithVertexDescriptor:(id)arg1 ;
-(void)removeAttributeNamed:(id)arg1 ;
@end

