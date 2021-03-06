/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:56 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@class CUIRenditionKey, NSArray;

@interface CUIThemeSchemaRenditionGroup : NSObject {

	CUIRenditionKey* _baseKey;
	NSArray* _renditions;
	SCD_Struct_CU34* _part;

}

@property (nonatomic,retain) NSArray * renditions;              //@synthesize renditions=_renditions - In the implementation block
+(id)renditionGroupsForRenditions:(id)arg1 part:(SCD_Struct_CU34*)arg2 ;
-(id)baseKey;
-(void)dealloc;
-(void)setRenditions:(NSArray *)arg1 ;
-(id)themeSchemaLayers;
-(long long)partFeatures;
-(NSArray *)renditions;
-(id)initWithRenditions:(id)arg1 part:(SCD_Struct_CU34*)arg2 ;
-(void)addLayoutMetricsToPSDImageRef:(id)arg1 withRendition:(id)arg2 ;
-(id)schemaLayersAndLayerGroups;
-(id)_renditionsSortedIntoLayers;
-(id)_layerNameForDrawingLayer:(long long)arg1 ;
-(id)_layerNameForState:(long long)arg1 ;
-(void)addStatesAndDrawingLayersToPSDLayers:(id)arg1 forPresentationState:(unsigned long long)arg2 ;
-(void)addValueOrDim1LayersToPSDLayers:(id)arg1 forPresentationState:(unsigned long long)arg2 state:(unsigned long long)arg3 drawingLayer:(unsigned long long)arg4 ;
-(id)mutablePSDImageRef;
-(id)mutablePSDImageRefColumnStyle;
-(id)description;
@end

