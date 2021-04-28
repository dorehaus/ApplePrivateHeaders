/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreFoundation/CoreFoundation-Structs.h>
@class NSMethodSignature, NSMutableArray;

@interface NSInvocation : NSObject {

	void* _frame;
	void* _retdata;
	NSMethodSignature* _signature;
	NSMutableArray* _container;
	char* _replacedByPointerBacking;
	unsigned _magic;
	unsigned char _retainedArgs;
	unsigned char _stackAllocated;

}

@property (retain,readonly) NSMethodSignature * methodSignature; 
@property (readonly) char argumentsRetained; 
@property (assign) id target; 
@property (assign) SEL selector; 
+(id)_invocationWithMethodSignature:(id)arg1 frame:(void*)arg2 ;
+(unsigned long long)requiredStackSizeForSignature:(id)arg1 ;
+(id)invocationWithMethodSignature:(id)arg1 ;
-(id)debugDescription;
-(id)userInfo;
-(void)setUserInfo:(id)arg1 ;
-(char)_hasBlockArgument;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)init;
-(SEL)selector;
-(void)setTarget:(id)arg1 ;
-(void)retainArguments;
-(void)getArgument:(void*)arg1 atIndex:(long long)arg2 ;
-(void)setArgument:(void*)arg1 atIndex:(long long)arg2 ;
-(void)invoke;
-(id)_initWithMethodSignature:(id)arg1 frame:(void*)arg2 buffer:(void*)arg3 size:(unsigned long long)arg4 ;
-(NSMethodSignature *)methodSignature;
-(char)argumentsRetained;
-(void)_addAttachedObject:(id)arg1 ;
-(id)target;
-(void)setSelector:(SEL)arg1 ;
-(void)getReturnValue:(void*)arg1 ;
-(void)setReturnValue:(void*)arg1 ;
-(void)invokeUsingIMP:(/*function pointer*/void*)arg1 ;
-(void)invokeSuper;
-(void)invokeWithTarget:(id)arg1 ;
@end
