/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/Versions/A/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ContactsFoundation/ContactsFoundation-Structs.h>
@class NSString;

@interface CNObjCMethod : NSObject {

	NSString* _name;
	/*function pointer*/void* _implementation;
	NSString* _typeEncoding;

}

@property (readonly) SEL selector; 
@property (copy,readonly) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (readonly) /*function pointer*/void* implementation;              //@synthesize implementation=_implementation - In the implementation block
@property (copy,readonly) NSString * typeEncoding;                          //@synthesize typeEncoding=_typeEncoding - In the implementation block
+(id)methodWithName:(id)arg1 implementation:(/*function pointer*/void*)arg2 typeEncoding:(id)arg3 ;
-(NSString *)name;
-(SEL)selector;
-(NSString *)typeEncoding;
-(id)initWithName:(id)arg1 implementation:(/*function pointer*/void*)arg2 typeEncoding:(id)arg3 ;
-(id)initWithMethod:(objc_methodRef)arg1 ;
-(id)methodBySettingName:(id)arg1 ;
-(id)performOnObject:(id)arg1 ;
-(/*function pointer*/void*)implementation;
@end

