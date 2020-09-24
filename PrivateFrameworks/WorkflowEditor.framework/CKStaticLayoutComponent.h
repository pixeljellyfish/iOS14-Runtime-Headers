/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:26 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <WorkflowEditor/CKComponent.h>

@interface CKStaticLayoutComponent : CKComponent {

	vector<CKStaticLayoutComponentChild, std::__1::allocator<CKStaticLayoutComponentChild> >* _children;

}
+(id)newWithView:(const CKComponentViewConfiguration*)arg1 size:(const CKComponentSize*)arg2 children:(const vector<CKStaticLayoutComponentChild, std::__1::allocator<CKStaticLayoutComponentChild> >*)arg3 ;
+(id)newWithChildren:(const vector<CKStaticLayoutComponentChild, std::__1::allocator<CKStaticLayoutComponentChild> >*)arg1 ;
-(CKComponentLayout*)computeLayoutThatFits:(CKSizeRange)arg1 ;
@end
