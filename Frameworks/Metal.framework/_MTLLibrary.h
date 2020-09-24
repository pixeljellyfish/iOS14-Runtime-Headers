/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:51:12 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/_MTLObjectWithLabel.h>
#import <libobjc.A.dylib/MTLLibrarySPI.h>

@protocol MTLDevice;
@class NSString, NSArray, NSMutableDictionary;

@interface _MTLLibrary : _MTLObjectWithLabel <MTLLibrarySPI> {

	id<MTLDevice> _device;
	MTLLibraryData* _libraryData;
	NSMutableDictionary* _functionDictionary;
	MTLLibraryContainer* _cacheEntry;

}

@property (nonatomic,retain,readonly) NSMutableDictionary * functionDictionary;              //@synthesize functionDictionary=_functionDictionary - In the implementation block
@property (copy) NSString * label; 
@property (readonly) id<MTLDevice> device;                                                   //@synthesize device=_device - In the implementation block
@property (retain,readonly) NSArray * functionNames; 
@property (retain,readonly) NSArray * externFunctionNames; 
@property (readonly) MTLLibraryData* libraryData;                                            //@synthesize libraryData=_libraryData - In the implementation block
@property (readonly) MTLLibraryContainer* cacheEntry;                                        //@synthesize cacheEntry=_cacheEntry - In the implementation block
@property (copy) NSString * overrideTriple; 
@property (readonly) NSArray * variableList; 
@property (readonly) long long type; 
@property (readonly) NSString * installName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<MTLDevice>)device;
-(NSString *)overrideTriple;
-(NSArray *)functionNames;
-(id)newFunctionWithName:(id)arg1 constantValues:(id)arg2 functionCache:(id)arg3 error:(id*)arg4 ;
-(id)initWithLibraryContainer:(MTLLibraryContainer*)arg1 device:(id)arg2 ;
-(NSString *)installName;
-(void)newFunctionWithName:(id)arg1 constantValues:(id)arg2 pipelineLibrary:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)newExternFunctionWithName:(id)arg1 ;
-(void)dealloc;
-(void)newFunctionWithName:(id)arg1 constantValues:(id)arg2 functionCache:(id)arg3 specializedName:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)newFunctionWithName:(id)arg1 constantValues:(id)arg2 functionCache:(id)arg3 specializedName:(id)arg4 error:(id*)arg5 ;
-(id)newFunctionWithName:(id)arg1 ;
-(MTLLibraryData*)libraryData;
-(id)newFunctionWithName:(id)arg1 constantValues:(id)arg2 pipelineLibrary:(id)arg3 error:(id*)arg4 ;
-(void)newFunctionWithName:(id)arg1 constantValues:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSMutableDictionary *)functionDictionary;
-(long long)type;
-(void)setOverrideTriple:(NSString *)arg1 ;
-(NSArray *)variableList;
-(void)newFunctionWithDescriptor:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)newFunctionWithNameInternal:(id)arg1 ;
-(id)libraryDataContents;
-(MTLLibraryContainer*)cacheEntry;
-(void)newIntersectionFunctionWithDescriptor:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)newFunctionWithName:(id)arg1 constantValues:(id)arg2 error:(id*)arg3 ;
-(id)newFunctionWithDescriptor:(id)arg1 error:(id*)arg2 ;
-(id)newIntersectionFunctionWithDescriptor:(id)arg1 error:(id*)arg2 ;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(NSArray *)externFunctionNames;
-(NSString *)description;
@end
