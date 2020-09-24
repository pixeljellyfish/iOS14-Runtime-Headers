/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:54 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProVideo/ProVideo-Structs.h>
@interface FxPlugDescriptor : NSObject {

	FxPlugDescriptorPriv* _priv;

}
+(id)fxPlugDescriptorWithPROPlugIn:(void*)arg1 ;
+(id)fxPlugDescriptorWithFxMetaPlug:(id)arg1 ;
-(id)flavor;
-(id)version;
-(id)displayName;
-(void)dealloc;
-(id)properties;
-(id)uuid;
-(Class)plugInClass;
-(id)initWithPROPlugIn:(void*)arg1 ;
-(id)initWithFxMetaPlug:(id)arg1 ;
-(id)plugInTypeUUID;
-(id)metaPlug;
-(id)groupDescriptor;
-(BOOL)canDoGPU;
-(BOOL)requiresCoreImage;
@end
