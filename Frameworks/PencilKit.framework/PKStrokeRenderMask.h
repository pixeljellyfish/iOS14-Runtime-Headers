/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:49:56 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PencilKit/PencilKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol PKStrokeRenderCache;
@class PKStroke;

@interface PKStrokeRenderMask : NSObject <NSCopying> {

	vector<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> >, std::__1::allocator<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> > > >* _maskPaths;
	PKStroke* _stroke;
	id<PKStrokeRenderCache> _renderCache;

}

@property (nonatomic,readonly) PKStroke * stroke;                                //@synthesize stroke=_stroke - In the implementation block
@property (nonatomic,readonly) id<PKStrokeRenderCache> renderCache;              //@synthesize renderCache=_renderCache - In the implementation block
-(PKStroke *)stroke;
-(id)copyWithZone:(NSZone*)arg1 ;
-(const vector<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> >, std::__1::allocator<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> > > >*)maskPaths;
-(id)initWithStroke:(id)arg1 renderCache:(id)arg2 maskPaths:(const vector<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> >, std::__1::allocator<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> > > >*)arg3 ;
-(id<PKStrokeRenderCache>)renderCache;
@end
