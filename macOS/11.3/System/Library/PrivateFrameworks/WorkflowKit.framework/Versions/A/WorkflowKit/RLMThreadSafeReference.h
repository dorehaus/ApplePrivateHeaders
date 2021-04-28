/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WorkflowKit/WorkflowKit-Structs.h>
@interface RLMThreadSafeReference : NSObject {

	unique_ptr<realm::ThreadSafeReferenceBase, std::__1::default_delete<realm::ThreadSafeReferenceBase>>* _reference;
	id _metadata;
	Class _type;

}

@property (getter=isInvalidated,nonatomic,readonly) char invalidated; 
+(id)referenceWithThreadConfined:(id)arg1 ;
-(char)isInvalidated;
-(id)resolveReferenceInRealm:(id)arg1 ;
-(id)initWithThreadConfined:(id)arg1 ;
@end

