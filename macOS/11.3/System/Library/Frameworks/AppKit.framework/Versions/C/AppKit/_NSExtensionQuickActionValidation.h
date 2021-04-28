/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_NSQuickActionValidation.h>

@class _NSExtensionQuickActionInvocation, NSSet, NSString;

@interface _NSExtensionQuickActionValidation : NSObject <_NSQuickActionValidation> {

	_NSExtensionQuickActionInvocation* _invocation;
	NSSet* _unvalidatedQuickActions;
	void* _observationInfo;

}

@property (readonly) char wantsAutovalidation; 
@property (copy,readonly) NSSet * validQuickActions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)accessInstanceVariablesDirectly;
+(id)validationForItemSource:(id)arg1 quickActions:(id)arg2 ;
+(char)automaticallyNotifiesObserversOfValidQuickActions;
-(void)dealloc;
-(void)setObservationInfo:(void*)arg1 ;
-(void*)observationInfo;
-(NSSet *)validQuickActions;
-(char)wantsAutovalidation;
-(id)initForItemSource:(id)arg1 quickActions:(id)arg2 ;
@end
