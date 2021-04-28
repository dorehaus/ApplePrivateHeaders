/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WorkflowKit/WorkflowKit-Structs.h>
@class NSString;

@interface WFRecordProperty : NSObject {

	char _readOnly;
	char _nonAtomic;
	char _dynamic;
	NSString* _name;
	NSString* _getter;
	NSString* _setter;

}

@property (nonatomic,readonly) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (getter=isReadOnly,nonatomic,readonly) char readOnly;                //@synthesize readOnly=_readOnly - In the implementation block
@property (getter=isNonAtomic,nonatomic,readonly) char nonAtomic;              //@synthesize nonAtomic=_nonAtomic - In the implementation block
@property (getter=isDynamic,nonatomic,readonly) char dynamic;                  //@synthesize dynamic=_dynamic - In the implementation block
@property (nonatomic,readonly) NSString * getter;                              //@synthesize getter=_getter - In the implementation block
@property (nonatomic,readonly) NSString * setter;                              //@synthesize setter=_setter - In the implementation block
-(NSString *)name;
-(char)isDynamic;
-(NSString *)getter;
-(NSString *)setter;
-(char)isReadOnly;
-(char)isNonAtomic;
-(id)initWithName:(id)arg1 property:(objc_propertyRef)arg2 ;
@end

