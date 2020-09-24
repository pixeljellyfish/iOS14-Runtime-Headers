/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:50 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ClassroomKit/ClassroomKit-Structs.h>
@class NSString;

@interface CRKIfaddrs : NSObject {

	ifaddrs* mIfaddrs;

}

@property (getter=isInternetInterface,nonatomic,readonly) BOOL internetInterface; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * IPAddress; 
@property (nonatomic,readonly) CRKIfaddrs * next; 
-(NSString *)name;
-(CRKIfaddrs *)next;
-(NSString *)IPAddress;
-(id)initWithIfaddrs:(ifaddrs*)arg1 ;
-(BOOL)isInternetInterface;
@end
