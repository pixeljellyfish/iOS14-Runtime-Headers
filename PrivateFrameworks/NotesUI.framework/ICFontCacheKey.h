/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesUI/NotesUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIFontDescriptor;

@interface ICFontCacheKey : NSObject <NSCopying> {

	int _traits;
	NSString* _fontName;
	double _pointSize;
	UIFontDescriptor* _fontDescriptor;

}

@property (nonatomic,readonly) NSString * fontName;                            //@synthesize fontName=_fontName - In the implementation block
@property (nonatomic,readonly) int traits;                                     //@synthesize traits=_traits - In the implementation block
@property (nonatomic,readonly) double pointSize;                               //@synthesize pointSize=_pointSize - In the implementation block
@property (nonatomic,readonly) UIFontDescriptor * fontDescriptor;              //@synthesize fontDescriptor=_fontDescriptor - In the implementation block
-(NSString *)fontName;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)traits;
-(double)pointSize;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(UIFontDescriptor *)fontDescriptor;
-(id)initWithFont:(id)arg1 ;
@end

