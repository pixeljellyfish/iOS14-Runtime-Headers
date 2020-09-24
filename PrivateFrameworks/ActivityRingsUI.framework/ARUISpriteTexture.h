/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActivityRingsUI/ActivityRingsUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol MTLTexture;
@interface ARUISpriteTexture : NSObject <NSCopying> {

	float _height;
	float _width;
	id<MTLTexture> _texture;

}

@property (nonatomic,readonly) float height;                        //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) float width;                         //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) id<MTLTexture> texture;              //@synthesize texture=_texture - In the implementation block
-(id<MTLTexture>)texture;
-(id)initWithImage:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)width;
-(float)height;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end
